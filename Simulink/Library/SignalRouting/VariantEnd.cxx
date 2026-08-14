#include "VariantEnd.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

VariantEnd::VariantEnd() {}

VariantEnd::~VariantEnd() {}

const std::string& VariantEnd::GetVariantstartendtag() const
{
  return m_Variantstartendtag;
}

void VariantEnd::SetVariantstartendtag(const std::string& value)
{
  m_Variantstartendtag = value;
}

const std::string& VariantEnd::GetVariantpairedblock() const
{
  return m_Variantpairedblock;
}

void VariantEnd::SetVariantpairedblock(const std::string& value)
{
  m_Variantpairedblock = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
