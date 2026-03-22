#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

name="slog"
repository="https://github.com/kala13x/slog"
subtree="$name/src"
version="1.8.48"
tag=""
files=(
    "src/slog.h"
    "src/slog.c"
    # "LICENSE"
    "README.md"
)