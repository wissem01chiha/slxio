#include "Issymmetric.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Issymmetric::Issymmetric() {}

Issymmetric::~Issymmetric() {}

const std::string& Issymmetric::GetMode() const { return m_Mode; }

void Issymmetric::SetMode(const std::string& value) { m_Mode = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
