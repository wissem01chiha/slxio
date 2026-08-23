// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ICONFIGURABLEOBJECT_H
#define ICONFIGURABLEOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "IConfigurationObject.h"
#include "IObservable.h"
#include "IParameterizedObject.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IConfigurableObject
 * @brief Abstract base class for an object that support one or mulitpple
 * IConfigurationObject
 */
class SLXIO_APIEXPORT IConfigurableObject : public IObservable
{
public:
    ~IConfigurableObject() = default;

    virtual HError
    AddConfig(const std::string& name,
              const std::shared_ptr<IConfigurationObject>& p) = 0;

    virtual HError
    SetConfig(const std::string& name,
              const std::shared_ptr<IConfigurationObject>& p) = 0;

    virtual std::shared_ptr<IConfigurationObject>
    GetConfig(const std::string& name) = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ICONFIGURABLEOBJECT_H