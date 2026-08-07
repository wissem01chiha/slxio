// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PLATFORMTYPES_H
#define PLATFORMTYPES_H

#include "CorePCH.h"
#include "Options.h"

using UInt8 = std::uint8_t;
using Int8 = std::int8_t;
using UInt16 = std::uint16_t;
using Int16 = std::int16_t;
using UInt32 = std::uint32_t;
using Int32 = std::int32_t;
using UInt64 = std::uint64_t;
using Int64 = std::int64_t;
using Float32 = float;
using Float64 = double;

/* Size assertions */
static_assert(sizeof(UInt8)  == 1,  "UInt8 must be 1 byte");
static_assert(sizeof(UInt16) == 2,  "UInt16 must be 2 bytes");
static_assert(sizeof(UInt32) == 4,  "UInt32 must be 4 bytes");
static_assert(sizeof(UInt64) == 8,  "UInt64 must be 8 bytes");
static_assert(sizeof(Float32)== 4,  "Float32 must be 4 bytes");
static_assert(sizeof(Float64)== 8,  "Float64 must be 8 bytes");

/* Smallest number to avoid dividing by zero */
namespace slxio
{
constexpr Float32 FloatEps = std::numeric_limits<Float32>::epsilon();
constexpr Float64 Float64Eps = std::numeric_limits<Float64>::epsilon();

}; // namespace slxio

/* Define casting macro */
#define SLXIO_STATIC_CAST(T, V) static_cast<T>(V)

/* Define type compare macro */
#define SLXIO_ASSERT_TYPE_EQUAL(T1, T2) static_assert(std::is_same_v<T1, T2>)

/* Select the implementation type for SIdentifier.  */
#if SLXIO_64BIT_IDENTIFIERS
using SIdentifier = UInt64;
#else
using SIdentifier = UInt32;
#endif

/* Define an alias for error code return data types*/
typedef UInt32 HError;

#endif // PLATFORMTYPES_H
