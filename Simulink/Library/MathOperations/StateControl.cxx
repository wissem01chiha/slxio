#include "StateControl.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateControl::StateControl() {}

StateControl::~StateControl() {}

const std::string& StateControl::GetStatecontrol() const
{
    return m_Statecontrol;
}

void StateControl::SetStatecontrol(const std::string& value)
{
    m_Statecontrol = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
