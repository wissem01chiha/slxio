// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Compiler_h__
#define __Compiler_h__

#ifdef _MSC_VER
#define NOMINMAX
#include <float.h>
#include <io.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <limits.h>
#include <stdlib.h>

#ifndef S_ISDIR
#define S_ISDIR(mode) (((mode) & S_IFMT) == S_IFDIR)
#endif

#ifndef S_ISREG
#define S_ISREG(mode) (((mode) & S_IFMT) == S_IFREG)
#endif
#endif // _MSC_VER

#ifdef __cplusplus
#include <cmath>
#ifndef finite
#define finite(x) std::isfinite(x)
#endif 
#endif // __cplusplus

#ifdef _MSC_VER
#define ISNAN(x) _isnan(x)
#else
#define ISNAN(x) isnan(x)
#endif

#ifdef _MSC_VER
#define FORCE_INLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define FORCE_INLINE inline __attribute__((always_inline))
#else
#define FORCE_INLINE inline
#endif

#endif /* __Compiler_h__ */
