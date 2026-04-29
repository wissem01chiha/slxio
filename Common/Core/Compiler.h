// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef Compiler_h
#define Compiler_h

#include "Config.h"

#ifdef _MSC_VER

#define NOMINMAX

#ifdef HAVE_STDBOOL_H
#include "stdbool.h"
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

#if HAVE_FLOAT_H
#include <float.h>
#endif

#if HAVE_DIRECT_H
#include <direct.h>
#endif

#if HAVE_IO_H
#include <io.h>
#endif

#if HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#if HAVE_UNISTD_H
#include <unistd.h>
#endif

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

#endif /* Compiler_h */
