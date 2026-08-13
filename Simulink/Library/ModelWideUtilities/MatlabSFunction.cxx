#include "MatlabSFunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MatlabSFunction::MatlabSFunction() {}

MatlabSFunction::~MatlabSFunction() {}

const std::string& MatlabSFunction::GetFunctionname() const
{
    return m_Functionname;
}

void MatlabSFunction::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& MatlabSFunction::GetParameters() const
{
    return m_Parameters;
}

void MatlabSFunction::SetParameters(const std::string& value)
{
    m_Parameters = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
