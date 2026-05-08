#!/bin/sh

echo "Running pre-commit checks..."

FILES=$(git diff --cached --name-only --diff-filter=ACM | grep '\.sh$')
if [ -n "$FILES" ]; then
    shellcheck $FILES || {
        echo "Shellcheck failed. Fix issues before committing."
        exit 1
    }
fi

echo "All checks passed!"
