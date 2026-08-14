#include "TransferFcnRealZero.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcnRealZero::TransferFcnRealZero() {}

TransferFcnRealZero::~TransferFcnRealZero() {}

const std::string& TransferFcnRealZero::GetZeroz() const { return m_Zeroz; }

void TransferFcnRealZero::SetZeroz(const std::string& value)
{
    m_Zeroz = value;
}

const std::string& TransferFcnRealZero::GetIcprevinput() const
{
    return m_Icprevinput;
}

void TransferFcnRealZero::SetIcprevinput(const std::string& value)
{
    m_Icprevinput = value;
}

const std::string& TransferFcnRealZero::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void TransferFcnRealZero::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& TransferFcnRealZero::GetRndmeth() const { return m_Rndmeth; }

void TransferFcnRealZero::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& TransferFcnRealZero::GetDosatur() const { return m_Dosatur; }

void TransferFcnRealZero::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
