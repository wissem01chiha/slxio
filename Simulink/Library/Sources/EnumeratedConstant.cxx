#include "EnumeratedConstant.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

EnumeratedConstant::EnumeratedConstant() {}

EnumeratedConstant::~EnumeratedConstant() {}

const std::string& EnumeratedConstant::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void EnumeratedConstant::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& EnumeratedConstant::GetValue() const { return m_Value; }

void EnumeratedConstant::SetValue(const std::string& value) { m_Value = value; }

const std::string& EnumeratedConstant::GetSampletime() const
{
    return m_Sampletime;
}

void EnumeratedConstant::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
