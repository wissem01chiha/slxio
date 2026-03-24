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

COLOR_OFF="\033[0m"
RED="\033[0;31m"
GREEN="\033[0;32m"
YELLOW="\033[1;33m"

die() {
    echo -e >&2 "${RED}[FATAL] : $@${COLOR_OFF}"
    exit 1
}

warn() {
    echo -e >&2 "${YELLOW}[WARNING] : $@${COLOR_OFF}"
}

info() {
    echo -e >&2 "[INFO] : $@"
}

ok() {
    echo -e >&2 "[INFO] : $@ ${GREEN}OK${COLOR_OFF}"
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

# root directory
if [ "$CYGWIN" -eq 1 ]; then
  CURDIR="$CURDIR"
else
  CURDIR=$(pwd)
fi

echo "=================================================================="
echo " Updating Submodules ... "
echo " Root directory : $CURDIR"
echo " Git version    : $(git --version)"
echo "=================================================================="

########################################################################

# Git checks
if ! command -v git >/dev/null 2>&1; then
    die "Git is not installed. 
    Updates require Git to be installed and properly configured."
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
    info "Updating files ..."
    local updated=0
    for f in "${files[@]}"; do
        if [ "$CYGWIN" -eq 1 ]; then
            src="/cygdrive/C/$tmpdir/$f"
            dst="$CURDIR/$subtree/$f"
        else
            src="$tmpdir/$f"
            dst="$CURDIR/$subtree/$f"
        fi
        mkdir -p "$(dirname "$dst")"
        cp "$src" "$dst"
        updated=$((updated + 1))
    done
    ok "Updated $updated files for $name ..."
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
        info "Cloning branch $version ..."
        git clone --depth=1 --branch "v$version" --single-branch "$repository" "$tmpdir" >/dev/null 2>&1 \
        || die "failed to clone $repository"
        ok "Cloning branch $version ..."
    else
        info "Cloning tag $tag ..."
        git clone --depth=1 --branch "$tag" --single-branch "$repository" "$tmpdir" >/dev/null 2>&1 \
        || die "failed to clone $repository"
        ok "Cloning tag $tag ..."
    fi
    sync_submodule_file
    if [ "$CYGWIN" -eq 1 ]; then
        rm -rf "/cygdrive/C/$tmpdir"
    else
        rm -rf "$tmpdir"
    fi
    ok "Updating $name ..."
}

dirs=$(ls -d "$CURDIR"/*/)
count=0

for d in $dirs; do
   info "Updating submodule $d ..."
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

info "--------------------------------------------"
info " Successfully updated $count submodules"
info "--------------------------------------------"

# reset git config 
git config --global advice.detachedHead true