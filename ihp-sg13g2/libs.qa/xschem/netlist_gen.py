import os
import subprocess


# Directory where .sch files are locateda
pdk_dir = os.environ.get('PDK_ROOT')
if pdk_dir:
    base_directory = os.path.join(pdk_dir,'libs.tech/xschem/sg13g2_tests')
# Subdirectory where .spice files are expected
sim_directory = os.path.join(base_directory, 'simulation')
# List of .sch files in the base directory
sch_files = [f for f in os.listdir(base_directory) if f.endswith('.sch')]

cmd_rm = f"rm {sim_directory}/*.spice"
try:
    subprocess.run(cmd_rm, shell=True)
except Exception as e:
    print(f"Error occured {e}")


for sch_file in sch_files:
    
    sch_file_dir = os.path.join(base_directory,sch_file)
    # Define the command as a list of strings
    cmd_xschem = ["xschem", "--rcfile", f"{pdk_dir}/libs.tech/xschem/xschemrc", "-sxq", "-n", f"{sch_file_dir}"]
    try:
       # Run the command
        subprocess.run(cmd_xschem, check=True)
    except subprocess.CalledProcessError as e:
        print(f"Error: Command returned non-zero exit status {e.returncode}")
    # Get the base filename without the extension
    sch_filename = os.path.splitext(sch_file)[0]
    # Expected .spice file name based on .sch file
    spice_file = sch_filename + '.spice'
    # Full path to the .spice file in the "sim" subdirectory
    spice_path = os.path.join(sim_directory, spice_file)
    if os.path.exists(spice_path):
        print("Passed")
    else:
        print(f"No corresponding .spice file found for {sch_file}")
