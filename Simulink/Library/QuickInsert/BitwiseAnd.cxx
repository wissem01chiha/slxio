#include "BitwiseAnd.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseAnd::BitwiseAnd() {}

BitwiseAnd::~BitwiseAnd() {}

const std::string& BitwiseAnd::GetLogicop() const { return m_Logicop; }

void BitwiseAnd::SetLogicop(const std::string& value) { m_Logicop = value; }

const std::string& BitwiseAnd::GetUsebitmask() const { return m_Usebitmask; }

void BitwiseAnd::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& BitwiseAnd::GetNuminputports() const
{
    return m_Numinputports;
}

void BitwiseAnd::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& BitwiseAnd::GetBitmask() const { return m_Bitmask; }

void BitwiseAnd::SetBitmask(const std::string& value) { m_Bitmask = value; }

const std::string& BitwiseAnd::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void BitwiseAnd::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
