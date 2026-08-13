#include "LowerTest.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

LowerTest::LowerTest() {}

LowerTest::~LowerTest() {}

const std::string& LowerTest::GetOperator() const
{
    return m_Operator;
}

void LowerTest::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& LowerTest::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void LowerTest::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& LowerTest::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void LowerTest::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& LowerTest::GetZerocross() const
{
    return m_Zerocross;
}

void LowerTest::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& LowerTest::GetSampletime() const
{
    return m_Sampletime;
}

void LowerTest::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& LowerTest::GetRndmeth() const
{
    return m_Rndmeth;
}

void LowerTest::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
