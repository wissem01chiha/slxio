#!/bin/bash

set -e

name="slog"
repository="https://github.com/kala13x/slog"
subtree="$name/src"
version="1.8.48"
tag=""
files=(
    "src/slog.h"
    "src/slog.c"
    "README.md"
)