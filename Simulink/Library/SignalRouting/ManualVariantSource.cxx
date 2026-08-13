#include "ManualVariantSource.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ManualVariantSource::ManualVariantSource() {}

ManualVariantSource::~ManualVariantSource() {}

const std::string& ManualVariantSource::GetNumchoices() const
{
    return m_Numchoices;
}

void ManualVariantSource::SetNumchoices(const std::string& value)
{
    m_Numchoices = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
