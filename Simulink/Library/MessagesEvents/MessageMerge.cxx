#include "MessageMerge.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MessageMerge::MessageMerge() {}

MessageMerge::~MessageMerge() {}

const std::string& MessageMerge::GetNumberinputports() const
{
    return m_Numberinputports;
}

void MessageMerge::SetNumberinputports(const std::string& value)
{
    m_Numberinputports = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
