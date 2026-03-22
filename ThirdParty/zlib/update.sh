#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

name="zlib"
repository="https://github.com/madler/zlib"
subtree="$name/src"
version="1.3.2"
tag=""
files=(
    "adler32.c"
    "compress.c"
    "LICENSE"
    "crc32.c"
    "crc32.h"
    "deflate.c"
    "deflate.h"
    "gzclose.c"
    "gzguts.h"
    "gzlib.c"
    "gzread.c"
    "gzwrite.c"
    "infback.c"
    "inffast.c"
    "inffast.h"
    "inffixed.h"
    "inflate.c"
    "inflate.h"
    "inftrees.c"
    "inftrees.h"
    "trees.c"
    "trees.h"
    "uncompr.c"
    "zconf.h"
    "zconf.h.in"
    "zlib.3"
    "zlib.3.pdf"
    "zlib.h"
    "zlib.pc.cmakein"
    "zlibConfig.cmake.in"
    "zutil.c"
    "zutil.h"
    "README"
    "README-cmake.md"
)