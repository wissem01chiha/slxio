# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0
cmake_minimum_required (VERSION 3.29 FATAL_ERROR)

project (slxio LANGUAGES C CXX)

# ============================================================================
# Properties
# ============================================================================
set(PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/slxio")
set(PROJECT_DESCRIPTION  "SLXIO – SIMULINK SLX File I/O Library")

# ============================================================================
# Configuration
# ============================================================================
option (SLXIO_BUILD_SHARED          "Build as shared libraries" OFF)
option (SLXIO_BUILD_TESTS           "Build library tests" ON)
option (SLXIO_COVERAGE              "Enable code coverage" OFF)
option (SLXIO_LOGURU                "Use Loguru librray for logging" OFF)
option (SLXIO_SLOG                  "Use slog librray for logging" OFF)
option (SLXIO_ASAN                  "Enable AddressSanitizer (ASan)" OFF)
option (SLXIO_MSAN                  "Enable MemorySanitizer (MSan)" OFF)
option (SLXIO_TSAN                  "Enable ThreadSanitizer (TSan)" OFF)
option (SLXIO_UBSAN                 "Enable UndefinedBehaviorSanitizer (UBSan)" OFF)
option (SLXIO_OPENMP                "Enable OpenMP support" ON)
option (SLXIO_PKGCONFIG             "Generate pkg-config file during build" ON)
option (SLXIO_INSTALL               "Enable installtion after build" OFF)
option (SLXIO_DOCUMENTATION         "Enable documentation generation" OFF)
option (SLXIO_BUILD_EXAMPLES        "Build example applications" OFF)
option (SLXIO_BUILD_PYTHON          "Enable building Python Interface" ON)
option (SLXIO_BUILD_LUA             "Enable building Lua Interface" ON)
option (SLXIO_BUILD_JAVA            "Enable building Java Interface" ON)
option (SLXIO_BUILD_PYTHON_TESTS    "Build binding interface tests" ON)
option (SLXIO_FORCE_LOCAL_MODULES   "Enable Using local installed modules" ON)
option (SLXIO_ENABLE_WERROR         "Enable treating warnings as errors" OFF)
option (SLXIO_ENABLE_WALL           "Enable all compiler warnings" ON)
option (SLXIO_MODULE_DEBUG          "Enable Debugging module during build" ON)
option (SLXIO_ENABLE_CPPCHECK       "Enable cppcheck static analysis" OFF)
option (SLXIO_ENABLE_CLANG_TIDY     "Enable clang-tidy static analysis" OFF)

# ============================================================================
# Includes
# ============================================================================
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")

include(CheckCompilerSupport)
include(CheckPlatformSupport)
include(CompilerFlags)
include(CompilerWarningFlags)
include(ModuleExternal)
include(Sanitizer)
include(Module)
include(Version)
include(Apple)
include(Windows)
include(CI)

# ============================================================================
# Targets
# ============================================================================
add_submodules(${CMAKE_CURRENT_SOURCE_DIR})

# ============================================================================
# Testing
# ============================================================================
include (Testing)
include (Coverage)
include (Summery)

# ============================================================================
# Install
# ============================================================================
include (Install)
