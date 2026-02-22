#!/usr/bin/env python3
# python Development/cmake-format.py
import os
import subprocess

def check_cmake_format():
    result = subprocess.run(['where', 'cmake-format'], 
                            stdout=subprocess.PIPE, 
                            stderr=subprocess.PIPE)
    if result.returncode != 0:
        print('cmake-format not found')
        return False
    return True

def format_cmake_files():
    for root, dirs, files in os.walk('.'):
        dirs[:] = [d for d in dirs if d not in ('build', 'ThirdParty')]
        for file in files:
            if file.endswith('.cmake') or file == 'CMakeLists.txt':
                file_path = os.path.join(root, file)
                print(f'formatting {file_path}...')
                subprocess.run(['cmake-format', '-i', file_path])

if __name__ == '__main__':
    if not check_cmake_format():
        exit(1)
    format_cmake_files()