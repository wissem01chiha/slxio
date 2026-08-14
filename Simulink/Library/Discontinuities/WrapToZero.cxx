#include "WrapToZero.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

WrapToZero::WrapToZero() {}

WrapToZero::~WrapToZero() {}

const std::string& WrapToZero::GetThreshold() const { return m_Threshold; }

void WrapToZero::SetThreshold(const std::string& value) { m_Threshold = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
