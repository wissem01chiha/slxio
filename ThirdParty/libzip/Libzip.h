// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SLXLIBZIP
#define SLXLIBZIP
#if USE_EXTERNAL_LIBZIP
#include <libzip/zip.h>
#else
#include <src/lib/zip.h>
#endif

#endif // SLXLIBZIP