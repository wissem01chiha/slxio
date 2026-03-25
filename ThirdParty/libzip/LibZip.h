// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __LIBZIP_H__
#define __LIBZIP_H__

#cmakedefine USE_EXTERNAL_LIBZIP

#ifdef USE_EXTERNAL_LIBZIP
#include <libzip/zip.h>
#else
#include <src/lib/zip.h>
#endif 

#endif //  __LIBZIP_H__