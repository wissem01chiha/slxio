#!/bin/bash
#=============================================================================
# Copyright 2025-2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#=============================================================================

set -e

########################################################################
# Script for formatting source code using clang-format
# if no custom clang-format file passed, the script assume in the current
# working directory
########################################################################

COLOR_OFF="\033[0m"
RED="\033[0;31m"
GREEN="\033[0;32m"
YELLOW="\033[0;33m"

fatal() {
    echo -e >&2 "${RED}[FATAL] : $*${COLOR_OFF}"
    exit 1
}

info() {
    echo -e >&2 "[INFO] : $*"
}

success() {
    echo -e >&2 "[INFO] : $* ${GREEN}OK${COLOR_OFF}"
}

# Sanity check
STYLE=$(command -v clang-format || true)
if [ -z "$STYLE" ]; then
    fatal "clang-format not installed."
fi

SRCDIR="$1"
CLANGFILE="$2"

if [ -z "$SRCDIR" ]; then
    fatal "Usage: $0 <source-directory> [clang-format-file]"
fi

if [ -z "$CLANGFILE" ]; then
    SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
    CLANGFILE="$SCRIPT_DIR/.clang-format"
fi

if [ ! -f "$CLANGFILE" ]; then
    fatal "clang-format config file not found: $CLANGFILE"
fi

info "Source directory: $SRCDIR"
info "Using clang-format config: $CLANGFILE"

ALLFILES=$(find "$SRCDIR" \
    -type f \
    \( -name "*.c" -o -name "*.cpp" -o -name "*.cxx" \
        -o -name "*.h" -o -name "*.hpp" \))

for FILE in $ALLFILES; do
    "$STYLE" -i --style=file --fallback-style=none "$FILE"\
     -style=file -assume-filename="$CLANGFILE"
    info "Formatted $FILE"
done

success "All files have been formatted."
