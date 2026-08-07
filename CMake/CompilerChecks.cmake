# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 8.0)
  message (FATAL_ERROR "GCC 8.0 or later is required.")
endif ()
if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19.10)
  message (FATAL_ERROR "Microsoft Visual Studio 2017 or later is required.")
endif ()
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.0)
  message (FATAL_ERROR "LLVM Clang 7.0 or later is required.")
endif ()

# On macOS, the minimum supported compiler standard is C++17
# because the newer macOS 26 SDK introduces breaking changes in system APIs
# that rely on C++17 features.On other platforms like Linux, 
# Windows we continue to support C++14.
if(APPLE AND CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
    set(CMAKE_CXX_STANDARD 17)
else()
    if(NOT CMAKE_CXX_STANDARD)
        set(CMAKE_CXX_STANDARD 14)
    endif()
endif()

set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS OFF)
