// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKPARAMETERS_H
#define IBLOCKPARAMETERS_H

#include "ISignalAttributes.h"
#include "ICodeGenration.h"
#include "IDiagnoctics.h"
#include "IBlockParametersInformation.h"
#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

class IBlockParameters
{
private:

public:
    IBlockParameters();
    ~IBlockParameters();
};

/**
 /**
 * @class IBlockParameters
 * @brief Abstract interface representing block parameters.
 *        Composed of multiple sub-interfaces:
 *        - ISignalAttributes
 *        - ILogging
 *        - ICodeGeneration (optional)
 *        - IMain
 */
// class SLXIO_APIEXPORT IBlockParameters
// {
// public:
//     IBlockParameters() = default;
//     virtual ~IBlockParameters() = default;

//     // Core composition
//     virtual ISignalAttributes* GetSignalAttributes() const = 0;
//     virtual ILogging* GetLogging() const = 0;
//     virtual IMain* GetMain() const = 0;

//     // Optional: only if supported
//     virtual ICodeGenration* GetCodeGeneration() const = 0;

//     // Metadata
//     virtual IBlockParametersInformation* GetInformation() const = 0;
// };
 
#endif // IBLOCKPARAMETERS_H

