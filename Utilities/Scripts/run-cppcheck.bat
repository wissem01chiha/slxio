@echo off
setlocal enabledelayedexpansion

REM
REM SPDX-FileCopyrightText: Copyright 2025-2026 Wissem Chiha
REM SPDX-License-Identifier: Apache-2.0
REM

WHERE cppcheck.exe > NUL 2>&1
IF %ERRORLEVEL% NEQ 0 (
  ECHO cppcheck.exe not found.
  EXIT /B 1
)

cppcheck ^
    --enable=all ^
    --inconclusive ^
    --std=c++11 ^
    --suppress=missingIncludeSystem ^
    --suppress=missingInclude ^
    --enable=style ^
    --enable=performance ^
    --suppress=missingSystemInclude ^
    --suppress=unmatchedSuppression ^
    --error-exitcode=1 ^
    --inline-suppr ^
    ./include/** ^
