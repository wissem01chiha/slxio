// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKPROPERTIESINFORMATION_H
#define IBLOCKPROPERTIESINFORMATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IBlockPropertiesInformation
 * @brief
 */
class SLXIO_APIEXPORT IBlockPropertiesInformation
{
public:
    IBlockPropertiesInformation();
    virtual ~IBlockPropertiesInformation() = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IBLOCKPROPERTIESINFORMATION_H