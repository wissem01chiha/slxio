# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: MIT
find_package(Unity QUIET)
if(Unity_FOUND)
    message(STATUS "Unity Test found: ${Unity_DIR}")
    include_directories(SYSTEM ${Unity_INCLUDE_DIRS})
else()
    message(STATUS "Unity Test not found. Downloading and building from source...")
    include(FetchContent)
    FetchContent_Declare(
        unity
        URL https://github.com/ThrowTheSwitch/Unity/archive/refs/tags/v2.6.1.zip
    )
    FetchContent_MakeAvailable(unity)

    set(Unity_INCLUDE_DIRS ${unity_SOURCE_DIR}/src)
    include_directories(SYSTEM ${Unity_INCLUDE_DIRS})
endif()
