# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

# Enforce strict C++14 compliance on macOS with Apple Clang.
# By default, Apple Clang only warns when C++17 extensions are used.
# We promote these warnings to errors to ensure no C++17 features
# are used across the project. This check can be removed if we
# upgrade the codebase to C++17.
if(APPLE)
    if(CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
        add_compile_options(-Werror=c++17-extensions)
    endif()
endif()
