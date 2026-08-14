#include "BitwiseXor.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseXor::BitwiseXor() {}

BitwiseXor::~BitwiseXor() {}

const std::string& BitwiseXor::GetLogicop() const
{
  return m_Logicop;
}

void BitwiseXor::SetLogicop(const std::string& value)
{
  m_Logicop = value;
}

const std::string& BitwiseXor::GetUsebitmask() const
{
  return m_Usebitmask;
}

void BitwiseXor::SetUsebitmask(const std::string& value)
{
  m_Usebitmask = value;
}

const std::string& BitwiseXor::GetNuminputports() const
{
  return m_Numinputports;
}

void BitwiseXor::SetNuminputports(const std::string& value)
{
  m_Numinputports = value;
}

const std::string& BitwiseXor::GetBitmask() const
{
  return m_Bitmask;
}

void BitwiseXor::SetBitmask(const std::string& value)
{
  m_Bitmask = value;
}

const std::string& BitwiseXor::GetBitmaskrealworld() const
{
  return m_Bitmaskrealworld;
}

void BitwiseXor::SetBitmaskrealworld(const std::string& value)
{
  m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
