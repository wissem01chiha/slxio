// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef COMPILER_H
#define COMPILER_H

#include "Option.h"

#if defined(_MSC_VER)
#define NOMINMAX
#endif

#if defined(_MSC_VER)
#if HAVE_FLOAT_H
#include <float.h>
#endif
#if HAVE_DIRECT_H
#include <direct.h>
#endif
#if HAVE_IO_H
#include <io.h>
#endif
#if HAVE_WINDOWS_H
//#include <windows.h>
#endif
#else
#if HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif
#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef __cplusplus
#include <cmath>
#ifndef finite
#define finite(x) std::isfinite(x)
#endif
#endif

#if defined(_MSC_VER)
#define ISNAN(x) _isnan(x)
#else
#define ISNAN(x) isnan(x)
#endif

#if defined(_MSC_VER)
#define FORCE_INLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define FORCE_INLINE inline __attribute__((always_inline))
#else
#define FORCE_INLINE inline
#endif

#if defined(_MSC_VER)
#if HAVE_INTRIN_H
#include <intrin.h>
#endif
#elif defined(__GNUC__) || defined(__clang__)
#if HAVE_CPUID_H
#include <cpuid.h>
#endif
#endif

#if USE_AVX
#if defined(__AVX__)
#define HAVE_AVX 1
#include <immintrin.h>
#endif

#if defined(__AVX2__)
#define HAVE_AVX2 1
#include <immintrin.h>
#endif

#if defined(__SSE__) || (_M_IX86_FP >= 1)
#define HAVE_SSE 1
#include <xmmintrin.h>
#endif

#if defined(__SSE2__) || (_M_IX86_FP >= 2)
#define HAVE_SSE2 1
#include <emmintrin.h>
#endif

#if defined(__SSE3__)
#define HAVE_SSE3 1
#include <pmmintrin.h>
#endif

#if defined(__SSSE3__)
#define HAVE_SSSE3 1
#include <tmmintrin.h>
#endif

#if defined(__SSE4_1__)
#define HAVE_SSE41 1
#include <smmintrin.h>
#endif

#if defined(__SSE4_2__)
#define HAVE_SSE42 1
#include <nmmintrin.h>
#endif

#endif

#if HAVE_LIMITS_H
#include <limits.h>
#endif

#if HAVE_VALUES_H
#include <values.h>
#endif

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif

#endif // COMPILER_H