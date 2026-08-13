#include "Send.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Send::Send() {}

Send::~Send() {}

const std::string& Send::GetShowenableport() const
{
    return m_Showenableport;
}

void Send::SetShowenableport(const std::string& value)
{
    m_Showenableport = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
