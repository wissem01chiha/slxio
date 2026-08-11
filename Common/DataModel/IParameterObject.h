// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMTEROBJECT_H
#define IPARAMTEROBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "IParameterObjectBase.h"
#include "ILogger.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IParameterObject
 * @brief Abstract templated interafce for all parameter based types
 * a IParameterObject is a pair of key (name of the parameter)
 * and a value, the name is a string based and the value is templated
 * by typename T which can be a range based type eg std::vector,std::array..
 * or numeric, or other custom user type
 */
template <typename T>
class SLXIO_APIEXPORT IParameterObject : public IParameterObjectBase
{
public:
  /** Create a new instance of the IParameterObject */
  virtual IParameterObject* New() = 0;

  /** Returns current parameter name */
  virtual std::string GetName() { return m_name; };

  /** Parameter minumin value */
  virtual Float32 GetMin() = 0;

  /** Parameter maxiumum value */
  virtual Float32 GetMax() = 0;

  virtual DataType GetDataType() = 0;

  virtual T& GetValue() = 0;

  IParameterObject();

  virtual ~IParameterObject() = default;

protected:
  std::string m_name;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMTEROBJECT_H