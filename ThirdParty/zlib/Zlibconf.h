// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Zlibconf_h__
#define __Zlibconf_h__

#ifdef USE_EXTERNAL_ZLIB
#include <zconf.h>
#include <zlib.h>
#else
#include <src/zconf.h>
#include <src/zlib.h>
#endif

#endif /* __Zlibconf_h__ */