// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObject.h"

#ifndef IMUTABLEPARAMETEROBJECT_H
#define IMUTABLEPARAMETEROBJECT_H

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IMutableParameterObject
 * @brief Specialization for mutable parameters.
 * Adds setter methods for parameters that can be changed.
 */
template <typename T>
class SLXIO_APIEXPORT IMutableParameterObject : public IParameterObject<T>
{
public:
    /** Set a new value */
    virtual void SetValue(const T& value) = 0;

    virtual ~IMutableParameterObject() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IMUTABLEPARAMETEROBJECT_H