#include "TransferFcnDirectFormIi.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcnDirectFormIi::TransferFcnDirectFormIi() {}

TransferFcnDirectFormIi::~TransferFcnDirectFormIi() {}

const std::string& TransferFcnDirectFormIi::GetNumcoefvec() const
{
  return m_Numcoefvec;
}

void TransferFcnDirectFormIi::SetNumcoefvec(const std::string& value)
{
  m_Numcoefvec = value;
}

const std::string& TransferFcnDirectFormIi::GetDencoefvec() const
{
  return m_Dencoefvec;
}

void TransferFcnDirectFormIi::SetDencoefvec(const std::string& value)
{
  m_Dencoefvec = value;
}

const std::string& TransferFcnDirectFormIi::GetVinit() const
{
  return m_Vinit;
}

void TransferFcnDirectFormIi::SetVinit(const std::string& value)
{
  m_Vinit = value;
}

const std::string& TransferFcnDirectFormIi::GetRndmeth() const
{
  return m_Rndmeth;
}

void TransferFcnDirectFormIi::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& TransferFcnDirectFormIi::GetDosatur() const
{
  return m_Dosatur;
}

void TransferFcnDirectFormIi::SetDosatur(const std::string& value)
{
  m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
