#include "DelayInput1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DelayInput1::DelayInput1() {}

DelayInput1::~DelayInput1() {}

const std::string& DelayInput1::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DelayInput1::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DelayInput1::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DelayInput1::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DelayInput1::GetSampletime() const
{
    return m_Sampletime;
}

void DelayInput1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DelayInput1::GetStatename() const
{
    return m_Statename;
}

void DelayInput1::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DelayInput1::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DelayInput1::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DelayInput1::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DelayInput1::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DelayInput1::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DelayInput1::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DelayInput1::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void DelayInput1::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
