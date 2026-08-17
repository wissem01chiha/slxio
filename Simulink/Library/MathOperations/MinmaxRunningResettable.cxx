#include "MinmaxRunningResettable.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MinmaxRunningResettable::MinmaxRunningResettable() {}

MinmaxRunningResettable::~MinmaxRunningResettable() {}

const std::string& MinmaxRunningResettable::GetFunction() const
{
    return m_Function;
}

void MinmaxRunningResettable::SetFunction(const std::string& value)
{
    m_Function = value;
}

const std::string& MinmaxRunningResettable::GetVinit() const { return m_Vinit; }

void MinmaxRunningResettable::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
