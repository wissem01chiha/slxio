#include "DataTypeConversionInherited.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataTypeConversionInherited::DataTypeConversionInherited() {}

DataTypeConversionInherited::~DataTypeConversionInherited() {}

const std::string& DataTypeConversionInherited::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void DataTypeConversionInherited::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& DataTypeConversionInherited::GetRndmeth() const
{
    return m_Rndmeth;
}

void DataTypeConversionInherited::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DataTypeConversionInherited::GetDosatur() const
{
    return m_Dosatur;
}

void DataTypeConversionInherited::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
