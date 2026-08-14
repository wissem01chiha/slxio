// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef UNITSYSTEMCONFIGURATION_H
#define UNITSYSTEMCONFIGURATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT UnitSystemConfiguration : public IBlockParameters,
                                                public IBlockProperties
{
public:
    /** Default Constructor */
    UnitSystemConfiguration();

    /** Default Destructor */
    ~UnitSystemConfiguration();

    const std::string& GetUnitsystems() const;
    void SetUnitsystems(const std::string& value);

    const std::string& GetAllowallunitsystems() const;
    void SetAllowallunitsystems(const std::string& value);

private:
    std::string m_Unitsystems;

    std::string m_Allowallunitsystems;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // UNITSYSTEMCONFIGURATION_H
