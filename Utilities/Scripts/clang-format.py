#=============================================================================
# Copyright 2025-2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http:#www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#=============================================================================

#!/usr/bin/env python3

import os
import subprocess

def check_clang_format():
    result = subprocess.run(['where', 'clang-format'], 
                            stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE)
    if result.returncode != 0:
        print('clang-format not found')
        return False
    return True

def format_source_files():
    for root, dirs, files in os.walk('.'):
        dirs[:] = [d for d in dirs if d not in ('build', 'ThirdParty')]
        for file in files:
            if file.endswith('.cxx') or file.endswith('.h'):
                file_path = os.path.join(root, file)
                print(f'formatting {file_path}...')
                subprocess.run(['clang-format', '-i', file_path])

if __name__ == '__main__':
    if not check_clang_format():
        exit(1)
    format_source_files()
