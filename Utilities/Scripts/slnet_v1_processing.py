#!/usr/bin/env python3

import os
import zipfile
from pathlib import Path
import sys

def extract_selected_files(zip_path, dest_dir, archive_prefix=""):
    target_exts = {".slx", ".sldd"}   
    with zipfile.ZipFile(zip_path, "r") as zf:
        for member in zf.namelist():
            ext = Path(member).suffix.lower()
            if ext in target_exts:
                archive_name = Path(zip_path).stem
                target_folder = dest_dir / archive_prefix / archive_name
                target_folder.mkdir(parents=True, exist_ok=True)

                target_path = target_folder / Path(member).name
                with zf.open(member) as source, open(target_path, "wb") as target:
                    target.write(source.read())
                print(f"Extracted {member} -> {target_path}")

            elif member.lower().endswith(".zip"):
                nested_zip_path = dest_dir / Path(member).name
                with zf.open(member) as nested_file, open(nested_zip_path, "wb") as f:
                    f.write(nested_file.read())
                extract_selected_files(nested_zip_path, dest_dir, archive_prefix=Path(zip_path).stem)
                nested_zip_path.unlink()   

def main():
    if len(sys.argv) < 2:
        print("Usage: python extract_slnet.py <path_to_SLNET_v1>")
        sys.exit(1)

    input_dir = Path(sys.argv[1]).resolve()
    output_dir = input_dir.parent / (input_dir.stem + "_Out")
    output_dir.mkdir(parents=True, exist_ok=True)

    for root, _, files in os.walk(input_dir):
        for file in files:
            if file.lower().endswith(".zip"):
                zip_path = Path(root) / file
                print(f"Processing {zip_path}...")
                extract_selected_files(zip_path, output_dir)

if __name__ == "__main__":
    main()
