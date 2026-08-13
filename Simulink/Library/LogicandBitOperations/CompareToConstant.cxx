#include "CompareToConstant.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CompareToConstant::CompareToConstant() {}

CompareToConstant::~CompareToConstant() {}

const std::string& CompareToConstant::GetRelop() const
{
    return m_Relop;
}

void CompareToConstant::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& CompareToConstant::GetConst() const
{
    return m_Const;
}

void CompareToConstant::SetConst(const std::string& value)
{
    m_Const = value;
}

const std::string& CompareToConstant::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void CompareToConstant::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& CompareToConstant::GetZerocross() const
{
    return m_Zerocross;
}

void CompareToConstant::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
