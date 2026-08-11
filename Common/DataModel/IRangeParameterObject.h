// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IRANGEPARAMTEROBJECT_H
#define IRANGEPARAMTEROBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "IParameterObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IRangeParameterObject 
 * @brief Specialization for range-based types
 */
template <typename T>
class SLXIO_APIEXPORT IRangeParameterObject : public IParameterObject<T> {
public:
    virtual T& GetMin() = 0;
    virtual T& GetMax() = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IRANGEPARAMTEROBJECT_H