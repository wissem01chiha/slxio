#include "Goto.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Goto::Goto() {}

Goto::~Goto() {}

const std::string& Goto::GetGototag() const { return m_Gototag; }

void Goto::SetGototag(const std::string& value) { m_Gototag = value; }

const std::string& Goto::GetIcondisplay() const { return m_Icondisplay; }

void Goto::SetIcondisplay(const std::string& value) { m_Icondisplay = value; }

const std::string& Goto::GetTagvisibility() const { return m_Tagvisibility; }

void Goto::SetTagvisibility(const std::string& value)
{
    m_Tagvisibility = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
