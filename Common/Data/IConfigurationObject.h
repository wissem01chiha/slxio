// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ICONFIGURATIONOBJECT_H
#define ICONFIGURATIONOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IObservable.h"
#include "IParameterizedObject.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IConfigurationObject
 * @brief Abstract base class for all configuration objects it drive from
 * IParameterizedObject, as configurations have attributes of type drived from
 * IParameterObjectBase
 */
class SLXIO_APIEXPORT IConfigurationObject : public IParameterizedObject,
                                             public IObservable
{
public:
    ~IConfigurationObject() = default;

    /** Activates this configuration .*/
    virtual HError Activate() = 0;

    /** Deactivates this configuration.*/
    virtual HError Deactivate() = 0;

    /** Checks if this configuration set is active */
    virtual bool IsActive() const = 0;

    /** Converts to a string representation. */
    virtual std::string ToString() const = 0;

    /** Each configuration is identified using a unique name */
    virtual std::string GetName() const = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ICONFIGURATIONOBJECT_H