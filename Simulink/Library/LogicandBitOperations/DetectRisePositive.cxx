#include "DetectRisePositive.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DetectRisePositive::DetectRisePositive() {}

DetectRisePositive::~DetectRisePositive() {}

const std::string& DetectRisePositive::GetVinit() const
{
  return m_Vinit;
}

void DetectRisePositive::SetVinit(const std::string& value)
{
  m_Vinit = value;
}

const std::string& DetectRisePositive::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void DetectRisePositive::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& DetectRisePositive::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void DetectRisePositive::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
