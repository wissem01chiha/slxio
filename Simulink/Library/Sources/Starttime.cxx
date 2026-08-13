#include "Starttime.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Starttime::Starttime() {}

Starttime::~Starttime() {}

const std::string& Starttime::GetFunctionname() const
{
    return m_Functionname;
}

void Starttime::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& Starttime::GetParameters() const
{
    return m_Parameters;
}

void Starttime::SetParameters(const std::string& value)
{
    m_Parameters = value;
}

const std::string& Starttime::GetSfunctionmodules() const
{
    return m_Sfunctionmodules;
}

void Starttime::SetSfunctionmodules(const std::string& value)
{
    m_Sfunctionmodules = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
