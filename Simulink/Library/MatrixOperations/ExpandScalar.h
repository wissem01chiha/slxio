// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EXPANDSCALAR_H
#define EXPANDSCALAR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ExpandScalar : public IBlockParameters,
                                     public IBlockProperties
{
public:
    /** Default Constructor */
    ExpandScalar();

    /** Default Destructor */
    ~ExpandScalar();

    const std::string& GetElementvalue() const;
    void SetElementvalue(const std::string& value);

    const std::string& GetOutputdimensions() const;
    void SetOutputdimensions(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Elementvalue;

    std::string m_Outputdimensions;

    std::string m_Outdatatypestr;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // EXPANDSCALAR_H
