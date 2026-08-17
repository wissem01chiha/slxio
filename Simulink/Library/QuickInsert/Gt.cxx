#include "Gt.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Gt::Gt() {}

Gt::~Gt() {}

const std::string& Gt::GetOperator() const { return m_Operator; }

void Gt::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Gt::GetInputsamedt() const { return m_Inputsamedt; }

void Gt::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Gt::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Gt::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gt::GetZerocross() const { return m_Zerocross; }

void Gt::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Gt::GetSampletime() const { return m_Sampletime; }

void Gt::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Gt::GetRndmeth() const { return m_Rndmeth; }

void Gt::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
