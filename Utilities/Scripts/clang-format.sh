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

#!/bin/bash
# based on https://github.com/tiny-dnn/tiny-dnn/blob/master/scripts/clang-format.sh

COLOR_OFF="\033[0m"
RED="\033[0;31m"
GREEN="\033[0;32m"

STYLE=$(which clang-format)
if [ $? -ne 0 ]; then
    echo "$RED clang-format not installed. Unable to check source file format policy.$COLOR_OFF" >&2
    exit 1
fi

BASE=$(git rev-parse --show-toplevel)

ALLFILES=$(git ls-tree --full-tree --name-only -r HEAD \
    | grep -E ".*\.(c|cpp|cxx|h|hpp)$" \
    | grep -v "^ThirdParty/" \
    | grep -v "^Documentation/" 
)
for FILE in $ALLFILES; do
    "$STYLE" -i "$BASE/$FILE"
    echo -e "${GREEN}Formatted $FILE${COLOR_OFF}"
done

echo -e "${GREEN}All files have been formatted.${COLOR_OFF}"