#include "Lte.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Lte::Lte() {}

Lte::~Lte() {}

const std::string& Lte::GetOperator() const { return m_Operator; }

void Lte::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Lte::GetInputsamedt() const { return m_Inputsamedt; }

void Lte::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Lte::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Lte::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Lte::GetZerocross() const { return m_Zerocross; }

void Lte::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Lte::GetSampletime() const { return m_Sampletime; }

void Lte::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Lte::GetRndmeth() const { return m_Rndmeth; }

void Lte::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
