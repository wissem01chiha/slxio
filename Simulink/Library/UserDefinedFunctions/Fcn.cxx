#include "Fcn.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Fcn::Fcn() {}

Fcn::~Fcn() {}

const std::string& Fcn::GetExpr() const
{
  return m_Expr;
}

void Fcn::SetExpr(const std::string& value)
{
  m_Expr = value;
}

const std::string& Fcn::GetSampletime() const
{
  return m_Sampletime;
}

void Fcn::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
