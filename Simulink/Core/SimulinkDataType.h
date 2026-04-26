// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKDATATYPE_H
#define SIMULINKDATATYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @enum SimulinkDataType
 * @brief Simulink Supported Data Types.
 * @see
 * https://www.mathworks.com/help/simulink/ug/data-types-supported-by-simulink.html
 */
enum class APIEXPORT SimulinkDataType
{
  Auto = 0,
  Double,
  Single,
  Int8,
  UInt8,
  Int16,
  UInt16,
  UInt64,
  Int32,
  UInt32,
  Boolean,
  Half,
  String,
  Char
};

#define SIMULINKDATATYPE_MAP(XX)                                               \
  XX(SimulinkDataType::Double, "double")                                       \
  XX(SimulinkDataType::Single, "single")                                       \
  XX(SimulinkDataType::Half, "half")                                           \
  XX(SimulinkDataType::Int8, "int8")                                           \
  XX(SimulinkDataType::UInt8, "uint8")                                         \
  XX(SimulinkDataType::Int16, "int16")                                         \
  XX(SimulinkDataType::UInt16, "uint16")                                       \
  XX(SimulinkDataType::Int32, "int32")                                         \
  XX(SimulinkDataType::UInt32, "uint32")                                       \
  XX(SimulinkDataType::UInt64, "uint64")                                       \
  XX(SimulinkDataType::Boolean, "boolean")                                     \
  XX(SimulinkDataType::Boolean, "logical")                                     \
  XX(SimulinkDataType::String, "string")                                       \
  XX(SimulinkDataType::Char, "char")                                           \
  XX(SimulinkDataType::Auto, "auto")

SimulinkDataType toSimulinkDataType(bool);
SimulinkDataType toSimulinkDataType(Float32);
SimulinkDataType toSimulinkDataType(UInt8);
SimulinkDataType toSimulinkDataType(UInt16);
SimulinkDataType toSimulinkDataType(UInt32);
SimulinkDataType toSimulinkDataType(UInt64);

SimulinkDataType toSimulinkDataType(const std::string&);
SimulinkDataType toSimulinkDataType(const char*);

const char* toChar(SimulinkDataType sldt);

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKDATATYPE_H
