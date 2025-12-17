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