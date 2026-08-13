#include "Mux.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Mux::Mux() {}

Mux::~Mux() {}

const std::string& Mux::GetInputs() const
{
    return m_Inputs;
}

void Mux::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Mux::GetDisplayoption() const
{
    return m_Displayoption;
}

void Mux::SetDisplayoption(const std::string& value)
{
    m_Displayoption = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
