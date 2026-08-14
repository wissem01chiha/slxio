#include "SincosLookup.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SincosLookup::SincosLookup() {}

SincosLookup::~SincosLookup() {}

const std::string& SincosLookup::GetFormula() const
{
  return m_Formula;
}

void SincosLookup::SetFormula(const std::string& value)
{
  m_Formula = value;
}

const std::string& SincosLookup::GetNumdatapoints() const
{
  return m_Numdatapoints;
}

void SincosLookup::SetNumdatapoints(const std::string& value)
{
  m_Numdatapoints = value;
}

const std::string& SincosLookup::GetOutputwordlength() const
{
  return m_Outputwordlength;
}

void SincosLookup::SetOutputwordlength(const std::string& value)
{
  m_Outputwordlength = value;
}

const std::string& SincosLookup::GetInternalrulepriority() const
{
  return m_Internalrulepriority;
}

void SincosLookup::SetInternalrulepriority(const std::string& value)
{
  m_Internalrulepriority = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
