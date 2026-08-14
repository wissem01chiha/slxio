#include "SineLookup.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SineLookup::SineLookup() {}

SineLookup::~SineLookup() {}

const std::string& SineLookup::GetFormula() const
{
  return m_Formula;
}

void SineLookup::SetFormula(const std::string& value)
{
  m_Formula = value;
}

const std::string& SineLookup::GetNumdatapoints() const
{
  return m_Numdatapoints;
}

void SineLookup::SetNumdatapoints(const std::string& value)
{
  m_Numdatapoints = value;
}

const std::string& SineLookup::GetOutputwordlength() const
{
  return m_Outputwordlength;
}

void SineLookup::SetOutputwordlength(const std::string& value)
{
  m_Outputwordlength = value;
}

const std::string& SineLookup::GetInternalrulepriority() const
{
  return m_Internalrulepriority;
}

void SineLookup::SetInternalrulepriority(const std::string& value)
{
  m_Internalrulepriority = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
