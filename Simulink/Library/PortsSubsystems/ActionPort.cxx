#include "ActionPort.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ActionPort::ActionPort() {}

ActionPort::~ActionPort() {}

const std::string& ActionPort::GetInitializestates() const
{
    return m_Initializestates;
}

void ActionPort::SetInitializestates(const std::string& value)
{
    m_Initializestates = value;
}

const std::string& ActionPort::GetPropagatevarsize() const
{
    return m_Propagatevarsize;
}

void ActionPort::SetPropagatevarsize(const std::string& value)
{
    m_Propagatevarsize = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
