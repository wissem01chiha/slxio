# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

add_subdirectory(src)

if(ZLIB_BUILD_STATIC)
    export(TARGETS zlibstatic FILE ZLIBTargets.cmake)
endif()
if(ZLIB_BUILD_SHARED)
    export(TARGETS zlib FILE ZLIBTargets.cmake)
endif()
