@echo off
setlocal enabledelayedexpansion

REM 
REM SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
REM SPDX-License-Identifier: Apache-2.0
REM 

REM NOTE: This is a wrapper for updating third‑party modules.
REM uility tool for Windows platforms. Officially supported platforms are Unix.
REM from the project root directory (eg ..\..\slxio), run:
REM   ThirdParty\update.bat
REM WARN: this script requires Cygwin installed at: C:\cygwin64
REM This script must be run from Windows Command Prompt or PowerShell,
REM not directly from Cygwin Bash.

REM Sanity checks
if not exist "C:\cygwin64\bin\bash.exe" (
    echo [FATAL] Cygwin bash not found at C:\cygwin64\bin\bash.exe
    echo Please check your Cygwin installation
    exit /b 1
)

if not exist "C:\cygwin64\bin\dos2unix.exe" (
    echo [FATAL] Cygwin dos2unix not found at C:\cygwin64\bin\dos2unix.exe
    echo Please check your Cygwin packages installation
    exit /b 1
)

REM Alias 
set dos2unix=C:\cygwin64\bin\dos2unix.exe
set bash=C:\cygwin64\bin\bash.exe

REM PATH Setup
set CURDIR=%~dp0
set WINPATH=%CURDIR%
set WINPATH=%WINPATH:\=/%
set DRIVE=%WINPATH:~0,1%
set CYGPATH=/cygdrive/%DRIVE%%WINPATH:~2%

REM Update routines
"%dos2unix%" "%CURDIR%\update.sh"
"%bash%" -l -c "%CYGPATH%/update.sh --cygwin %CYGPATH%"
