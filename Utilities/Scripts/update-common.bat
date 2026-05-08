@echo off
setlocal enabledelayedexpansion

REM 
REM SPDX-FileCopyrightText: Copyright 2025-2026 Wissem Chiha
REM SPDX-License-Identifier: Apache-2.0
REM 

REM ########################################################################
REM This is a wrapper for updating third‑party modules.
REM Utility tool for Windows platforms.Officially supported platforms are Unix.
REM Usage:
REM   from the project root directory (e.g. ..\..\slxio), run:
REM     Utilities\Scripts\update-common.bat C:\slxio\ThirdParty
REM Required files:
REM     - update-common.sh
REM This script must be run from Windows Command Prompt or PowerShell,
REM     not directly from Cygwin Bash.
REM ########################################################################

REM Change this to align with your local installation folder
set CYGWIN_HOME=C:\cygwin64

REM Get submodules source directory, fallback to the current 
REM script directory if not given 
if "%~1"=="" (
    set SRCDIR=%~dp0
) else (
    set SRCDIR=%~1
)

REM Sanity checks
if not exist "%CYGWIN_HOME%\bin\bash.exe" (
    echo [FATAL] Cygwin bash not found at %CYGWIN_HOME%\bin\bash.exe
    exit /b 1
)
if not exist "%CYGWIN_HOME%\bin\dos2unix.exe" (
    echo [FATAL] Cygwin dos2unix not found at %CYGWIN_HOME%\bin\dos2unix.exe
    exit /b 1
)

REM Alias 
set dos2unix=C:\cygwin64\bin\dos2unix.exe
set bash=C:\cygwin64\bin\bash.exe

REM Path Setup
set CURDIR=%~dp0
set WINPATH=%CURDIR%
set WINPATH=%WINPATH:\=/%
set DRIVE=%WINPATH:~0,1%
set CYGPATH=/cygdrive/%DRIVE%%WINPATH:~2%

set DIR=%SRCDIR%
set WINDIR=%DIR:\=/%
set DIRDRIVE=%WINDIR:~0,1%
set DIRPATH=/cygdrive/%DIRDRIVE%%WINDIR:~2%

REM Run Updates
"%dos2unix%" "%CURDIR%\update-common.sh" >nul 2>&1
"%bash%" -l -c "%CYGPATH%/update-common.sh --cygwin %DIRPATH%"
