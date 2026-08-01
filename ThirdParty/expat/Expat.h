// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EXPAT_H
#define EXPAT_H

#ifdef USE_EXTERNAL_EXPAT
    #include <expat.h>
#else
    #include <src/lib/expat.h>
#endif

#endif // EXPAT_H