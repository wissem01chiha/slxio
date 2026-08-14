#include "BitwiseNor.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseNor::BitwiseNor() {}

BitwiseNor::~BitwiseNor() {}

const std::string& BitwiseNor::GetLogicop() const { return m_Logicop; }

void BitwiseNor::SetLogicop(const std::string& value) { m_Logicop = value; }

const std::string& BitwiseNor::GetUsebitmask() const { return m_Usebitmask; }

void BitwiseNor::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& BitwiseNor::GetNuminputports() const
{
    return m_Numinputports;
}

void BitwiseNor::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& BitwiseNor::GetBitmask() const { return m_Bitmask; }

void BitwiseNor::SetBitmask(const std::string& value) { m_Bitmask = value; }

const std::string& BitwiseNor::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void BitwiseNor::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
