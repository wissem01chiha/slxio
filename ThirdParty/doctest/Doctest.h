// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DOCTEST
#define SLXDOCTEST

#ifdef USE_EXTERNAL_DOCTEST
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#else
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <src/doctest/doctest.h>
#endif

#endif // DOCTEST