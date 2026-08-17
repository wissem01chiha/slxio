#include "TransferFcnFirstOrder.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcnFirstOrder::TransferFcnFirstOrder() {}

TransferFcnFirstOrder::~TransferFcnFirstOrder() {}

const std::string& TransferFcnFirstOrder::GetPolez() const { return m_Polez; }

void TransferFcnFirstOrder::SetPolez(const std::string& value)
{
    m_Polez = value;
}

const std::string& TransferFcnFirstOrder::GetIcprevoutput() const
{
    return m_Icprevoutput;
}

void TransferFcnFirstOrder::SetIcprevoutput(const std::string& value)
{
    m_Icprevoutput = value;
}

const std::string& TransferFcnFirstOrder::GetRndmeth() const
{
    return m_Rndmeth;
}

void TransferFcnFirstOrder::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& TransferFcnFirstOrder::GetDosatur() const
{
    return m_Dosatur;
}

void TransferFcnFirstOrder::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
