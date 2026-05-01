// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LIBPNG_H
#define LIBPNG_H

#if USE_EXTERNAL_LIBPNG
#include <png.h>
#else
#include <src/png.h>
#endif 

#endif // LIBPNG_H