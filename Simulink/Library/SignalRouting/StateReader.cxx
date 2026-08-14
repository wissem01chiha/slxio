#include "StateReader.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateReader::StateReader() {}

StateReader::~StateReader() {}

const std::string& StateReader::GetStateownerblock() const
{
  return m_Stateownerblock;
}

void StateReader::SetStateownerblock(const std::string& value)
{
  m_Stateownerblock = value;
}

const std::string& StateReader::GetStatename() const
{
  return m_Statename;
}

void StateReader::SetStatename(const std::string& value)
{
  m_Statename = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
