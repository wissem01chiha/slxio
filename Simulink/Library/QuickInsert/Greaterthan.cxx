#include "Greaterthan.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Greaterthan::Greaterthan() {}

Greaterthan::~Greaterthan() {}

const std::string& Greaterthan::GetOperator() const { return m_Operator; }

void Greaterthan::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Greaterthan::GetInputsamedt() const { return m_Inputsamedt; }

void Greaterthan::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Greaterthan::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Greaterthan::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Greaterthan::GetZerocross() const { return m_Zerocross; }

void Greaterthan::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Greaterthan::GetSampletime() const { return m_Sampletime; }

void Greaterthan::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Greaterthan::GetRndmeth() const { return m_Rndmeth; }

void Greaterthan::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
