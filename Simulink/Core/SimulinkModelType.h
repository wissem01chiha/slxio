// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODELTYPE_H
#define SIMULINKMODELTYPE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Represents the type of a Simulink model.
 */
class APIEXPORT SimulinkModelType final
{
public:
  enum Type
  {
    Library,
    Model
  };
  SimulinkModelType() = default;
  explicit SimulinkModelType(SimulinkModelType::Type type);
  static std::string ToString(SimulinkModelType::Type type);
  Type GetElementType() const;

private:
  Type type;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKMODELTYPE_H