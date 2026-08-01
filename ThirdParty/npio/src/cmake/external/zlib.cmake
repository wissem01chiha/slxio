# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: MIT
find_package(ZLIB QUIET)
if(ZLIB_FOUND)
    message(STATUS "zlib found: ${ZLIB_INCLUDE_DIRS}")
else()
    message(STATUS "zlib not found. Downloading and building from source...")
    include(FetchContent)
    FetchContent_Declare(
        zlib
        URL https://github.com/madler/zlib/releases/download/v1.3.2/zlib132.zip 
    )
    set(ZLIB_BUILD_SHARED OFF)
    set(ZLIB_BUILD_TESTING OFF)
    FetchContent_MakeAvailable(zlib)

    include_directories(SYSTEM ${zlib_SOURCE_DIR})
    message(STATUS "zlib has been fetched and is available at ${zlib_SOURCE_DIR}")
endif()
