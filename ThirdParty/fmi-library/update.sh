#!/bin/bash

set -e

name="fmi-library"
repository="https://github.com/modelon-community/fmi-library"
subtree="$name/src"
version="3.0.4"
tag=""
files=(
    "src/include/xlsxwriter.h"
    "LICENSE"
    "README.md"
)
