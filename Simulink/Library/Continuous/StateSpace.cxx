#include "StateSpace.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StateSpace::StateSpace() {}

StateSpace::~StateSpace() {}

const std::string& StateSpace::GetA() const { return m_A; }

void StateSpace::SetA(const std::string& value) { m_A = value; }

const std::string& StateSpace::GetB() const { return m_B; }

void StateSpace::SetB(const std::string& value) { m_B = value; }

const std::string& StateSpace::GetC() const { return m_C; }

void StateSpace::SetC(const std::string& value) { m_C = value; }

const std::string& StateSpace::GetD() const { return m_D; }

void StateSpace::SetD(const std::string& value) { m_D = value; }

const std::string& StateSpace::GetInitialcondition() const
{
    return m_Initialcondition;
}

void StateSpace::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& StateSpace::GetParametertunability() const
{
    return m_Parametertunability;
}

void StateSpace::SetParametertunability(const std::string& value)
{
    m_Parametertunability = value;
}

const std::string& StateSpace::GetAllowtunabledmatrix() const
{
    return m_Allowtunabledmatrix;
}

void StateSpace::SetAllowtunabledmatrix(const std::string& value)
{
    m_Allowtunabledmatrix = value;
}

const std::string& StateSpace::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void StateSpace::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& StateSpace::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void StateSpace::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
