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
 * both. Many Simulink core blocks implement this pattern
 */
class SLXIO_APIEXPORT IParameterizedObject
{
public:
  /** Create a new instance of the IParameterizedObject */
  virtual IParameterizedObject* New() = 0;

  /** 
   * Add a parameter 
   * https://www.mathworks.com/help/simulink/slref/add_param.html
   */
  virtual void AddParam(const std::string& name, const std::shared_ptr<IParameterObjectBase>& p) =0;

  /** 
   * Set a parameter 
   * https://www.mathworks.com/help/simulink/slref/set_param.html
   * @param name parameter name to set it value
   */
  virtual void SetParam(const std::string& name, const std::shared_ptr<IParameterObjectBase>& p) =0;

  /** Get a parameter by name */
  virtual std::shared_ptr<IParameterObjectBase> GetParam(const std::string& name) = 0;

};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMTERIZEDOBJECT_H
