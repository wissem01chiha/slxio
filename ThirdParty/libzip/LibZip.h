// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Libzip_h__
#define __Libzip_h__

#ifdef USE_EXTERNAL_LIBZIP
#include <libzip/zip.h>
#else
#include <src/lib/zip.h>
#endif 

#endif //  __Libzip_h__