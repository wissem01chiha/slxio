#include "Reset.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Reset::Reset() {}

Reset::~Reset() {}

const std::string& Reset::GetResettriggertype() const
{
    return m_Resettriggertype;
}

void Reset::SetResettriggertype(const std::string& value)
{
    m_Resettriggertype = value;
}

const std::string& Reset::GetPropagatevarsize() const
{
    return m_Propagatevarsize;
}

void Reset::SetPropagatevarsize(const std::string& value)
{
    m_Propagatevarsize = value;
}

const std::string& Reset::GetZerocross() const
{
    return m_Zerocross;
}

void Reset::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
