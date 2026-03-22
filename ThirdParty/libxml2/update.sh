#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

name="libxml2"
repository="https://github.com/GNOME/libxml2"
subtree="$name/src"
version=""
tag="v2.15.2"
files=(
    "Copyright"
    "README.md"
    "include/libxml/debugXML.h"
    "buf.c"
    "HTMLparser.c"
    "debugXML.c"
    "c14n.c"
    "catalog.c"
    "chvalid.c"
    "config.h.cmake.in"
)