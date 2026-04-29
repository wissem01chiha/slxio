// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PlatformTypes_h
#define PlatformTypes_h

#include "Config.h"
#include <cstddef>
#include <cstdint>

/* Define memory sizes for each type  */
#define SLXIO_SIZEOF_CHAR  SLXIO_ABI_SIZEOF_CHAR
#define SLXIO_SIZEOF_SHORT SLXIO_ABI_SIZEOF_SHORT
#define SLXIO_SIZEOF_INT  SLXIO_ABI_SIZEOF_INT
#define SLXIO_SIZEOF_LONG SLXIO_ABI_SIZEOF_LONG
#define SLXIO_SIZEOF_LONG_LONG SLXIO_ABI_SIZEOF_LONG_LONG
#define SLXIO_SIZEOF_FLOAT SLXIO_ABI_SIZEOF_FLOAT
#define SLXIO_SIZEOF_DOUBLE SLXIO_ABI_SIZEOF_DOUBLE

/* Is data type char signed or not ?  */
#if defined(SLXIO_ABI_CHAR_IS_SIGNED)
#define SLXIO_TYPE_CHAR_IS_SIGNED 1
#else
#define SLXIO_TYPE_CHAR_IS_SIGNED 0
#endif

/* Data types returned by GetDataType.  */
#define SLXIO_VOID 0
#define SLXIO_BIT 1
#define SLXIO_CHAR 2
#define SLXIO_SIGNED_CHAR 3
#define SLXIO_UNSIGNED_CHAR 4
#define SLXIO_SHORT 5
#define SLXIO_UNSIGNED_SHORT 6
#define SLXIO_INT 7
#define SLXIO_UNSIGNED_INT 8
#define SLXIO_LONG 9
#define SLXIO_UNSIGNED_LONG 10
#define SLXIO_FLOAT 10
#define SLXIO_DOUBLE 11
#define SLXIO_ID_TYPE 12
#define SLXIO_STRING 13
#define SLXIO_ARRAY 14
#define SLXIO_LIST 15
#define SLXIO_LONG_LONG 16
#define SLXIO_UNSIGNED_LONG_LONG 17

/* Define cross language casting macro  */
#if defined(__cplusplus)
#define SLXIO_TYPE_CAST(T, V) static_cast<T>(V)
#else
#define SLXIO_TYPE_CAST(T, V) ((T)(V))
#endif

/* Define type compare macro  */
#if defined(__cplusplus)
#define SLXIO_ASSERT_TYPE_EQUAL(var1, var2) \
  static_assert(std::is_same<decltype(var1), decltype(var2)>::value)
#endif

/* Define range constants for each type.  */
#if SLXIO_ABI_CHAR_IS_SIGNED
#define SLXIO_CHAR_MIN SLXIO_TYPE_CAST(char, 0x80)
#define SLXIO_CHAR_MAX SLXIO_TYPE_CAST(char, 0x7f)
#else
#define SLXIO_CHAR_MIN SLXIO_TYPE_CAST(char, 0u)
#define SLXIO_CHAR_MAX SLXIO_TYPE_CAST(char, 0xffu)
#endif

#define SLXIO_SIGNED_CHAR_MIN SLXIO_TYPE_CAST(signed char, 0x80)
#define SLXIO_SIGNED_CHAR_MAX SLXIO_TYPE_CAST(signed char, 0x7f)
#define SLXIO_UNSIGNED_CHAR_MIN SLXIO_TYPE_CAST(unsigned char, 0u)
#define SLXIO_UNSIGNED_CHAR_MAX SLXIO_TYPE_CAST(unsigned char, 0xffu)
#define SLXIO_SHORT_MIN SLXIO_TYPE_CAST(short, 0x8000)
#define SLXIO_SHORT_MAX SLXIO_TYPE_CAST(short, 0x7fff)
#define SLXIO_UNSIGNED_SHORT_MIN SLXIO_TYPE_CAST(unsigned short, 0u)
#define SLXIO_UNSIGNED_SHORT_MAX SLXIO_TYPE_CAST(unsigned short, 0xffffu)
#define SLXIO_INT_MIN SLXIO_TYPE_CAST(int, ~(~0u >> 1))
#define SLXIO_INT_MAX SLXIO_TYPE_CAST(int, ~0u >> 1)
#define SLXIO_UNSIGNED_INT_MIN SLXIO_TYPE_CAST(unsigned int, 0)
#define SLXIO_UNSIGNED_INT_MAX SLXIO_TYPE_CAST(unsigned int, ~0u)
#define SLXIO_LONG_MIN SLXIO_TYPE_CAST(long, ~(~0ul >> 1))
#define SLXIO_LONG_MAX SLXIO_TYPE_CAST(long, ~0ul >> 1)
#define SLXIO_UNSIGNED_LONG_MIN SLXIO_TYPE_CAST(unsigned long, 0ul)
#define SLXIO_UNSIGNED_LONG_MAX SLXIO_TYPE_CAST(unsigned long, ~0ul)
#define SLXIO_FLOAT_MIN SLXIO_TYPE_CAST(float, -1.0e+38f)
#define SLXIO_FLOAT_MAX SLXIO_TYPE_CAST(float, 1.0e+38f)
#define SLXIO_DOUBLE_MIN SLXIO_TYPE_CAST(double, -1.0e+299)
#define SLXIO_DOUBLE_MAX SLXIO_TYPE_CAST(double, 1.0e+299)

/* Smalest number to avoid dividing by zero */
#define SLXIO_FLOAT_EPS SLXIO_TYPE_CAST(float, 1e-6)

/* Select implementation data types.  */

#if SLXIO_SIZEOF_CHAR == 1
  using UInt8 = unsigned char;
  using Int8  = signed char;
  #define SLXIO_TYPE_UINT8 SLXIO_UNSIGNED_CHAR
  #define SLXIO_TYPE_UINT8_MIN SLXIO_UNSIGNED_CHAR_MIN
  #define SLXIO_TYPE_UINT8_MAX SLXIO_UNSIGNED_CHAR_MAX
  #define SLXIO_TYPE_INT8 SLXIO_SIGNED_CHAR
  #define SLXIO_TYPE_INT8_MIN SLXIO_SIGNED_CHAR_MIN
  #define SLXIO_TYPE_INT8_MAX SLXIO_SIGNED_CHAR_MAX
#endif 

#if SLXIO_SIZEOF_SHORT == 2
using UInt16 = unsigned short;
using Int16 = signed short;
#define SLXIO_TYPE_UINT16 SLXIO_UNSIGNED_SHORT
#define SLXIO_TYPE_UINT16_MIN SLXIO_UNSIGNED_SHORT_MIN
#define SLXIO_TYPE_UINT16_MAX SLXIO_UNSIGNED_SHORT_MAX
#define SLXIO_TYPE_INT16 SLXIO_SHORT
#define SLXIO_TYPE_INT16_MIN SLXIO_SHORT_MIN
#define SLXIO_TYPE_INT16_MAX SLXIO_SHORT_MAX
#elif SLXIO_SIZEOF_INT == 2
using UInt16 = unsigned int;
using Int16 = signed int;
#define SLXIO_TYPE_UINT16 SLXIO_UNSIGNED_INT
#define SLXIO_TYPE_UINT16_MIN SLXIO_UNSIGNED_INT_MIN
#define SLXIO_TYPE_UINT16_MAX SLXIO_UNSIGNED_INT_MAX
#define SLXIO_TYPE_INT16 SLXIO_INT
#define SLXIO_TYPE_INT16_MIN SLXIO_INT_MIN
#define SLXIO_TYPE_INT16_MAX SLXIO_INT_MAX
#endif

#if SLXIO_SIZEOF_INT == 4
  using UInt32 = std::uint32_t;
  using Int32  = std::int32_t;
  #define SLXIO_TYPE_UINT32 SLXIO_UNSIGNED_INT
  #define SLXIO_TYPE_UINT32_MIN SLXIO_UNSIGNED_INT_MIN
  #define SLXIO_TYPE_UINT32_MAX SLXIO_UNSIGNED_INT_MAX
  #define SLXIO_TYPE_INT32 SLXIO_INT
  #define SLXIO_TYPE_INT32_MIN SLXIO_INT_MIN
  #define SLXIO_TYPE_INT32_MAX SLXIO_INT_MAX
#elif SLXIO_SIZEOF_LONG == 4
  using UInt32 = unsigned long;
  using Int32  = signed long;
  #define SLXIO_TYPE_UINT32 SLXIO_UNSIGNED_LONG
  #define SLXIO_TYPE_UINT32_MIN SLXIO_UNSIGNED_LONG_MIN
  #define SLXIO_TYPE_UINT32_MAX SLXIO_UNSIGNED_LONG_MAX
  #define SLXIO_TYPE_INT32 SLXIO_LONG
  #define SLXIO_TYPE_INT32_MIN SLXIO_LONG_MIN
  #define SLXIO_TYPE_INT32_MAX SLXIO_LONG_MAX
#endif

#if SLXIO_SIZEOF_LONG_LONG == 8
using UInt64 = unsigned long long;
using Int64 = signed long long;
#define SLXIO_TYPE_UINT64 SLXIO_UNSIGNED_LONG_LONG
#define SLXIO_TYPE_UINT64_MIN SLXIO_UNSIGNED_LONG_LONG_MIN
#define SLXIO_TYPE_UINT64_MAX SLXIO_UNSIGNED_LONG_LONG_MAX
#define SLXIO_TYPE_INT64 SLXIO_LONG_LONG
#define SLXIO_TYPE_INT64_MIN SLXIO_LONG_LONG_MIN
#define SLXIO_TYPE_INT64_MAX SLXIO_LONG_LONG_MAX
#elif SLXIO_SIZEOF_LONG == 8
using UInt64 = unsigned long;
using Int64 = signed long;
#define SLXIO_TYPE_UINT64 SLXIO_UNSIGNED_LONG
#define SLXIO_TYPE_UINT64_MIN SLXIO_UNSIGNED_LONG_MIN
#define SLXIO_TYPE_UINT64_MAX SLXIO_UNSIGNED_LONG_MAX
#define SLXIO_TYPE_INT64 SLXIO_LONG
#define SLXIO_TYPE_INT64_MIN SLXIO_LONG_MIN
#define SLXIO_TYPE_INT64_MAX SLXIO_LONG_MAX
#else
#error ""
#endif

#if SLXIO_SIZEOF_FLOAT == 4
using Float32 = float;
#define SLXIO_TYPE_FLOAT32 SLXIO_FLOAT
#else
#error ""
#endif

#if SLXIO_SIZEOF_DOUBLE == 8
using Float64 = double;
#define SLXIO_TYPE_FLOAT64 SLXIO_DOUBLE
#else
#error ""
#endif

/* Select the implementation type for IdType.  */
#if SLXIO_64BIT_IDS
#if SLXIO_SIZEOF_LONG_LONG == 8
using IdType = long long;
#elif SLXIO_SIZEOF_LONG == 8
using IdType = long;
#endif
#else
using IdType = int;
#endif 

/* Define an alias for error code return data types*/
typedef UInt32 ReturnType;

#endif /* PlatformTypes_h */
