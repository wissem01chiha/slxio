#include "DetectRiseNonnegative.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DetectRiseNonnegative::DetectRiseNonnegative() {}

DetectRiseNonnegative::~DetectRiseNonnegative() {}

const std::string& DetectRiseNonnegative::GetVinit() const
{
  return m_Vinit;
}

void DetectRiseNonnegative::SetVinit(const std::string& value)
{
  m_Vinit = value;
}

const std::string& DetectRiseNonnegative::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void DetectRiseNonnegative::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& DetectRiseNonnegative::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void DetectRiseNonnegative::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
