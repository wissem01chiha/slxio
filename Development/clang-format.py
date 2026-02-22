#!/usr/bin/env python3
# python Development/clang-format.py
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
