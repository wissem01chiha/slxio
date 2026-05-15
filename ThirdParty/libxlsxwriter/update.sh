#!/bin/bash

set -e

name="libxlsxwriter"
repository="https://github.com/jmcnamara/libxlsxwriter"
subtree="$name/src"
version="1.2.4"
tag=""
files=(
    "src/include/xlsxwriter.h"
    "LICENSE"
    "README.md"
)
