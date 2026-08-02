# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

project(slog LANGUAGES C)

set(THREADS_PREFER_PTHREAD_FLAG ON)

add_library(slog STATIC src/slog.c src/slog.h)

install(TARGETS slog DESTINATION lib)
install(FILES src/slog.h DESTINATION include)
