// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMTEROBJECT_H
#define IPARAMTEROBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "ILogger.h"
#include "IParameterObjectBase.h"

namespace slxio
{
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
    virtual IParameterObject* New() = 0;
    virtual T& GetValue() = 0;
    virtual ~IParameterObject() = default;
};
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMTEROBJECT_H