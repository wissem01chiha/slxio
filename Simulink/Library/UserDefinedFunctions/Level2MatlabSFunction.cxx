#include "Level2MatlabSFunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Level2MatlabSFunction::Level2MatlabSFunction() {}

Level2MatlabSFunction::~Level2MatlabSFunction() {}

const std::string& Level2MatlabSFunction::GetFunctionname() const
{
    return m_Functionname;
}

void Level2MatlabSFunction::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& Level2MatlabSFunction::GetParameters() const
{
    return m_Parameters;
}

void Level2MatlabSFunction::SetParameters(const std::string& value)
{
    m_Parameters = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
