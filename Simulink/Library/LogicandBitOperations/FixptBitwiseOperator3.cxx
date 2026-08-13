#include "FixptBitwiseOperator3.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptBitwiseOperator3::FixptBitwiseOperator3() {}

FixptBitwiseOperator3::~FixptBitwiseOperator3() {}

const std::string& FixptBitwiseOperator3::GetLogicop() const
{
    return m_Logicop;
}

void FixptBitwiseOperator3::SetLogicop(const std::string& value)
{
    m_Logicop = value;
}

const std::string& FixptBitwiseOperator3::GetUsebitmask() const
{
    return m_Usebitmask;
}

void FixptBitwiseOperator3::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& FixptBitwiseOperator3::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptBitwiseOperator3::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& FixptBitwiseOperator3::GetBitmask() const
{
    return m_Bitmask;
}

void FixptBitwiseOperator3::SetBitmask(const std::string& value)
{
    m_Bitmask = value;
}

const std::string& FixptBitwiseOperator3::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void FixptBitwiseOperator3::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
