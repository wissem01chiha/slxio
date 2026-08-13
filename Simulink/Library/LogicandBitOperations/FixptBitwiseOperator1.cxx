#include "FixptBitwiseOperator1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptBitwiseOperator1::FixptBitwiseOperator1() {}

FixptBitwiseOperator1::~FixptBitwiseOperator1() {}

const std::string& FixptBitwiseOperator1::GetLogicop() const
{
    return m_Logicop;
}

void FixptBitwiseOperator1::SetLogicop(const std::string& value)
{
    m_Logicop = value;
}

const std::string& FixptBitwiseOperator1::GetUsebitmask() const
{
    return m_Usebitmask;
}

void FixptBitwiseOperator1::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& FixptBitwiseOperator1::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptBitwiseOperator1::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& FixptBitwiseOperator1::GetBitmask() const
{
    return m_Bitmask;
}

void FixptBitwiseOperator1::SetBitmask(const std::string& value)
{
    m_Bitmask = value;
}

const std::string& FixptBitwiseOperator1::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void FixptBitwiseOperator1::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
