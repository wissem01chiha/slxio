#include "BusSelector.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BusSelector::BusSelector() {}

BusSelector::~BusSelector() {}

const std::string& BusSelector::GetOutputsignals() const
{
    return m_Outputsignals;
}

void BusSelector::SetOutputsignals(const std::string& value)
{
    m_Outputsignals = value;
}

const std::string& BusSelector::GetOutputasbus() const { return m_Outputasbus; }

void BusSelector::SetOutputasbus(const std::string& value)
{
    m_Outputasbus = value;
}

const std::string& BusSelector::GetInputsignals() const
{
    return m_Inputsignals;
}

void BusSelector::SetInputsignals(const std::string& value)
{
    m_Inputsignals = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
