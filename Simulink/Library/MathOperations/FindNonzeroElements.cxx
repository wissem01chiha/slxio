#include "FindNonzeroElements.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FindNonzeroElements::FindNonzeroElements() {}

FindNonzeroElements::~FindNonzeroElements() {}

const std::string& FindNonzeroElements::GetIndexoutputformat() const
{
  return m_Indexoutputformat;
}

void FindNonzeroElements::SetIndexoutputformat(const std::string& value)
{
  m_Indexoutputformat = value;
}

const std::string& FindNonzeroElements::GetNumberofinputdimensions() const
{
  return m_Numberofinputdimensions;
}

void FindNonzeroElements::SetNumberofinputdimensions(const std::string& value)
{
  m_Numberofinputdimensions = value;
}

const std::string& FindNonzeroElements::GetIndexmode() const
{
  return m_Indexmode;
}

void FindNonzeroElements::SetIndexmode(const std::string& value)
{
  m_Indexmode = value;
}

const std::string& FindNonzeroElements::GetShowoutputfornonzeroinputvalues()
  const
{
  return m_Showoutputfornonzeroinputvalues;
}

void FindNonzeroElements::SetShowoutputfornonzeroinputvalues(
  const std::string& value)
{
  m_Showoutputfornonzeroinputvalues = value;
}

const std::string& FindNonzeroElements::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void FindNonzeroElements::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& FindNonzeroElements::GetSampletime() const
{
  return m_Sampletime;
}

void FindNonzeroElements::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
