// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIGNALCOPY_H
#define SIGNALCOPY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SignalCopy : public IBlockParameters,
                                   public IBlockProperties
{
public:
    /** Default Constructor */
    SignalCopy();

    /** Default Destructor */
    ~SignalCopy();

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

#endif // SIGNALCOPY_H
