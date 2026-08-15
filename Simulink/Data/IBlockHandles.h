// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKHANDLES_H
#define IBLOCKHANDLES_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IBlockHandles
{
public:
    virtual ~IBlockHandles() = default;

    virtual double GetHandle() const = 0;
    virtual std::string GetName() const = 0;
    virtual std::string GetParent() const = 0;
    virtual std::vector<std::string> GetInputSignalNames() const = 0;
    virtual std::vector<std::string> GetOutputSignalNames() const = 0;
    virtual std::vector<std::string> GetLineHandles() const = 0;
    virtual std::vector<std::string> GetPortHandles() const = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IBLOCKHANDLES_H