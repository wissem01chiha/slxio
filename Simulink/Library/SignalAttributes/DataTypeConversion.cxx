#include "DataTypeConversion.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataTypeConversion::DataTypeConversion() {}

DataTypeConversion::~DataTypeConversion() {}

const std::string& DataTypeConversion::GetOutmin() const { return m_Outmin; }

void DataTypeConversion::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DataTypeConversion::GetOutmax() const { return m_Outmax; }

void DataTypeConversion::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DataTypeConversion::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DataTypeConversion::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DataTypeConversion::GetLockscale() const
{
    return m_Lockscale;
}

void DataTypeConversion::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DataTypeConversion::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void DataTypeConversion::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& DataTypeConversion::GetRndmeth() const { return m_Rndmeth; }

void DataTypeConversion::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DataTypeConversion::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DataTypeConversion::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DataTypeConversion::GetSampletime() const
{
    return m_Sampletime;
}

void DataTypeConversion::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
