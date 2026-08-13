#include "RateTransition.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RateTransition::RateTransition() {}

RateTransition::~RateTransition() {}

const std::string& RateTransition::GetIntegrity() const
{
    return m_Integrity;
}

void RateTransition::SetIntegrity(const std::string& value)
{
    m_Integrity = value;
}

const std::string& RateTransition::GetDeterministic() const
{
    return m_Deterministic;
}

void RateTransition::SetDeterministic(const std::string& value)
{
    m_Deterministic = value;
}

const std::string& RateTransition::GetInitialcondition() const
{
    return m_Initialcondition;
}

void RateTransition::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& RateTransition::GetOutportsampletimeopt() const
{
    return m_Outportsampletimeopt;
}

void RateTransition::SetOutportsampletimeopt(const std::string& value)
{
    m_Outportsampletimeopt = value;
}

const std::string& RateTransition::GetOutportsampletimemultiple() const
{
    return m_Outportsampletimemultiple;
}

void RateTransition::SetOutportsampletimemultiple(const std::string& value)
{
    m_Outportsampletimemultiple = value;
}

const std::string& RateTransition::GetOutportsampletime() const
{
    return m_Outportsampletime;
}

void RateTransition::SetOutportsampletime(const std::string& value)
{
    m_Outportsampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
