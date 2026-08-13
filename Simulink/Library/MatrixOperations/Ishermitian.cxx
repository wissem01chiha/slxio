#include "Ishermitian.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ishermitian::Ishermitian() {}

Ishermitian::~Ishermitian() {}

const std::string& Ishermitian::GetMode() const
{
    return m_Mode;
}

void Ishermitian::SetMode(const std::string& value)
{
    m_Mode = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
