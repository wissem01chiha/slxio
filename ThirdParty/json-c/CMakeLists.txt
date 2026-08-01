# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

if(POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)
endif()
set(BUILD_APPS OFF)
add_subdirectory(src)
