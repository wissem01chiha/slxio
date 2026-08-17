// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKPARAMETERS_H
#define IBLOCKPARAMETERS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "IBlockParametersInformation.h"
#include "ICodeGenration.h"
#include "IDiagnoctics.h"
#include "ILogging.h"
#include "ISignalAttributes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IBlockParameters
 * @brief Abstract interface representing block parameters.
 */
class SLXIO_APIEXPORT IBlockParameters
{
public:
    IBlockParameters() = default;
    virtual ~IBlockParameters() = default;

    virtual std::shared_ptr<ISignalAttributes> GetSignalAttributes() const;
    virtual std::shared_ptr<ILogging> GetLogging() const;
    virtual std::shared_ptr<IBlockParametersInformation>
    GetBlockParametersInformation() const;
    virtual std::shared_ptr<ICodeGenration> GetCodeGeneration() const;
    virtual std::shared_ptr<IBlockParametersInformation> GetInformation() const;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IBLOCKPARAMETERS_H
