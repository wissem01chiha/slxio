#include "ChirpSignal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ChirpSignal::ChirpSignal() {}

ChirpSignal::~ChirpSignal() {}

const std::string& ChirpSignal::GetF1() const
{
  return m_F1;
}

void ChirpSignal::SetF1(const std::string& value)
{
  m_F1 = value;
}

const std::string& ChirpSignal::GetT() const
{
  return m_T;
}

void ChirpSignal::SetT(const std::string& value)
{
  m_T = value;
}

const std::string& ChirpSignal::GetF2() const
{
  return m_F2;
}

void ChirpSignal::SetF2(const std::string& value)
{
  m_F2 = value;
}

const std::string& ChirpSignal::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void ChirpSignal::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
