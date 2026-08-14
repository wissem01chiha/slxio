// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKPROPERITIES_H
#define IBLOCKPROPERITIES_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "IBlockPropertiesInformation.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IBlockProperties
 * @brief
 */
class SLXIO_APIEXPORT IBlockProperties
{
public:
    IBlockProperties();
    ~IBlockProperties();

    virtual std::shared_ptr<IBlockProperties> GetInformation() const;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IBLOCKPROPERITIES_H