#include "FunctionCallSplit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FunctionCallSplit::FunctionCallSplit() {}

FunctionCallSplit::~FunctionCallSplit() {}

const std::string& FunctionCallSplit::GetIconshape() const
{
  return m_Iconshape;
}

void FunctionCallSplit::SetIconshape(const std::string& value)
{
  m_Iconshape = value;
}

const std::string& FunctionCallSplit::GetNumoutputports() const
{
  return m_Numoutputports;
}

void FunctionCallSplit::SetNumoutputports(const std::string& value)
{
  m_Numoutputports = value;
}

const std::string& FunctionCallSplit::GetOutputportlayout() const
{
  return m_Outputportlayout;
}

void FunctionCallSplit::SetOutputportlayout(const std::string& value)
{
  m_Outputportlayout = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
