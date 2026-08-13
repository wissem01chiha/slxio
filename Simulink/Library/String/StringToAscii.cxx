#include "StringToAscii.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringToAscii::StringToAscii() {}

StringToAscii::~StringToAscii() {}

const std::string& StringToAscii::GetOutputvectorsize() const
{
    return m_Outputvectorsize;
}

void StringToAscii::SetOutputvectorsize(const std::string& value)
{
    m_Outputvectorsize = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
