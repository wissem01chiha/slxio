// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COMPILER_H
#define COMPILER_H

#ifdef _MSC_VER

#ifndef NOMINMAX
#define NOMINMAX
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

/* Define deprecated symbol for api changes warnings*/
#if defined(__GNUC__) || defined(__clang__)
#define SLXIO_DEPRECATED __attribute__((deprecated))
#elif defined(_MSC_VER)
#define SLXIO_DEPRECATED __declspec(deprecated)
#else
#define SLXIO_DEPRECATED
#endif

/* Define compiler nodiscard macro  */
#if defined(__has_cpp_attribute)
#if __has_cpp_attribute(nodiscard)
#define SLXIO_NODISCARD [[nodiscard]]
#else
#define SLXIO_NODISCARD
#endif
#else
#define SLXIO_NODISCARD
#endif

#endif // COMPILER_H
