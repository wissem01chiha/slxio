REM=============================================================================
REM Copyright 2025-2026 Wissem Chiha
REM
REM Licensed under the Apache License, Version 2.0 (the "License");
REM you may not use this file except in compliance with the License.
REM You may obtain a copy of the License at
REM
REM     http:REMwww.apache.org/licenses/LICENSE-2.0
REM
REM Unless required by applicable law or agreed to in writing, software
REM distributed under the License is distributed on an "AS IS" BASIS,
REM WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
REM implied. See the License for the specific language governing
REM permissions and limitations under the License.
REM=============================================================================

@echo off
setlocal enabledelayedexpansion

set BUILD_DIR=build

if exist %BUILD_DIR% (
    rmdir /s /q %BUILD_DIR%
)
if not exist %BUILD_DIR% mkdir %BUILD_DIR%

cd %BUILD_DIR%

cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ..

ninja -j4