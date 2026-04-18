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
option (BUILD_SHARED_LIBS           "Build as shared libraries" OFF)
option (ENABLE_PYTHON_BINDING       "Enable building Python Interface" ON)
option (ENABLE_TESTING              "Build tests" ON)
option (ENABLE_BINDING_TEST         "Build binding interface tests" ON)
option (ENABLE_NAMESPACE            "Enable global namespace" TRUE)
option (USE_LOCAL_LIBS              "Enable Using local installed libraries" ON)
option (ENABLE_OPENMP               "Enable OpenMP support" ON)
option (ENABLE_AVX                  "Enable AVX optimizations where available" ON)
option (ENABLE_HDF5                 "Enable HDF5 support" ON)
option (ENABLE_MATLAB               "Enable Matlab support" OFF)
option (ENABLE_PKGCONFIG            "Generate pkg-config file" ON)
option (ENABLE_INSTALL              "Enable installtion after build" OFF)
option (ENABLE_SANITIZER            "Enable sanitizers" OFF)
option (ENABLE_CLANG_TIDY           "Enable Clang-Tidy format" OFF)
option (ENABLE_CPPCHECK             "Enable CppCheck static analysis" ON)
option (ENABLE_CLANG_FORMAT         "Clang-Format support mode" ON)
option (ENABLE_COVERAGE             "Enable code coverage" OFF)
option (ENABLE_FUZZING              "Enable fuzzing support" OFF)
option (ENABLE_DOCUMENTATION        "Enable documentation generation" OFF)
option (BUILD_EXAMPLES              "Build example applications" OFF)
set(LOGGER_USE_SLOG                 TRUE)
set(LOGGER_USE_LOGURU               FALSE)

# ============================================================================
# Include
# ============================================================================
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")

include(CheckCompilerSupport)
include(CompilerFlags)
include(CheckExternalInclude)
include(CompilerWarningFlags)
include(ModuleExternal)
include(CheckClangSupport)
include(Sanitizer)
include(Module)
include(Version)
include(Apple)
include(Windows)
include(CI)

# ============================================================================
# Targets
# ============================================================================
module_add_cmake_modules(${CMAKE_CURRENT_SOURCE_DIR})
list(APPEND CMAKE_MODULE_PATH ${MODULES_CMAKE_DIRS})
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
