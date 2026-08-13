#include "CoulombViscousFriction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CoulombViscousFriction::CoulombViscousFriction() {}

CoulombViscousFriction::~CoulombViscousFriction() {}

const std::string& CoulombViscousFriction::GetOffset() const
{
    return m_Offset;
}

void CoulombViscousFriction::SetOffset(const std::string& value)
{
    m_Offset = value;
}

const std::string& CoulombViscousFriction::GetGain() const
{
    return m_Gain;
}

void CoulombViscousFriction::SetGain(const std::string& value)
{
    m_Gain = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
