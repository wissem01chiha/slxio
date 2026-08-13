#include "DescriptorStateSpace.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DescriptorStateSpace::DescriptorStateSpace() {}

DescriptorStateSpace::~DescriptorStateSpace() {}

const std::string& DescriptorStateSpace::GetE() const
{
    return m_E;
}

void DescriptorStateSpace::SetE(const std::string& value)
{
    m_E = value;
}

const std::string& DescriptorStateSpace::GetA() const
{
    return m_A;
}

void DescriptorStateSpace::SetA(const std::string& value)
{
    m_A = value;
}

const std::string& DescriptorStateSpace::GetB() const
{
    return m_B;
}

void DescriptorStateSpace::SetB(const std::string& value)
{
    m_B = value;
}

const std::string& DescriptorStateSpace::GetC() const
{
    return m_C;
}

void DescriptorStateSpace::SetC(const std::string& value)
{
    m_C = value;
}

const std::string& DescriptorStateSpace::GetD() const
{
    return m_D;
}

void DescriptorStateSpace::SetD(const std::string& value)
{
    m_D = value;
}

const std::string& DescriptorStateSpace::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DescriptorStateSpace::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DescriptorStateSpace::GetDirectfeedthrough() const
{
    return m_Directfeedthrough;
}

void DescriptorStateSpace::SetDirectfeedthrough(const std::string& value)
{
    m_Directfeedthrough = value;
}

const std::string& DescriptorStateSpace::GetLinearizetosparse() const
{
    return m_Linearizetosparse;
}

void DescriptorStateSpace::SetLinearizetosparse(const std::string& value)
{
    m_Linearizetosparse = value;
}

const std::string& DescriptorStateSpace::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void DescriptorStateSpace::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& DescriptorStateSpace::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void DescriptorStateSpace::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
