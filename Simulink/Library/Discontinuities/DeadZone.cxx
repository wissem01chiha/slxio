#include "DeadZone.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DeadZone::DeadZone() {}

DeadZone::~DeadZone() {}

const std::string& DeadZone::GetLowervalue() const
{
    return m_Lowervalue;
}

void DeadZone::SetLowervalue(const std::string& value)
{
    m_Lowervalue = value;
}

const std::string& DeadZone::GetUppervalue() const
{
    return m_Uppervalue;
}

void DeadZone::SetUppervalue(const std::string& value)
{
    m_Uppervalue = value;
}

const std::string& DeadZone::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DeadZone::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DeadZone::GetLinearizeasgain() const
{
    return m_Linearizeasgain;
}

void DeadZone::SetLinearizeasgain(const std::string& value)
{
    m_Linearizeasgain = value;
}

const std::string& DeadZone::GetZerocross() const
{
    return m_Zerocross;
}

void DeadZone::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& DeadZone::GetSampletime() const
{
    return m_Sampletime;
}

void DeadZone::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
