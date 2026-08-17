#include "FixedPointStateSpace.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FixedPointStateSpace::FixedPointStateSpace() {}

FixedPointStateSpace::~FixedPointStateSpace() {}

const std::string& FixedPointStateSpace::GetA() const { return m_A; }

void FixedPointStateSpace::SetA(const std::string& value) { m_A = value; }

const std::string& FixedPointStateSpace::GetB() const { return m_B; }

void FixedPointStateSpace::SetB(const std::string& value) { m_B = value; }

const std::string& FixedPointStateSpace::GetC() const { return m_C; }

void FixedPointStateSpace::SetC(const std::string& value) { m_C = value; }

const std::string& FixedPointStateSpace::GetD() const { return m_D; }

void FixedPointStateSpace::SetD(const std::string& value) { m_D = value; }

const std::string& FixedPointStateSpace::GetInitialcondition() const
{
    return m_Initialcondition;
}

void FixedPointStateSpace::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& FixedPointStateSpace::GetInternaldatatype() const
{
    return m_Internaldatatype;
}

void FixedPointStateSpace::SetInternaldatatype(const std::string& value)
{
    m_Internaldatatype = value;
}

const std::string& FixedPointStateSpace::GetStateeqscaling() const
{
    return m_Stateeqscaling;
}

void FixedPointStateSpace::SetStateeqscaling(const std::string& value)
{
    m_Stateeqscaling = value;
}

const std::string& FixedPointStateSpace::GetOutputeqscaling() const
{
    return m_Outputeqscaling;
}

void FixedPointStateSpace::SetOutputeqscaling(const std::string& value)
{
    m_Outputeqscaling = value;
}

const std::string& FixedPointStateSpace::GetLockscale() const
{
    return m_Lockscale;
}

void FixedPointStateSpace::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixedPointStateSpace::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixedPointStateSpace::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixedPointStateSpace::GetDosatur() const
{
    return m_Dosatur;
}

void FixedPointStateSpace::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
