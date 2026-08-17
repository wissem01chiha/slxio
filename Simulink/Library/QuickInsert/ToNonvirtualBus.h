// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TONONVIRTUALBUS_H
#define TONONVIRTUALBUS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ToNonvirtualBus : public IBlockParameters,
                                        public IBlockProperties
{
public:
    /** Default Constructor */
    ToNonvirtualBus();

    /** Default Destructor */
    ~ToNonvirtualBus();

    const std::string& GetConversionoutput() const;
    void SetConversionoutput(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetOverrideopt() const;
    void SetOverrideopt(const std::string& value);

private:
    std::string m_Conversionoutput;

    std::string m_Outdatatypestr;

    std::string m_Overrideopt;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TONONVIRTUALBUS_H
