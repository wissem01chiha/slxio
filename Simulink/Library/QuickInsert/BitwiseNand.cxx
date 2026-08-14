#include "BitwiseNand.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseNand::BitwiseNand() {}

BitwiseNand::~BitwiseNand() {}

const std::string& BitwiseNand::GetLogicop() const
{
  return m_Logicop;
}

void BitwiseNand::SetLogicop(const std::string& value)
{
  m_Logicop = value;
}

const std::string& BitwiseNand::GetUsebitmask() const
{
  return m_Usebitmask;
}

void BitwiseNand::SetUsebitmask(const std::string& value)
{
  m_Usebitmask = value;
}

const std::string& BitwiseNand::GetNuminputports() const
{
  return m_Numinputports;
}

void BitwiseNand::SetNuminputports(const std::string& value)
{
  m_Numinputports = value;
}

const std::string& BitwiseNand::GetBitmask() const
{
  return m_Bitmask;
}

void BitwiseNand::SetBitmask(const std::string& value)
{
  m_Bitmask = value;
}

const std::string& BitwiseNand::GetBitmaskrealworld() const
{
  return m_Bitmaskrealworld;
}

void BitwiseNand::SetBitmaskrealworld(const std::string& value)
{
  m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
