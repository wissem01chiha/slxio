#include "FixptBitwiseOperator5.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptBitwiseOperator5::FixptBitwiseOperator5() {}

FixptBitwiseOperator5::~FixptBitwiseOperator5() {}

const std::string& FixptBitwiseOperator5::GetLogicop() const
{
    return m_Logicop;
}

void FixptBitwiseOperator5::SetLogicop(const std::string& value)
{
    m_Logicop = value;
}

const std::string& FixptBitwiseOperator5::GetUsebitmask() const
{
    return m_Usebitmask;
}

void FixptBitwiseOperator5::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& FixptBitwiseOperator5::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptBitwiseOperator5::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& FixptBitwiseOperator5::GetBitmask() const
{
    return m_Bitmask;
}

void FixptBitwiseOperator5::SetBitmask(const std::string& value)
{
    m_Bitmask = value;
}

const std::string& FixptBitwiseOperator5::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void FixptBitwiseOperator5::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
