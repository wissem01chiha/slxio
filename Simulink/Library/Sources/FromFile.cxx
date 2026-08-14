#include "FromFile.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FromFile::FromFile() {}

FromFile::~FromFile() {}

const std::string& FromFile::GetFilename() const { return m_Filename; }

void FromFile::SetFilename(const std::string& value) { m_Filename = value; }

const std::string& FromFile::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FromFile::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FromFile::GetSampletime() const { return m_Sampletime; }

void FromFile::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& FromFile::GetExtrapolationbeforefirstdatapoint() const
{
    return m_Extrapolationbeforefirstdatapoint;
}

void FromFile::SetExtrapolationbeforefirstdatapoint(const std::string& value)
{
    m_Extrapolationbeforefirstdatapoint = value;
}

const std::string& FromFile::GetInterpolationwithintimerange() const
{
    return m_Interpolationwithintimerange;
}

void FromFile::SetInterpolationwithintimerange(const std::string& value)
{
    m_Interpolationwithintimerange = value;
}

const std::string& FromFile::GetExtrapolationafterlastdatapoint() const
{
    return m_Extrapolationafterlastdatapoint;
}

void FromFile::SetExtrapolationafterlastdatapoint(const std::string& value)
{
    m_Extrapolationafterlastdatapoint = value;
}

const std::string& FromFile::GetZerocross() const { return m_Zerocross; }

void FromFile::SetZerocross(const std::string& value) { m_Zerocross = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
