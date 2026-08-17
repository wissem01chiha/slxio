// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FINDNONZEROELEMENTS_H
#define FINDNONZEROELEMENTS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FindNonzeroElements : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    FindNonzeroElements();

    /** Default Destructor */
    ~FindNonzeroElements();

    const std::string& GetIndexoutputformat() const;
    void SetIndexoutputformat(const std::string& value);

    const std::string& GetNumberofinputdimensions() const;
    void SetNumberofinputdimensions(const std::string& value);

    const std::string& GetIndexmode() const;
    void SetIndexmode(const std::string& value);

    const std::string& GetShowoutputfornonzeroinputvalues() const;
    void SetShowoutputfornonzeroinputvalues(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Indexoutputformat;

    std::string m_Numberofinputdimensions;

    std::string m_Indexmode;

    std::string m_Showoutputfornonzeroinputvalues;

    std::string m_Outdatatypestr;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FINDNONZEROELEMENTS_H
