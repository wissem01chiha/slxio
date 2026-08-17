#include "StringToSingle.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StringToSingle::StringToSingle() {}

StringToSingle::~StringToSingle() {}

const std::string& StringToSingle::GetFormat() const { return m_Format; }

void StringToSingle::SetFormat(const std::string& value) { m_Format = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
