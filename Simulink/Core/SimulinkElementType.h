// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKELEMENTTYPE_H
#define SIMULINKELEMENTTYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT SimulinkElementType
{
public:
  enum Type
  {
    Base = 0,
    Object = 1,
    Block = 2,
    Port = 3,
    Line = 4,
    Model = 5,
    Annotation = 6,
    Array = 7,
    Parameter = 8,
    ConfigSet = 9,
    Chart = 10,
    Unkown = 11
  };

  /**
   * Default Construtor
   */
  SimulinkElementType() = default;

  /**
   * 
   */
  bool isA(const SimulinkElementType& typeObj);

  /**
   * 
   */
  bool isA(const SimulinkElementType::Type& type);

  /**
   * 
   */
  explicit SimulinkElementType(SimulinkElementType::Type typeName);

  /**
   * 
   */
  static SimulinkElementType& getInstance();

  /**
   * 
   */
  static SimulinkElementType::Type toType(const char* typeName);

  /**
   * 
   */
  static const char* ToString(SimulinkElementType::Type type);

  /**
   * 
   */
  std::string ToString();

private:
  SimulinkElementType::Type type_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKELEMENTTYPE_H