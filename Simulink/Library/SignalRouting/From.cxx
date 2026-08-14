#include "From.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

From::From() {}

From::~From() {}

const std::string& From::GetGototag() const
{
  return m_Gototag;
}

void From::SetGototag(const std::string& value)
{
  m_Gototag = value;
}

const std::string& From::GetIcondisplay() const
{
  return m_Icondisplay;
}

void From::SetIcondisplay(const std::string& value)
{
  m_Icondisplay = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
