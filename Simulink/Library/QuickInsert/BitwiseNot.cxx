#include "BitwiseNot.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseNot::BitwiseNot() {}

BitwiseNot::~BitwiseNot() {}

const std::string& BitwiseNot::GetLogicop() const
{
  return m_Logicop;
}

void BitwiseNot::SetLogicop(const std::string& value)
{
  m_Logicop = value;
}

const std::string& BitwiseNot::GetUsebitmask() const
{
  return m_Usebitmask;
}

void BitwiseNot::SetUsebitmask(const std::string& value)
{
  m_Usebitmask = value;
}

const std::string& BitwiseNot::GetNuminputports() const
{
  return m_Numinputports;
}

void BitwiseNot::SetNuminputports(const std::string& value)
{
  m_Numinputports = value;
}

const std::string& BitwiseNot::GetBitmask() const
{
  return m_Bitmask;
}

void BitwiseNot::SetBitmask(const std::string& value)
{
  m_Bitmask = value;
}

const std::string& BitwiseNot::GetBitmaskrealworld() const
{
  return m_Bitmaskrealworld;
}

void BitwiseNot::SetBitmaskrealworld(const std::string& value)
{
  m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
