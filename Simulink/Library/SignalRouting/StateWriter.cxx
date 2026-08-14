#include "StateWriter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateWriter::StateWriter() {}

StateWriter::~StateWriter() {}

const std::string& StateWriter::GetStateownerblock() const
{
  return m_Stateownerblock;
}

void StateWriter::SetStateownerblock(const std::string& value)
{
  m_Stateownerblock = value;
}

const std::string& StateWriter::GetStatename() const
{
  return m_Statename;
}

void StateWriter::SetStatename(const std::string& value)
{
  m_Statename = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
