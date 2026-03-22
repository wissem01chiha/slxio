#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

name="libzip"
repository="https://github.com/nih-at/libzip"
subtree="$name/src"
version="1.11.4"
tag=""
files=(
    "AUTHORS"
    "LICENSE"
    "THANKS"
    "README.md"
    "config.h.in"
    "libzip-config.cmake.in"
    "zipconf.h.in"
    "lib/compat.h"
    "lib/zip.h"
    "lib/zip_add_dir.c"
    "lib/zip_add_entry.c"
    "src/diff_output.c"
    "src/diff_output.h"
    "src/getopt.c"
    "src/getopt.h"
    "src/zipcmp.c"
    "src/zipmerge.c"
    "src/ziptool.c"
    
)