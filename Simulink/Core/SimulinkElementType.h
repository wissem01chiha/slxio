// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKELEMENTTYPE_H
#define SIMULINKELEMENTTYPE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkElementType
 * @brief Represents the type of a Simulink element.
 */
class SLXIO_APIEXPORT SimulinkElementType
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
    Subsystem = 11,
    Unknown = 11,
  };

  /** Default constructor. */
  SimulinkElementType() = default;

  /** Checks if this type matches another type object. */
  bool isA(const SimulinkElementType& typeObj);

  /** Checks if this type matches a given enum value. */
  bool isA(const SimulinkElementType::Type& type);

  /** Constructs a type from an enum value. */
  explicit SimulinkElementType(SimulinkElementType::Type typeName);

  /** Creates a new type instance. */
  static SimulinkElementType& New();

  /** Converts a type name string to an enum value. */
  static SimulinkElementType::Type ToType(const char* typeName);

  /** Converts an enum value to a string representation. */
  static const char* ToString(SimulinkElementType::Type type);

  /** Returns the string representation of this type. */
  std::string ToString() const;

private:
  SimulinkElementType::Type type_;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKELEMENTTYPE_H
