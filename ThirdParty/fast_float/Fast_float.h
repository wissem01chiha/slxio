// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SLXFAST_FLOAT
#define SLXFAST_FLOAT
#ifdef USE_EXTERNAL_FAST_FLOAT
    #include <fast_float/fast_float.h>
#else
    #include <src/include/fast_float/fast_float.h>
#endif

#endif // SLXFAST_FLOAT