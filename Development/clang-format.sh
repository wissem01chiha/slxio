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