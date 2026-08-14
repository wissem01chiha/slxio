#!bash/bin/python
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


"""
List all .c and .cpp files in the given directory.

:param directory: Path to the directory to search
:return: List of file paths
to be refactored to genrte the "Module.txt"
 file later on
Example :
 scan --module ThirdParty::zip -r -*/c
display genela infos
 """
from pathlib import Path

def find_source_files(directory: str):

    dir_path = Path(directory)
    if not dir_path.is_dir():
        raise ValueError(f"{directory} is not a valid directory")

    files = list(dir_path.glob("*.c")) + list(dir_path.glob("*.cpp"))
    return files

if __name__ == "__main__":
    directory = "C:/Users/chiha.000/Documents/github/slxio/ThirdParty/libzip/src/lib"
    c_cpp_files = find_source_files(directory)
    print("found source files:")
    for f in c_cpp_files:
        print(f)
