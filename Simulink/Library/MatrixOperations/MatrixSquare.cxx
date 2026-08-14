#include "MatrixSquare.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MatrixSquare::MatrixSquare() {}

MatrixSquare::~MatrixSquare() {}

const std::string& MatrixSquare::GetOutmin() const
{
  return m_Outmin;
}

void MatrixSquare::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& MatrixSquare::GetOutmax() const
{
  return m_Outmax;
}

void MatrixSquare::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& MatrixSquare::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void MatrixSquare::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& MatrixSquare::GetLockscale() const
{
  return m_Lockscale;
}

void MatrixSquare::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& MatrixSquare::GetRndmeth() const
{
  return m_Rndmeth;
}

void MatrixSquare::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& MatrixSquare::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void MatrixSquare::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
