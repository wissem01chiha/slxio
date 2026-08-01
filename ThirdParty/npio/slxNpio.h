// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SLXNPIO
#define SLXNPIO
#ifdef USE_EXTERNAL_NPIO
    #include <npio/npio.h>
#else
    #include <src/src/npio.h>
#endif

#endif // SLXNPIO