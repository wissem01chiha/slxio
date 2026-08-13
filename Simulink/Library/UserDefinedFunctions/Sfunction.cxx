#include "Sfunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sfunction::Sfunction() {}

Sfunction::~Sfunction() {}

const std::string& Sfunction::GetFunctionname() const
{
    return m_Functionname;
}

void Sfunction::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& Sfunction::GetParameters() const
{
    return m_Parameters;
}

void Sfunction::SetParameters(const std::string& value)
{
    m_Parameters = value;
}

const std::string& Sfunction::GetSfunctionmodules() const
{
    return m_Sfunctionmodules;
}

void Sfunction::SetSfunctionmodules(const std::string& value)
{
    m_Sfunctionmodules = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
