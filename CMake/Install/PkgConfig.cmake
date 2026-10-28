# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

find_package(PkgConfig)
    if(PKG_CONFIG_FOUND)
    set(SLXIO_PKG_CFG "${CMAKE_CURRENT_BINARY_DIR}/${SLXIO_PKG_CONFIG_FILE}")
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/${SLXIO_PKG_CONFIG_FILE}.in
        ${SLXIO_PKG_CFG}
        @ONLY
    )
endif()