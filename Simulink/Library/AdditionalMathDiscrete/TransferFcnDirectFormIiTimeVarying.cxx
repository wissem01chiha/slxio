#include "TransferFcnDirectFormIiTimeVarying.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcnDirectFormIiTimeVarying::TransferFcnDirectFormIiTimeVarying() {}

TransferFcnDirectFormIiTimeVarying::~TransferFcnDirectFormIiTimeVarying() {}

const std::string& TransferFcnDirectFormIiTimeVarying::GetVinit() const
{
    return m_Vinit;
}

void TransferFcnDirectFormIiTimeVarying::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

const std::string& TransferFcnDirectFormIiTimeVarying::GetRndmeth() const
{
    return m_Rndmeth;
}

void TransferFcnDirectFormIiTimeVarying::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& TransferFcnDirectFormIiTimeVarying::GetDosatur() const
{
    return m_Dosatur;
}

void TransferFcnDirectFormIiTimeVarying::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
