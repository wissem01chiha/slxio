#!/bin/bash
#=============================================================================
# Copyright 2025-2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http:#www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#=============================================================================

set -e

########################################################################
# Script for updating third-party packages.
# 
# Example :
#   Update all Json-C files vendored 
#
#       set -e
#       name="json-c"
#       repository="https://github.com/json-c/json-c"
#       subtree="$name/src"
#       version=""
#       tag="json-c-0.18"
#       files=($(find ./src -maxdepth 1 -type f -printf "%f\n"))
# 
# to get the defulat list of files :
#  >> find . -type f -printf '    "%P"\n' | sort
########################################################################

COLOR_OFF="\033[0m"
BLACK="\033[0;30m"
RED="\033[0;31m"
GREEN="\033[0;32m"
YELLOW="\033[0;33m"
BLUE="\033[0;34m"
MAGENTA="\033[0;35m"
CYAN="\033[0;36m"
WHITE="\033[0;37m"

fatal() {
    echo -e >&2 "${RED}[FATAL] : $*${COLOR_OFF}"
    exit 1
}

warn() {
    echo -e >&2 "${YELLOW}[WARNING] : $*${COLOR_OFF}"
}

info() {
    echo -e >&2 "[INFO] : $*"
}

success() {
    echo -e >&2 "[INFO] : $* ${GREEN}OK${COLOR_OFF}"
}

CYGWIN=0
SRCDIR=""

set_source_dir() {
    for arg in "$@"; do
        case "$arg" in
            --cygwin) CYGWIN=1 ;;
            /cygdrive/*) SRCDIR="$arg" ;;
        esac
    done

    if [ "$CYGWIN" -eq 1 ]; then
        SRCDIR="$SRCDIR"
    else
        SRCDIR=$(pwd)
    fi
}

get_source_subdirs() {
    ls -d "$SRCDIR"/*/ 2>/dev/null
}

setup_git() {
    if ! command -v git >/dev/null 2>&1; then
        fatal "Git is not installed. Updates require Git to be installed and configured."
    fi
    git config --global advice.detachedHead false
}

init_submodule() {
    unset name repository subtree version files branch tmpdir tag
}

sync_files_subtree() {
    info "Synchronizing files ..."
    local updated=0
    for f in "${files[@]}"; do
        if [ "$CYGWIN" -eq 1 ]; then
            src="/cygdrive/C/$tmpdir/$f"
            dst="$SRCDIR/$subtree/$f"
        else
            src="$tmpdir/$f"
            dst="$SRCDIR/$subtree/$f"
        fi
        mkdir -p "$(dirname "$dst")"
        cp "$src" "$dst"
        updated=$((updated + 1))
    done
    success "Updated $updated files for $name ..."
}

clean_tmpdir(){
    if [ "$CYGWIN" -eq 1 ]; then
        rm -rf "/cygdrive/C/$tmpdir"
    else
        rm -rf "$tmpdir"
    fi
}

clone_update_submodule() {
    tmpdir=$(mktemp -d)

    if [ -z "$version" ] && [ -z "$tag" ]; then
        fatal "Neither 'version' nor 'tag' is set in $d/update.sh"
    fi

    if [ -n "$version" ]; then
        info "Cloning branch $version ..."
        git clone --depth=1 --branch "v$version" --single-branch "$repository" "$tmpdir" >/dev/null 2>&1 \
            || fatal "Failed to clone $repository"
        success "Cloning branch $version ..."
    else
        info "Cloning tag $tag ..."
        git clone --depth=1 --branch "$tag" --single-branch "$repository" "$tmpdir" >/dev/null 2>&1 \
            || fatal "Failed to clone $repository"
        success "Cloning tag $tag ..."
    fi

    sync_files_subtree
    clean_tmpdir
    success "Updated $name ..."
}

main() {
    set_source_dir "$@"
    setup_git

    dirs=$(get_source_subdirs)
    count=0

    for d in $dirs; do
        info "Processing submodule $d ..."
        cd "$d"

        if [ "$CYGWIN" -eq 1 ]; then
            dos2unix ./update.sh >/dev/null 2>&1
        fi

        init_submodule
        . ./update.sh

        # Sanity checks
        [ -n "$name" ] || fatal "'name' is empty in $d/update.sh"
        [ -n "$subtree" ] || fatal "'subtree' is empty in $d/update.sh"
        [ -n "$repository" ] || fatal "'repository' is empty in $d/update.sh"

        clone_update_submodule
        count=$((count + 1))
    done

    info "--------------------------------------------"
    info " Successfully updated $count submodules"
    info "--------------------------------------------"

    git config --global advice.detachedHead true
}

main "$@"
