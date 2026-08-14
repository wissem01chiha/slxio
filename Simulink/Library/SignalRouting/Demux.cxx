#include "Demux.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Demux::Demux() {}

Demux::~Demux() {}

const std::string& Demux::GetOutputs() const
{
  return m_Outputs;
}

void Demux::SetOutputs(const std::string& value)
{
  m_Outputs = value;
}

const std::string& Demux::GetDisplayoption() const
{
  return m_Displayoption;
}

void Demux::SetDisplayoption(const std::string& value)
{
  m_Displayoption = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
