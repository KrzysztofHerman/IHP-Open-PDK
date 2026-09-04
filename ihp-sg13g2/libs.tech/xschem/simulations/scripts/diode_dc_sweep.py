"""Plot the four diode currents written by dc_diode_op.spice."""

import argparse
from pathlib import Path

import matplotlib.pyplot as plt
import pandas as pd


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("csv", nargs="?", default="diodes.csv", type=Path)
    parser.add_argument("-o", "--output", type=Path)
    args = parser.parse_args()

    if not args.csv.exists():
        parser.error(f"CSV file does not exist: {args.csv}")

    data = pd.read_csv(args.csv, sep=r"\s+", header=None)
    if data.shape[1] != 8:
        raise ValueError(
            f"Expected eight columns from ngspice wrdata, found {data.shape[1]}"
        )
    data = data.astype(float)

    voltage = [data.iloc[:, column].to_numpy() for column in (0, 2, 4, 6)]
    current = [data.iloc[:, column].to_numpy() * 1e6 for column in (1, 3, 5, 7)]
    labels = ["Vmda1", "Vmdp1", "Vmda2", "Vmdp2"]

    fig, axes = plt.subplots(2, 1, sharex=True, figsize=(9, 8), constrained_layout=True)

    for x_values, y_values, label in zip(voltage, current, labels):
        axes[0].plot(x_values, y_values, label=label)
    axes[0].set_title("Diode currents")
    axes[0].set_ylabel("Current [uA]")
    axes[0].legend()
    axes[0].grid(True, alpha=0.3)

    axes[1].plot(voltage[0], current[0] - current[2], label="Vmda1 - Vmda2")
    axes[1].plot(voltage[1], current[1] - current[3], label="Vmdp1 - Vmdp2")
    axes[1].set_title("Differences between matching diode traces")
    axes[1].set_xlabel("Voltage [V]")
    axes[1].set_ylabel("Current difference [uA]")
    axes[1].legend()
    axes[1].grid(True, alpha=0.3)

    output = args.output or args.csv.parent / "fig" / f"{args.csv.name}.png"
    output.parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(output, dpi=300)
    fig.show()
    print(f"Saved plot to {output}")


if __name__ == "__main__":
    main()
