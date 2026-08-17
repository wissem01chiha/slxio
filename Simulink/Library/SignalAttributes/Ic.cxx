#include "Ic.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Ic::Ic() {}

Ic::~Ic() {}

const std::string& Ic::GetValue() const { return m_Value; }

void Ic::SetValue(const std::string& value) { m_Value = value; }

const std::string& Ic::GetSampletime() const { return m_Sampletime; }

void Ic::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
