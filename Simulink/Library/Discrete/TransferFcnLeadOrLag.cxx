#include "TransferFcnLeadOrLag.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcnLeadOrLag::TransferFcnLeadOrLag() {}

TransferFcnLeadOrLag::~TransferFcnLeadOrLag() {}

const std::string& TransferFcnLeadOrLag::GetPolez() const
{
    return m_Polez;
}

void TransferFcnLeadOrLag::SetPolez(const std::string& value)
{
    m_Polez = value;
}

const std::string& TransferFcnLeadOrLag::GetZeroz() const
{
    return m_Zeroz;
}

void TransferFcnLeadOrLag::SetZeroz(const std::string& value)
{
    m_Zeroz = value;
}

const std::string& TransferFcnLeadOrLag::GetIcprevoutput() const
{
    return m_Icprevoutput;
}

void TransferFcnLeadOrLag::SetIcprevoutput(const std::string& value)
{
    m_Icprevoutput = value;
}

const std::string& TransferFcnLeadOrLag::GetIcprevinput() const
{
    return m_Icprevinput;
}

void TransferFcnLeadOrLag::SetIcprevinput(const std::string& value)
{
    m_Icprevinput = value;
}

const std::string& TransferFcnLeadOrLag::GetRndmeth() const
{
    return m_Rndmeth;
}

void TransferFcnLeadOrLag::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& TransferFcnLeadOrLag::GetDosatur() const
{
    return m_Dosatur;
}

void TransferFcnLeadOrLag::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
