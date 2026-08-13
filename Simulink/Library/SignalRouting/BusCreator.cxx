#include "BusCreator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BusCreator::BusCreator() {}

BusCreator::~BusCreator() {}

const std::string& BusCreator::GetInputs() const
{
    return m_Inputs;
}

void BusCreator::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& BusCreator::GetDisplayoption() const
{
    return m_Displayoption;
}

void BusCreator::SetDisplayoption(const std::string& value)
{
    m_Displayoption = value;
}

const std::string& BusCreator::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void BusCreator::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& BusCreator::GetNonvirtualbus() const
{
    return m_Nonvirtualbus;
}

void BusCreator::SetNonvirtualbus(const std::string& value)
{
    m_Nonvirtualbus = value;
}

const std::string& BusCreator::GetInheritfrominputs() const
{
    return m_Inheritfrominputs;
}

void BusCreator::SetInheritfrominputs(const std::string& value)
{
    m_Inheritfrominputs = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
