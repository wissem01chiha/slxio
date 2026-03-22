#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

name="loguru"
repository="https://github.com/emilk/loguru"
subtree="$name/src"
version="2.1.0"
tag=""
files=(
    "loguru.hpp"
    "loguru.cpp"
    # "LICENSE"
    "README.md"
)

