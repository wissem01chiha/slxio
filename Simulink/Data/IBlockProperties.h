// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKPROPERITIES_H
#define IBLOCKPROPERITIES_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "IBlockAppearance.h"
#include "IBlockBehavior.h"
#include "IBlockLibraries.h"
#include "IBlockPorts.h"
#include "IBlockPropertiesInformation.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IBlockProperties
 * @brief Implement Simulink Common Block Properties
 * https://www.mathworks.com/help/simulink/slref/block-parameters-and-properties.html#f23-7517
 */
class SLXIO_APIEXPORT IBlockProperties
{
public:
    IBlockProperties();
    virtual ~IBlockProperties();

    virtual std::shared_ptr<IBlockAppearance> GetAppearance() const = 0;
    virtual std::shared_ptr<IBlockBehavior> GetBehavior() const = 0;
    virtual std::shared_ptr<IBlockLibraries> GetLibraries() const = 0;
    virtual std::shared_ptr<IBlockPorts> GetPorts() const = 0;
    virtual std::shared_ptr<IBlockPropertiesInformation>
    GetMetadata() const = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IBLOCKPROPERITIES_H