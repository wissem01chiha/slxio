#include "GotoTagVisibility.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

GotoTagVisibility::GotoTagVisibility() {}

GotoTagVisibility::~GotoTagVisibility() {}

const std::string& GotoTagVisibility::GetGototag() const { return m_Gototag; }

void GotoTagVisibility::SetGototag(const std::string& value)
{
    m_Gototag = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
