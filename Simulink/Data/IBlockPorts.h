// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IBLOCKPORTS_H
#define IBLOCKPORTS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IBlockPorts {
public:
    virtual ~IBlockPorts() = default;

    virtual std::string GetCompiledBusType() const = 0;
    virtual std::map<std::string,std::string> GetCompiledPortDataTypes() const = 0;
    virtual std::map<std::string,int> GetCompiledPortDimensions() const = 0;
    virtual std::map<std::string,std::string> GetCompiledPortUnits() const = 0;
    virtual std::vector<std::string> GetPortConnectivity() const = 0;
    virtual std::string GetSignalHierarchy() const = 0;
};


SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IBLOCKPORTS_H