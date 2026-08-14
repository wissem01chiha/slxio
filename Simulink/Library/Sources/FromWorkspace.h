// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FROMWORKSPACE_H
#define FROMWORKSPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FromWorkspace : public IBlockParameters,
                                      public IBlockProperties
{
public:
    /** Default Constructor */
    FromWorkspace();

    /** Default Destructor */
    ~FromWorkspace();

    const std::string& GetVariablename() const;
    void SetVariablename(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetInterpolate() const;
    void SetInterpolate(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetOutputafterfinalvalue() const;
    void SetOutputafterfinalvalue(const std::string& value);

private:
    std::string m_Variablename;

    std::string m_Outdatatypestr;

    std::string m_Sampletime;

    std::string m_Interpolate;

    std::string m_Zerocross;

    std::string m_Outputafterfinalvalue;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FROMWORKSPACE_H
