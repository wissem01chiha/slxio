#include "CombinatorialLogic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CombinatorialLogic::CombinatorialLogic() {}

CombinatorialLogic::~CombinatorialLogic() {}

const std::string& CombinatorialLogic::GetTruthtable() const
{
  return m_Truthtable;
}

void CombinatorialLogic::SetTruthtable(const std::string& value)
{
  m_Truthtable = value;
}

const std::string& CombinatorialLogic::GetSampletime() const
{
  return m_Sampletime;
}

void CombinatorialLogic::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
