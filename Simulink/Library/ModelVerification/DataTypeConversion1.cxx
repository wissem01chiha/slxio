#include "DataTypeConversion1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataTypeConversion1::DataTypeConversion1() {}

DataTypeConversion1::~DataTypeConversion1() {}

const std::string& DataTypeConversion1::GetOutmin() const
{
    return m_Outmin;
}

void DataTypeConversion1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DataTypeConversion1::GetOutmax() const
{
    return m_Outmax;
}

void DataTypeConversion1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DataTypeConversion1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DataTypeConversion1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DataTypeConversion1::GetLockscale() const
{
    return m_Lockscale;
}

void DataTypeConversion1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DataTypeConversion1::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void DataTypeConversion1::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& DataTypeConversion1::GetRndmeth() const
{
    return m_Rndmeth;
}

void DataTypeConversion1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DataTypeConversion1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DataTypeConversion1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DataTypeConversion1::GetSampletime() const
{
    return m_Sampletime;
}

void DataTypeConversion1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
