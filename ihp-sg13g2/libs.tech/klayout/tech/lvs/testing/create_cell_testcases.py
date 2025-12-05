#! /usr/bin/env python3

"""
create_cell_testcases.py
1. Use klayout to create the "testcases/sg13g2_cells/<cell>/layout/<cell>.gds" files
    from "libs.ref/gds/sg13g2_stdcell.gds" by inserting frame layers
    Inserted layers for each cell are
    <cell>_digisub: Rect: DigiSub.drawing-60/0
    <cell>_iso: Rect: nBuLay.drawing-32/0, Ring: NWell.drawing-31/0
2. Create testcases/sg13g2_cells/<cell>/netlist/<cell>.cdl files
    from "libs.ref/cdl/sg13g2_stdcell.cdl"
"""

# import sys
from sys import stderr
import os
import re
from datetime import datetime, timezone
import argparse
import pya
from termcolor import cprint
from pprint import pprint
from pathlib import Path
import shutil
import logging
import inspect

BOUNDARY_LAYER = (189, 4)
DIGISUB_LAYER = (60, 0)
NBULAY_LAYER = (32, 0)
NWELL_LAYER = (31, 0)
BOUNDARY_SIZING = (1240, 1220, 1240, 1390)
NWELL_RING_WIDTH = 500


class CustomFormatter(logging.Formatter):
    def formatTime(self, record, datefmt=None):
        if datefmt:
            return datetime.fromtimestamp(record.created).strftime(datefmt)
        else:
            return datetime.fromtimestamp(record.created).strftime('%d-%b-%Y %H:%M:%S')


def die(message):
    cprint(message, 'red', attrs=['bold'], file=stderr)
    raise SystemExit(1)


def error(message, *, verbose=True):
    logger.error(message)
    if verbose:
        cprint(message, 'red', attrs=['bold'], file=stderr)


def warn(message, *, verbose=False):
    logger.warning(message)
    if verbose:
        # cprint(message, 'magenta', attrs=['bold'], file=stderr)
        cprint(message, 'magenta', file=stderr)


def info(message, *, verbose=False):
    logger.info(message)
    if verbose:
        # cprint(message, 'green', attrs=['bold'])
        cprint(message, 'green')


def debug(message, *, verbose=False):
    logger.debug(message)
    if verbose:
        # cprint(message, 'green', attrs=['bold'])
        cprint(message, 'yellow')


def vprint(message, *, verbose):
    if verbose:
        print(message)


def find_files_by_extension(directory, extension):

    search_files = []
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(extension):
                search_files.append(os.path.join(root, file))

    return search_files


def get_rect_size(shape):
    if not shape.is_box():
        die('Input shape object is not a rect')
    bbox = shape.bbox()
    width = bbox.right - bbox.left
    height = bbox.top - bbox.bottom
    return [width, height]


def grow_rect(shape, sizing: list[int]):
    if not shape.is_box():
        die('Input shape object is not a rect')

    if len(sizing) == 4:
        size_left, size_bottom, size_right, size_top = sizing
    elif len(sizing) == 2:
        size_left, size_bottom = size_right, size_top = sizing
    elif len(sizing) == 1:
        size_left = size_bottom = size_right = size_top = sizing
    else:
        die('Missing grow sizing values')

    bbox = shape.bbox()
    bbox_llx = bbox.left - size_left
    bbox_lly = bbox.bottom - size_bottom
    bbox_urx = bbox.right + size_right
    bbox_ury = bbox.top + size_top

    return [bbox_llx, bbox_lly, bbox_urx, bbox_ury]


def sort_layers(layers):
    return sorted(layers, key=lambda lay: (lay))


def get_cell_layers(layout, cell):

    used_layers = set()

    # Iterate through all shapes in the cell
    for layer_index in layout.layer_indices():
        shapes = cell.shapes(layer_index)
        if not shapes.is_empty():
            layer_info = layout.get_info(layer_index)
            used_layers.add((layer_info.layer, layer_info.datatype))

    return used_layers


def get_bbox_coordinates(bbox):
    bbox_str = str(bbox)
    return [point for point in re.split(r'\D', bbox_str) if point]


def get_points_with_hole(rect_outer, rect_inner):
    """
    Generate points within an outer rectangle excluding points inside an inner rectangle (hole).

    Parameters:
    - rect_outer: Tuple (x_min, y_min, x_max, y_max) for the outer rectangle.
    - rect_inner: Tuple (x_min, y_min, x_max, y_max) for the inner rectangle (hole).

    Returns:
    - List of points (x, y) along the outer/inner rectangle edges
    - Starts at (X-center of inner), (Y-bottom of outer)
    """

    current_func = inspect.currentframe().f_code.co_name

    x_min_outer, y_min_outer, x_max_outer, y_max_outer = rect_outer
    x_min_inner, y_min_inner, x_max_inner, y_max_inner = rect_inner

    x_both = sorted(rect_outer[0:3:2] + rect_inner[0:3:2])[0:4:3]
    x_outer = rect_outer[0:3:2]
    y_both = sorted(rect_outer[1:4:2] + rect_inner[1:4:2])[0:4:3]
    y_outer = rect_outer[1:4:2]
    if x_both != x_outer or y_both != y_outer:
        error(f'{current_func}: Inner rect {rect_inner} is not inside outer rect {rect_outer}')

    x_mid_inner = int((x_min_inner + x_max_inner) / 2)

    ring_points = []
    ring_points.append([x_mid_inner, y_min_outer])
    ring_points.append([x_min_outer, y_min_outer])
    ring_points.append([x_min_outer, y_max_outer])
    ring_points.append([x_max_outer, y_max_outer])
    ring_points.append([x_max_outer, y_min_outer])
    ring_points.append([x_mid_inner, y_min_outer])
    ring_points.append([x_mid_inner, y_min_inner])
    ring_points.append([x_max_inner, y_min_inner])
    ring_points.append([x_max_inner, y_max_inner])
    ring_points.append([x_min_inner, y_max_inner])
    ring_points.append([x_min_inner, y_min_inner])
    ring_points.append([x_mid_inner, y_min_inner])

    return ring_points


# ~~~~~~~~~~~~~~~~~~~~~~~ Main Procedure ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# Clone cdl PDK -> LVS
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def clone_cdl_files(cdl_in: str, cell_list: list, ref_dir: str, out_dir: str,
                    *, verbose=False):

    # Check input args
    cdl_path = Path(cdl_in)
    if not cdl_path.exists():
        die(f'Input cdl file does not exist: {cdl_in}')

    # Create subckt dict from the reference CDL
    subckt_ref = {}
    with open(cdl_in, 'rt') as f_in:
        input_line_number = 1
        for input_line in f_in:

            if input_line_number == 1:
                line_buf = [input_line]
                next_line = next(f_in)
                input_line_number += 1
                while next_line.strip() != "":
                    line_buf.append(next_line)
                    next_line = next(f_in)
                    input_line_number += 1
                subckt_ref['HEADER'] = line_buf
                continue

            elif input_line.startswith('*****'):
                line_buf = [input_line]
                next_line = next(f_in)
                input_line_number += 1
                while next_line.strip() != ".ENDS":
                    if re.match(r'\.SUBCKT', next_line):
                        cell_name = next_line.split()[1]
                    line_buf.append(next_line)
                    next_line = next(f_in)
                    input_line_number += 1
                line_buf.append(next_line)
                subckt_ref[cell_name] = line_buf

    # pprint(f'{subckt_ref=}')

    out_dir_by_cell = {}
    for cell_ref in cell_list:

        search_cdl = find_files_by_extension(ref_dir, f'{cell_ref}.cdl')
        src_path = search_cdl[0]
        dest_path = os.path.join(out_dir, f'{cell_ref}/netlist/{cell_ref}.cdl')
        # print(f'{cell_ref=} {src_path=} {dest_path=}')

        if not os.path.exists(os.path.dirname(dest_path)):
            out_path = Path(os.path.dirname(dest_path))
            out_path.mkdir(parents=True, exist_ok=True)

        if cell_ref not in subckt_ref:
            if os.path.exists(dest_path):
                warn(f'Already exists {dest_path} => Skipped copy', verbose=True)
            else:
                warn(f'Copy {src_path} -> {dest_path}', verbose=True)
                shutil.copy2(src_path, dest_path)
            warn('Manual update may be needed', verbose=True)

        else:
            info(f'Clone subckt_ref[{cell_ref}] -> {dest_path}', verbose=True)
            with open(dest_path, 'wt') as f_out:
                for line in subckt_ref['HEADER']:
                    f_out.write(line)
                f_out.write('\n')

                for line in subckt_ref[cell_ref]:
                    f_out.write(line)
                f_out.write('\n')

                for line in subckt_ref[cell_ref]:
                    f_out.write(line.replace(cell_ref, f"{cell_ref}_iso"))
                f_out.write('\n')

                for line in subckt_ref[cell_ref]:
                    f_out.write(line.replace(cell_ref, f"{cell_ref}_digisub"))

        out_dir_by_cell[cell_ref] = os.path.dirname(dest_path)


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# Clone GDS PDK -> LVS
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
def insert_stdcell_frames(gds_in: str, cell_list: list, ref_dir: str, out_dir: str,
                          *, verbose=False):

    # Check input args
    gds_path = Path(gds_in)
    if not gds_path.exists():
        die(f'Input gds does not exist: {gds_in}')

    # Read input GDS
    layout = pya.Layout()
    info(f'Reading input GDS file {gds_in} ..', verbose=True)
    layout.read(gds_in)

    # fh_out = open('skipped_cells.list', 'wt')
    out_dir_by_cell = {}

    for cell_ref in cell_list:

        cell = layout.cell(cell_ref)

        search_gds = find_files_by_extension(ref_dir, f'{cell_ref}.gds')
        if len(search_gds) == 0:
            warn(f'Reference gds of {cell_ref} does not exist => Skipped', verbose=True)
            continue

        src_path = find_files_by_extension(ref_dir, f'{cell_ref}.gds')[0]
        dest_path = os.path.join(out_dir, f'{cell_ref}/layout/{cell_ref}.gds')

        if not os.path.exists(os.path.dirname(dest_path)):
            out_path = Path(os.path.dirname(dest_path))
            out_path.mkdir(parents=True, exist_ok=True)

        if not cell:
            if not os.path.exists(dest_path):
                info(f'Copy {src_path} -> {dest_path}', verbose=verbose)
                shutil.copy(src_path, dest_path)
            out_dir_by_cell[cell_ref] = os.path.dirname(dest_path)
            warn(f'Copying non library cell {src_path} -> {dest_path}', verbose=verbose)
            warn('Manual update may be needed', verbose=True)
            continue

        info(f'Extracting cell => {cell.name}', verbose=True)

        # Clone cell with postfix => _digisub, _iso
        info(f'Clone cell {cell.name} => {cell.name}_digisub', verbose=verbose)
        cell_digisub = layout.create_cell(cell.name + '_digisub')
        cell_digisub.copy_tree(cell)
        info(f'Clone cell {cell.name} => {cell.name}_iso', verbose=verbose)
        cell_iso = layout.create_cell(cell.name + '_iso')
        cell_iso.copy_tree(cell)

        info(f'Layers in {cell.name} =>', verbose=verbose)
        cell_layers = sort_layers(get_cell_layers(layout, cell))
        info(cell_layers, verbose=verbose)

        if BOUNDARY_LAYER not in cell_layers:
            warn(f'{BOUNDARY_LAYER=} does not exist in {cell.name} => Skipped')
            continue

        # ~~~~~~~~~~~~~~~~~~~~~~~~~
        # Create frame layers
        # ~~~~~~~~~~~~~~~~~~~~~~~~~
        layer_index = layout.layer(DIGISUB_LAYER)
        info(f'Add layer to {cell_digisub.name} {DIGISUB_LAYER} ({layer_index})', verbose=verbose)
        add_shape_digisub = cell_digisub.shapes(layer_index)

        layer_index = layout.layer(NBULAY_LAYER)
        info(f'Add layer to {cell_iso.name} {NBULAY_LAYER} ({layer_index})', verbose=verbose)
        add_shape_iso_nbulay = cell_iso.shapes(layer_index)

        layer_index = layout.layer(NWELL_LAYER)
        add_shape_iso_nwel = cell_iso.shapes(layer_index)

        for layer_index in layout.layer_indices():
            layer_info = layout.get_info(layer_index)
            if (layer_info.layer, layer_info.datatype) == BOUNDARY_LAYER:
                info(f'Boundary layer {BOUNDARY_LAYER} => {layer_info}', verbose=verbose)

                # Add DigiSub.drawing shape
                boundary_shapes = cell_digisub.shapes(layer_index)

                for shape in boundary_shapes.each():
                    if not shape.is_box():
                        die('Boundary shape is not bbox')

                    boundary_sized = grow_rect(shape, BOUNDARY_SIZING)
                    info(f'Add DigiSub.drawing rect to {cell_digisub.name} with {boundary_sized=}',
                         verbose=verbose)
                    add_shape_digisub.insert(pya.Box(boundary_sized))

                # Add nBuLay.drawing shape
                boundary_shapes = cell_iso.shapes(layer_index)

                for shape in boundary_shapes.each():
                    if not shape.is_box():
                        die('Boundary shape is not bbox')

                    boundary_sized = grow_rect(shape, BOUNDARY_SIZING)
                    info(f'Add nBuLay.drawing rect to {cell_iso.name} with {boundary_sized=}',
                         verbose=verbose)
                    add_shape_iso_nbulay.insert(pya.Box(boundary_sized))

                # Add NWELL.drawing ring
                boundary_shapes = cell_iso.shapes(layer_index)

                for shape in boundary_shapes.each():
                    if not shape.is_box():
                        die('Boundary shape is not bbox')

                    boundary_outer = grow_rect(shape, BOUNDARY_SIZING)
                    info(f'NWEL outer {boundary_outer=}', verbose=verbose)
                    boundary_inner = [
                        boundary_outer[0] + NWELL_RING_WIDTH,
                        boundary_outer[1] + NWELL_RING_WIDTH,
                        boundary_outer[2] - NWELL_RING_WIDTH,
                        boundary_outer[3] - NWELL_RING_WIDTH,
                    ]
                    info(f'NWEL inner {boundary_inner=}', verbose=verbose)
                    nwel_ring_points = get_points_with_hole(boundary_outer, boundary_inner)
                    info(f'{nwel_ring_points=}', verbose=verbose)

                    info(f'Add NWELL.drawing ring to {cell_iso.name} with {nwel_ring_points=}',
                         verbose=verbose)
                    pya_points = [pya.Point(x, y) for x, y in nwel_ring_points]
                    # info(f'{pya_points=}', verbose=verbose)
                    add_shape_iso_nwel.insert(pya.Polygon(pya_points))

        layout_gds = pya.Layout()
        layout_gds.dbu = layout.dbu
        # Original
        layout_gds_cell = layout_gds.create_cell(cell.name)
        layout_gds_cell.copy_tree(cell)
        # _digisub
        layout_gds_cell = layout_gds.create_cell(cell_digisub.name)
        layout_gds_cell.copy_tree(cell_digisub)
        # _iso
        layout_gds_cell = layout_gds.create_cell(cell_iso.name)
        layout_gds_cell.copy_tree(cell_iso)

        layout_gds.write(os.path.join(dest_path))
        out_dir_by_cell[cell.name] = os.path.dirname(dest_path)

    # fh_out.close()
    return out_dir_by_cell


def copy_yaml_files(ref_dir: str, out_dir: str, *, verbose=False):

    src_path = find_files_by_extension(ref_dir, '.yaml')

    for each_path in src_path:
        base_name = os.path.basename(each_path)
        cell_name = re.sub(r'(?:_iso|_digisub)?\.yaml', '', base_name)
        dest_path = os.path.join(out_dir, f'{cell_name}/layout/{base_name}')

        if not os.path.exists(dest_path):
            info(f'Copy {each_path} -> {dest_path}', verbose=True)
            shutil.copy2(dest_path, dest_path)


if __name__ == "__main__":

    SCRIPT_DIR = os.path.realpath(__file__)

    default_gds_ref = re.sub(r'libs\.tech.*',
                             'libs.ref/sg13g2_stdcell/gds/sg13g2_stdcell.gds',
                             SCRIPT_DIR)
    default_cdl_ref = re.sub(r'libs\.tech.*',
                             'libs.ref/sg13g2_stdcell/cdl/sg13g2_stdcell.cdl',
                             SCRIPT_DIR)

    default_input_dir = './testcases/sg13g2_cells'
    default_output_dir = './testcases/sg13g2_cells'

    parser = argparse.ArgumentParser(description='Inserts frame shapes from reference GDS')
    parser.add_argument('--gds_ref', '-gds', action='store', default=default_gds_ref,
                        help=f'Reference GDS file (default={default_gds_ref})')
    parser.add_argument('--cdl_ref', '-cdl', action='store', default=default_cdl_ref,
                        help=f'Reference CDL file (default={default_cdl_ref})')
    parser.add_argument('--testcase_dir', '-i', action='store', default=default_input_dir,
                        help=f'Reference testcase directory (default={default_input_dir})')
    parser.add_argument('--out_dir', '-o', action='store', default=default_output_dir,
                        help=f'Output result files directory (default={default_output_dir}')
    parser.add_argument('--cell_name', '-s', action='store',
                        help='Select executing cell name (default=all)')
    parser.add_argument('--clean', '-c', action='store_true',
                        help='Clean previous gds files in the output directory')
    parser.add_argument('--verbose', '-v', action='store_true',
                        help='Verbose mode on at gdsdiff')
    args = parser.parse_args()

    gds_ref = args.gds_ref
    cdl_ref = args.cdl_ref
    ref_dir = args.testcase_dir
    out_dir = args.out_dir

    chk_path = Path(ref_dir)
    if not chk_path.exists():
        die(f'Input path does not exist: {chk_path}')

    CELL_LIST = [os.path.basename(cdl_file).replace('.cdl', '') for cdl_file
                 in find_files_by_extension(ref_dir, '.cdl')]
    pprint(f'{CELL_LIST=}')

    # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    # Replace GDS & CDL in testcases/sg13g2_cells with libs.ref/sg13g2_stdcell
    # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    run_name = datetime.now(timezone.utc).strftime('create_cells_%Y_%m_%d_%H_%M_%S')
    output_path = '.'
    log_file = os.path.join(output_path, f'{run_name}.log')

    # Create a logger
    logger = logging.getLogger('mon_logger')
    logger.setLevel(logging.DEBUG)

    # Create a console handler and set its log level
    console_handler = logging.StreamHandler()
    console_handler.setLevel(logging.WARNING)

    # Create a file handler and set its log level
    file_handler = logging.FileHandler(log_file)
    file_handler.setLevel(logging.DEBUG)

    # Create a formatter and add it to the handlers
    formatter = CustomFormatter('%(asctime)s | %(levelname)-7s | %(message)s')
    console_handler.setFormatter(formatter)
    file_handler.setFormatter(formatter)

    # Add the handlers to the logger
    logger.addHandler(console_handler)
    logger.addHandler(file_handler)

    # Create result output directory if not exist
    out_path = Path(out_dir)
    if args.clean:
        if Path(ref_dir) == out_path:
            warn(f"Can not clean output directory {out_path} because it is also the reference directory.")
        else:
            shutil.rmtree(out_path)
    out_path.mkdir(parents=True, exist_ok=True)

    # ~~~~~~~~~~~~~~~~~~~
    # Replace cdl
    # ~~~~~~~~~~~~~~~~~~~
    clone_cdl_files(cdl_ref, CELL_LIST, ref_dir, out_dir, verbose=args.verbose)

    # ~~~~~~~~~~~~~~~~~~~
    # Replace GDS
    # ~~~~~~~~~~~~~~~~~~~
    saved_dir = insert_stdcell_frames(gds_ref, CELL_LIST, ref_dir, out_dir, verbose=args.verbose)

    # ~~~~~~~~~~~~~~~~~~~
    # Copy yaml
    # ~~~~~~~~~~~~~~~~~~~
    copy_yaml_files(ref_dir, out_dir, verbose=True)

    # ~~~~~~~~~~~~~~~~~~~
    # Check ERROR
    # ~~~~~~~~~~~~~~~~~~~
    os.system(f'grep --color ERROR {log_file}')
