#!/usr/bin/env python3
#=============================================================================
# Copyright 2025-2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#=============================================================================

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
