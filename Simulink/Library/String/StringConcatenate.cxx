#include "StringConcatenate.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StringConcatenate::StringConcatenate() {}

StringConcatenate::~StringConcatenate() {}

const std::string& StringConcatenate::GetInputs() const { return m_Inputs; }

void StringConcatenate::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& StringConcatenate::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void StringConcatenate::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
