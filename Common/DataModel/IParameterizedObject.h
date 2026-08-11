// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMTERIZEDOBJECT_H
#define IPARAMTERIZEDOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "IParameterObject.h"
#include "IParameterObjectBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IParameterizedObject
 * @brief An object that supports one or more IParameterObject attributes.
 * Parameters can be mutable or immutable, or mixed. This design is valid for
 * both. Many Simulink core blocks implement this pattern.
 */
class SLXIO_APIEXPORT IParameterizedObject
{
public:
  /** Create a new instance of the IParameterizedObject */
  virtual IParameterizedObject* New() = 0;

  /** Add a parameter */
  void AddParameter(const std::shared_ptr<IParameterObjectBase>& p);

  /** Get a parameter by name */
  std::shared_ptr<IParameterObjectBase> GetParameter(const std::string& name);

protected:
  std::unordered_map<std::string, std::shared_ptr<IParameterObjectBase>>
    m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMTERIZEDOBJECT_H
