#include "ManualVariantSink.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ManualVariantSink::ManualVariantSink() {}

ManualVariantSink::~ManualVariantSink() {}

const std::string& ManualVariantSink::GetNumchoices() const
{
  return m_Numchoices;
}

void ManualVariantSink::SetNumchoices(const std::string& value)
{
  m_Numchoices = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
