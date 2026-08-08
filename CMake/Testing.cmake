# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

include(CTest)
enable_testing()

set(BUILD_TESTING ON)
set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}")

if(SLXIO_COVERAGE)
  if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(--coverage)
    add_link_options(--coverage)
  endif ()
endif ()
