// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FROMSPREADSHEET_H
#define FROMSPREADSHEET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FromSpreadsheet : public IBlockParameters,
                                        public IBlockProperties
{
public:
    /** Default Constructor */
    FromSpreadsheet();

    /** Default Destructor */
    ~FromSpreadsheet();

    const std::string& GetFilename() const;
    void SetFilename(const std::string& value);

    const std::string& GetSheetname() const;
    void SetSheetname(const std::string& value);

    const std::string& GetRange() const;
    void SetRange(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetTreatfirstcolumnas() const;
    void SetTreatfirstcolumnas(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetExtrapolationbeforefirstdatapoint() const;
    void SetExtrapolationbeforefirstdatapoint(const std::string& value);

    const std::string& GetInterpolationwithintimerange() const;
    void SetInterpolationwithintimerange(const std::string& value);

    const std::string& GetExtrapolationafterlastdatapoint() const;
    void SetExtrapolationafterlastdatapoint(const std::string& value);

    const std::string& GetOutputafterlastpoint() const;
    void SetOutputafterlastpoint(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetReaderlibrary() const;
    void SetReaderlibrary(const std::string& value);

private:
    std::string m_Filename;

    std::string m_Sheetname;

    std::string m_Range;

    std::string m_Outdatatypestr;

    std::string m_Treatfirstcolumnas;

    std::string m_Sampletime;

    std::string m_Extrapolationbeforefirstdatapoint;

    std::string m_Interpolationwithintimerange;

    std::string m_Extrapolationafterlastdatapoint;

    std::string m_Outputafterlastpoint;

    std::string m_Zerocross;

    std::string m_Readerlibrary;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FROMSPREADSHEET_H
