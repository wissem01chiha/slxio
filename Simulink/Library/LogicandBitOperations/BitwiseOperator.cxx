#include "BitwiseOperator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseOperator::BitwiseOperator() {}

BitwiseOperator::~BitwiseOperator() {}

const std::string& BitwiseOperator::GetLogicop() const
{
    return m_Logicop;
}

void BitwiseOperator::SetLogicop(const std::string& value)
{
    m_Logicop = value;
}

const std::string& BitwiseOperator::GetUsebitmask() const
{
    return m_Usebitmask;
}

void BitwiseOperator::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& BitwiseOperator::GetNuminputports() const
{
    return m_Numinputports;
}

void BitwiseOperator::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& BitwiseOperator::GetBitmask() const
{
    return m_Bitmask;
}

void BitwiseOperator::SetBitmask(const std::string& value)
{
    m_Bitmask = value;
}

const std::string& BitwiseOperator::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void BitwiseOperator::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
