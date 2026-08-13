#include "FromSpreadsheet.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FromSpreadsheet::FromSpreadsheet() {}

FromSpreadsheet::~FromSpreadsheet() {}

const std::string& FromSpreadsheet::GetFilename() const
{
    return m_Filename;
}

void FromSpreadsheet::SetFilename(const std::string& value)
{
    m_Filename = value;
}

const std::string& FromSpreadsheet::GetSheetname() const
{
    return m_Sheetname;
}

void FromSpreadsheet::SetSheetname(const std::string& value)
{
    m_Sheetname = value;
}

const std::string& FromSpreadsheet::GetRange() const
{
    return m_Range;
}

void FromSpreadsheet::SetRange(const std::string& value)
{
    m_Range = value;
}

const std::string& FromSpreadsheet::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FromSpreadsheet::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FromSpreadsheet::GetTreatfirstcolumnas() const
{
    return m_Treatfirstcolumnas;
}

void FromSpreadsheet::SetTreatfirstcolumnas(const std::string& value)
{
    m_Treatfirstcolumnas = value;
}

const std::string& FromSpreadsheet::GetSampletime() const
{
    return m_Sampletime;
}

void FromSpreadsheet::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FromSpreadsheet::GetExtrapolationbeforefirstdatapoint() const
{
    return m_Extrapolationbeforefirstdatapoint;
}

void FromSpreadsheet::SetExtrapolationbeforefirstdatapoint(const std::string& value)
{
    m_Extrapolationbeforefirstdatapoint = value;
}

const std::string& FromSpreadsheet::GetInterpolationwithintimerange() const
{
    return m_Interpolationwithintimerange;
}

void FromSpreadsheet::SetInterpolationwithintimerange(const std::string& value)
{
    m_Interpolationwithintimerange = value;
}

const std::string& FromSpreadsheet::GetExtrapolationafterlastdatapoint() const
{
    return m_Extrapolationafterlastdatapoint;
}

void FromSpreadsheet::SetExtrapolationafterlastdatapoint(const std::string& value)
{
    m_Extrapolationafterlastdatapoint = value;
}

const std::string& FromSpreadsheet::GetOutputafterlastpoint() const
{
    return m_Outputafterlastpoint;
}

void FromSpreadsheet::SetOutputafterlastpoint(const std::string& value)
{
    m_Outputafterlastpoint = value;
}

const std::string& FromSpreadsheet::GetZerocross() const
{
    return m_Zerocross;
}

void FromSpreadsheet::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FromSpreadsheet::GetReaderlibrary() const
{
    return m_Readerlibrary;
}

void FromSpreadsheet::SetReaderlibrary(const std::string& value)
{
    m_Readerlibrary = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
