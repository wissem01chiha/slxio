// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LIBUV_H
#define LIBUV_H

#if defined(__APPLE__) && defined(__MACH__)
#include "port.h"
#endif

#ifdef USE_EXTERNAL_LIBUV
#include <uv.h>
#else
#include <src/include/uv.h>
#endif

#endif // LIBUV_H