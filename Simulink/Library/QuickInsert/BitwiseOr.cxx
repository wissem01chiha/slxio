#include "BitwiseOr.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitwiseOr::BitwiseOr() {}

BitwiseOr::~BitwiseOr() {}

const std::string& BitwiseOr::GetLogicop() const
{
    return m_Logicop;
}

void BitwiseOr::SetLogicop(const std::string& value)
{
    m_Logicop = value;
}

const std::string& BitwiseOr::GetUsebitmask() const
{
    return m_Usebitmask;
}

void BitwiseOr::SetUsebitmask(const std::string& value)
{
    m_Usebitmask = value;
}

const std::string& BitwiseOr::GetNuminputports() const
{
    return m_Numinputports;
}

void BitwiseOr::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

const std::string& BitwiseOr::GetBitmask() const
{
    return m_Bitmask;
}

void BitwiseOr::SetBitmask(const std::string& value)
{
    m_Bitmask = value;
}

const std::string& BitwiseOr::GetBitmaskrealworld() const
{
    return m_Bitmaskrealworld;
}

void BitwiseOr::SetBitmaskrealworld(const std::string& value)
{
    m_Bitmaskrealworld = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
