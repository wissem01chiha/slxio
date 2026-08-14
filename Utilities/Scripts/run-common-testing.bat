@echo off
setlocal enabledelayedexpansion

REM
REM SPDX-FileCopyrightText: Copyright 2025-2026 Wissem Chiha
REM SPDX-License-Identifier: Apache-2.0
REM

if "%~1"=="" (
    set BUILDDIR=build
) else (
    set BUILDDIR=%~1
)

where ctest >nul 2>&1
if errorlevel 1 (
    echo [FATAL] ctest not found in path, install CMake/CTest.
    exit /b 1
)

if not exist "%BUILDDIR%" (
    echo [FATAL] Build directory not found: %BUILDDIR%
    exit /b 1
)

echo [INFO] Running tests in build directory: %BUILDDIR%

pushd "%BUILDDIR%"
ctest --output-on-failure
if errorlevel 1 (
    echo [FATAL] tests failed.
    popd
    exit /b 1
)
echo [INFO] tests executed successfully.

echo [INFO] Collecting coverage...
ctest -T coverage
if errorlevel 1 (
    echo [WARNING] Coverage collection failed or not configured.
) else (
    echo [INFO] Coverage report generated in %BUILDDIR%\Testing\Temporary
)
popd

echo [INFO] Done.
endlocal
