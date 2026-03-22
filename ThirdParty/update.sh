#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

die() {
    echo >&2 "[FATAL] : $@"
    exit 1
}

warn () {
    echo >&2 "[WARNING] :" "$@"
}

########################################################################
# Cygwin workaround on Windows platform
########################################################################
CYGWIN=0
CURDIR=""

for arg in "$@"; do
  case "$arg" in
    --cygwin)
      CYGWIN=1
      ;;
    /cygdrive/*)
      CURDIR="$arg"
      ;;
  esac
done

# Degug Info
if [ "$CYGWIN" -eq 1 ]; then
  echo "Root directory     : $CURDIR"
else
  CURDIR=$(pwd)
  echo "Root directory     : $CURDIR"
fi
########################################################################

# Git checks
if ! command -v git >/dev/null 2>&1; then
    die "Git is not installed. 
    Updates require Git to be installed and properly configured."
else
    # Debug info
    echo "Git version        : $(git --version)"
fi

# disbale git detached Head warning when cloning release/tags branchs
git config --global advice.detachedHead false

# initialization routines
init_submodule() {
    unset name
    unset repository
    unset subtree
    unset version
    unset files
    unset branch
    unset tmpdir
}

# synchronize files from the local Git temporary directory
# into the main subtree, preserving directory structure
sync_submodule_file() {
    for f in "${files[@]}"; do
        if [ "$CYGWIN" -eq 1 ]; then
            src="/cygdrive/C/$tmpdir/$f"
            dst="$CURDIR/$subtree/$f"
        else
            src="$tmpdir/$f"
            dst="$subtree/$f"
        fi
        mkdir -p "$(dirname "$dst")"
        cp "$src" "$dst"
    done
}

# main utility for updating a submodule
# try to use the branch name (version) first, if that's not set, 
# fall back to a tag at least one reference (branch or tag) must be provided
update_submodule() {
    local tmpdir
    tmpdir=$(mktemp -d)

    if [ -z "$version" ] && [ -z "$tag" ]; then
        die "neither 'version' nor 'tag' is set in $d/update.sh"
    fi

    if [ -n "$version" ]; then
        echo "Cloning branch: $version"
        git clone --depth=1 --branch "v$version" --single-branch "$repository" "$tmpdir"
    else
        echo "Cloning tag: $tag"
        git clone --depth=1 --branch "$tag" --single-branch "$repository" "$tmpdir"
    fi
    sync_submodule_file
    if [ "$CYGWIN" -eq 1 ]; then
        rm -rf "/cygdrive/C/$tmpdir"
    else
        rm -rf "$tmpdir"
    fi
    echo "Updated $name in $subtree successfully"
}

dirs=$(ls -d "$CURDIR"/*/)
count=0

for d in $dirs; do
   echo "Updating Submodule : $d ..."
   cd "$d"
   if [ "$CYGWIN" -eq 1 ]; then
     dos2unix ./update.sh
   fi
   init_submodule
   . ./update.sh
   # Sanity checks
   [ -n "$name" ] || die "'name' is empty in $d/update.sh"
   [ -n "$subtree" ] || die "'subtree' is empty in $d/update.sh"
   [ -n "$repository" ] || die "'repository' is empty in $d/update.sh"

   update_submodule
   count=$((count + 1))
done

echo " Successfully updated $count submodule"

# reset git config 
git config --global advice.detachedHead true