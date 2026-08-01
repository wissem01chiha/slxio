# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

add_subdirectory(src)

set_target_properties(slog PROPERTIES
    POSITION_INDEPENDENT_CODE ON)
