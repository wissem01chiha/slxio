// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SLXLIBUV
#define SLXLIBUV
#if USE_EXTERNAL_LIBUV
#include <uv.h>
#else
#include <src/include/uv.h>
#endif

#endif // SLXLIBUV