// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMTERIZEDOBJECT_H
#define IPARAMTERIZEDOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "ILogger.h"
#include "IParameterObject.h"
#include "IParameterObjectBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IParameterizedObject
 * @brief An object that supports one or more IParameterObject
 * attributes
 */
class SLXIO_APIEXPORT IParameterizedObject
{
public:
  /** Create a new instance of the IParameterizedObject */
  virtual IParameterizedObject* New() = 0;

  template <typename T>
  void AddParameter(const std::shared_ptr<IParameterObject<T>>& p)
  {
    parameters[p->GetName()] = p;
  }

  template <typename T>
  void SetParameter(std::string name, std::shared_ptr<T> value);

  template <typename T>
  std::shared_ptr<IParameterObject<T>> GetParameter(const std::string& name)
  {
    auto it = parameters.find(name);
    if (it != parameters.end()) {
      return std::dynamic_pointer_cast<IParameterObject<T>>(it->second);
    }
    return nullptr;
  }

  template <typename T>
  std::shared_ptr<IParameterObject<T>> GetParameter(const std::string name);

protected:
  std::unordered_map<std::string, std::shared_ptr<IParameterObjectBase>>
    m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMTERIZEDOBJECT_H