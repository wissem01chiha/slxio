// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ZLIBCONF_H
#define ZLIBCONF_H

#if USE_EXTERNAL_ZLIB
#include <zconf.h>
#include <zlib.h>
#else
#include <src/zconf.h>
#include <src/zlib.h>
#endif

#endif // ZLIBCONF_H