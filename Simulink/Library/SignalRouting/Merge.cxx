#include "Merge.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Merge::Merge() {}

Merge::~Merge() {}

const std::string& Merge::GetInputs() const
{
  return m_Inputs;
}

void Merge::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& Merge::GetInitialoutput() const
{
  return m_Initialoutput;
}

void Merge::SetInitialoutput(const std::string& value)
{
  m_Initialoutput = value;
}

const std::string& Merge::GetAllowunequalinputportwidths() const
{
  return m_Allowunequalinputportwidths;
}

void Merge::SetAllowunequalinputportwidths(const std::string& value)
{
  m_Allowunequalinputportwidths = value;
}

const std::string& Merge::GetInputportoffsets() const
{
  return m_Inputportoffsets;
}

void Merge::SetInputportoffsets(const std::string& value)
{
  m_Inputportoffsets = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
