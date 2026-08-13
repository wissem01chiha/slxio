#include "Width.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Width::Width() {}

Width::~Width() {}

const std::string& Width::GetOutdatatypemode() const
{
    return m_Outdatatypemode;
}

void Width::SetOutdatatypemode(const std::string& value)
{
    m_Outdatatypemode = value;
}

const std::string& Width::GetDatatype() const
{
    return m_Datatype;
}

void Width::SetDatatype(const std::string& value)
{
    m_Datatype = value;
}

const std::string& Width::GetAlwaysuseconstantsampletime() const
{
    return m_Alwaysuseconstantsampletime;
}

void Width::SetAlwaysuseconstantsampletime(const std::string& value)
{
    m_Alwaysuseconstantsampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
