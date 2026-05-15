@echo off
setlocal enabledelayedexpansion

REM
REM SPDX-FileCopyrightText: Copyright 2025-2026 Wissem Chiha
REM SPDX-License-Identifier: Apache-2.0
REM

REM Get source directory from first argument,
REM fallback to current script folder
if "%~1"=="" (
    set SRCDIR=%~dp0
) else (
    set SRCDIR=%~1
)

REM Get custom clang-format file from second argument,
REM fallback to script folder
if "%~2"=="" (
    set CLANGFILE=%~dp0\.clang-format
) else (
    set CLANGFILE=%~2
)

REM clang-format available
where clang-format >nul 2>&1
if errorlevel 1 (
    echo [FATAL] clang-format not installed or not in PATH
    exit /b 1
)

REM Sanity check
if not exist "%CLANGFILE%" (
    echo [FATAL] clang-format config file not found: %CLANGFILE%
    exit /b 1
)

echo [INFO] Source directory: %SRCDIR%
echo [INFO] Using clang-format config: %CLANGFILE%

for /r "%SRCDIR%" %%f in (*.c *.cpp *.cxx *.h *.hpp) do (
    echo [INFO] Formatting %%f
    clang-format -i --style=file --fallback-style=none -assume-filename="%CLANGFILE%" "%%f"
)

echo [INFO] All files have been formatted successfully.
endlocal
