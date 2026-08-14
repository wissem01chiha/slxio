#include "ManualSwitch.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ManualSwitch::ManualSwitch() {}

ManualSwitch::~ManualSwitch() {}

const std::string& ManualSwitch::GetVarsize() const { return m_Varsize; }

void ManualSwitch::SetVarsize(const std::string& value) { m_Varsize = value; }

const std::string& ManualSwitch::GetSampletime() const { return m_Sampletime; }

void ManualSwitch::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
