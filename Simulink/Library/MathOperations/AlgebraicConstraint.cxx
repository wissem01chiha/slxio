#include "AlgebraicConstraint.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

AlgebraicConstraint::AlgebraicConstraint() {}

AlgebraicConstraint::~AlgebraicConstraint() {}

const std::string& AlgebraicConstraint::GetConstraint() const
{
    return m_Constraint;
}

void AlgebraicConstraint::SetConstraint(const std::string& value)
{
    m_Constraint = value;
}

const std::string& AlgebraicConstraint::GetSolver() const { return m_Solver; }

void AlgebraicConstraint::SetSolver(const std::string& value)
{
    m_Solver = value;
}

const std::string& AlgebraicConstraint::GetTolerance() const
{
    return m_Tolerance;
}

void AlgebraicConstraint::SetTolerance(const std::string& value)
{
    m_Tolerance = value;
}

const std::string& AlgebraicConstraint::GetInitialguess() const
{
    return m_Initialguess;
}

void AlgebraicConstraint::SetInitialguess(const std::string& value)
{
    m_Initialguess = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
