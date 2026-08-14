#include "BusAssignment.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BusAssignment::BusAssignment() {}

BusAssignment::~BusAssignment() {}

const std::string& BusAssignment::GetAssignedsignals() const
{
  return m_Assignedsignals;
}

void BusAssignment::SetAssignedsignals(const std::string& value)
{
  m_Assignedsignals = value;
}

const std::string& BusAssignment::GetInputsignals() const
{
  return m_Inputsignals;
}

void BusAssignment::SetInputsignals(const std::string& value)
{
  m_Inputsignals = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
