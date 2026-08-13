#include "FixptBitwiseOperator4.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptBitwiseOperator4::FixptBitwiseOperator4() {}

FixptBitwiseOperator4::~FixptBitwiseOperator4() {}

const std::string& FixptBitwiseOperator4::GetLogicop() const
{
    return m_Logicop;
}

void FixptBitwiseOperator4::SetLogicop(const std::string& value)
{
    m_Logicop = value;
}

const std::string& FixptBitwiseOperator4::GetUsebitmask() const
{
    return m_Usebitmask;
}

void FixptBitwiseOperator4::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& FixptBitwiseOperator4::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptBitwiseOperator4::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& FixptBitwiseOperator4::GetBitmask() const
{
    return m_Bitmask;
}

void FixptBitwiseOperator4::SetBitmask(const std::string& value)
{
    m_Bitmask = value;
}

const std::string& FixptBitwiseOperator4::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void FixptBitwiseOperator4::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
