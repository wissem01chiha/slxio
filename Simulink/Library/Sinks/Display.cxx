#include "Display.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Display::Display() {}

Display::~Display() {}

const std::string& Display::GetFormat() const
{
  return m_Format;
}

void Display::SetFormat(const std::string& value)
{
  m_Format = value;
}

const std::string& Display::GetDecimation() const
{
  return m_Decimation;
}

void Display::SetDecimation(const std::string& value)
{
  m_Decimation = value;
}

const std::string& Display::GetFloating() const
{
  return m_Floating;
}

void Display::SetFloating(const std::string& value)
{
  m_Floating = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
