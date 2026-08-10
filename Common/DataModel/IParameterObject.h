// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMTEROBJECT_H
#define IPARAMTEROBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IParameterObject
 * @brief
 */
template <typename T>
class SLXIO_APIEXPORT IParameterObject
{
public:
  IParameterObject();
  ~IParameterObject();
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMTEROBJECT_H