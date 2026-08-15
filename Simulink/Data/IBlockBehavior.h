// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKBEHAVIOR_H
#define IBLOCKBEHAVIOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IBlockBehavior
 * @brief Interface for Simulink block behavior properties
 */
class SLXIO_APIEXPORT IBlockBehavior
{
public:
    virtual ~IBlockBehavior() = default;

    /// Whether block is commented 
    virtual std::string GetCommented() const = 0;

    /// Active status at compile time ('off' | 'on')
    virtual std::string GetCompiledIsActive() const = 0;

    /// Sample time vector or cell array
    virtual std::vector<std::string> GetCompiledSampleTime() const = 0;

    /// Whether block is a state owner 
    virtual std::string GetIsStateOwnerBlock() const = 0;

    /// External mode logging support
    virtual std::string GetExtModeLoggingSupported() const = 0;

    /// External mode trigger 
    virtual std::string GetExtModeLoggingTrig() const = 0;

    /// External mode upload option 
    virtual std::string GetExtModeUploadOption() const = 0;

    /// Whether block is selected 
    virtual std::string GetSelected() const = 0;

    /// State perturbation size 
    virtual std::string GetStatePerturbationForJacobian() const = 0;

    /// Execution priority 
    virtual std::string GetPriority() const = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IBLOCKBEHAVIOR_H
