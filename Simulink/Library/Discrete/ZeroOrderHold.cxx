#include "ZeroOrderHold.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ZeroOrderHold::ZeroOrderHold() {}

ZeroOrderHold::~ZeroOrderHold() {}

const std::string& ZeroOrderHold::GetSampletime() const
{
    return m_Sampletime;
}

void ZeroOrderHold::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
