#include "MatrixDivide.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MatrixDivide::MatrixDivide() {}

MatrixDivide::~MatrixDivide() {}

const std::string& MatrixDivide::GetInputs() const { return m_Inputs; }

void MatrixDivide::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& MatrixDivide::GetMultiplication() const
{
    return m_Multiplication;
}

void MatrixDivide::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& MatrixDivide::GetCollapsemode() const
{
    return m_Collapsemode;
}

void MatrixDivide::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& MatrixDivide::GetCollapsedim() const
{
    return m_Collapsedim;
}

void MatrixDivide::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& MatrixDivide::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void MatrixDivide::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& MatrixDivide::GetOutmin() const { return m_Outmin; }

void MatrixDivide::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& MatrixDivide::GetOutmax() const { return m_Outmax; }

void MatrixDivide::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& MatrixDivide::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MatrixDivide::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MatrixDivide::GetLockscale() const { return m_Lockscale; }

void MatrixDivide::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MatrixDivide::GetRndmeth() const { return m_Rndmeth; }

void MatrixDivide::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& MatrixDivide::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void MatrixDivide::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& MatrixDivide::GetSampletime() const { return m_Sampletime; }

void MatrixDivide::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
