#include "VectorConcatenate.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

VectorConcatenate::VectorConcatenate() {}

VectorConcatenate::~VectorConcatenate() {}

const std::string& VectorConcatenate::GetNuminputs() const
{
  return m_Numinputs;
}

void VectorConcatenate::SetNuminputs(const std::string& value)
{
  m_Numinputs = value;
}

const std::string& VectorConcatenate::GetMode() const
{
  return m_Mode;
}

void VectorConcatenate::SetMode(const std::string& value)
{
  m_Mode = value;
}

const std::string& VectorConcatenate::GetConcatenatedimension() const
{
  return m_Concatenatedimension;
}

void VectorConcatenate::SetConcatenatedimension(const std::string& value)
{
  m_Concatenatedimension = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
