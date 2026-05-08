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
# Script for running all modules tests and collecting coverage.
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
    echo -e "[INFO] : $*"
}

success() {
    echo -e "[INFO] : $* ${GREEN}OK${COLOR_OFF}"
}

# Check CTest
CTEST=$(command -v ctest || true)
if [ -z "$CTEST" ]; then
    fatal "ctest not found in path, install CMake/CTest."
fi

# Default build directory 
BUILDDIR="${1:-build}"

if [ ! -d "$BUILDDIR" ]; then
    fatal "Build directory not found: $BUILDDIR"
fi

info "Running tests in build directory: $BUILDDIR"

(cd "$BUILDDIR" && $CTEST --output-on-failure)

success "tests executed."

info "Collecting coverage..."
(cd "$BUILDDIR" && $CTEST -T coverage)

success "Coverage report generated in: $BUILDDIR/Testing/Temporary"
