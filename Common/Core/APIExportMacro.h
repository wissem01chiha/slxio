// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef APIEXPORTMACRO_H
#define APIEXPORTMACRO_H

#include "Options.h"

#if defined(SLXIO_BUILD_SHARED) && defined(USING_SLXIO_SHARED)
#error "SLXIO_BUILD_SHARED and USING_SLXIO_SHARED cannot both be defined"
#endif

#if defined(_WIN32)

#if defined(SLXIO_BUILD_SHARED)
/* Building *.dll */
#define SLXIO_APIEXPORT __declspec(dllexport)
#elif defined(USING_SLXIO_SHARED)
/* Using *.dll */
#define SLXIO_APIEXPORT __declspec(dllimport)
#else
/* Static library */
#define SLXIO_APIEXPORT
#endif

#elif defined(__clang__) || defined(__GNUC__)
#define SLXIO_APIEXPORT __attribute__((visibility("default")))
#else
#define SLXIO_APIEXPORT
#endif

#endif // APIEXPORTMACRO_H
