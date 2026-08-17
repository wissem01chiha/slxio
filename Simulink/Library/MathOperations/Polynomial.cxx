#include "Polynomial.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Polynomial::Polynomial() {}

Polynomial::~Polynomial() {}

const std::string& Polynomial::GetCoefs() const { return m_Coefs; }

void Polynomial::SetCoefs(const std::string& value) { m_Coefs = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
