// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SLXPYBIND11
#define SLXPYBIND11
#if USE_EXTERNAL_PYBIND11
#include <pybind11/pybind11.h>
#else
#include <src/include/pybind11/pybind11.h>
#endif

#endif // SLXPYBIND11