# SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
# SPDX-License-Identifier: BSD-2-Clause
find_package(Check QUIET)
if(CHECK_FOUND)
    message(STATUS "Check found: ${CHECK_INCLUDE_DIR}")
    include_directories(SYSTEM ${CHECK_INCLUDE_DIR})
else()
    message(STATUS "Check not found. Downloading and building from source...")
    include(FetchContent)
    FetchContent_Declare(
        Check
        GIT_REPOSITORY https://github.com/libcheck/check.git
        GIT_TAG 35d9cc011faa0545bf56d5062ae90bbc2688eba7
    )
    set(CHECK_ENABLE_TESTS OFF)
    FetchContent_MakeAvailable(Check)
    # workaround for Windows: rename the shared library target to avoid conflicts with the static library target,
    # in libcheck they name the shared library target checkShared and the static library target check, only if MSVC
    # is installed, but for non MSVC setups it produces the same shared and static library noutput name
    # so we rename the target regardless of the compiler setup
    if(WIN32 AND TARGET checkShared)
     set_target_properties(checkShared PROPERTIES OUTPUT_NAME "checkDynamic")
    endif()
    set(CHECK_INCLUDE_DIR ${Check_SOURCE_DIR}/src ${Check_BINARY_DIR}/src ${Check_BINARY_DIR})
    include_directories(SYSTEM ${CHECK_INCLUDE_DIR})
endif()
