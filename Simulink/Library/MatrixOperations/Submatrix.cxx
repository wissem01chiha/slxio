#include "Submatrix.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Submatrix::Submatrix() {}

Submatrix::~Submatrix() {}

const std::string& Submatrix::GetRowspan() const
{
  return m_Rowspan;
}

void Submatrix::SetRowspan(const std::string& value)
{
  m_Rowspan = value;
}

const std::string& Submatrix::GetRowstartmode() const
{
  return m_Rowstartmode;
}

void Submatrix::SetRowstartmode(const std::string& value)
{
  m_Rowstartmode = value;
}

const std::string& Submatrix::GetRowstartindex() const
{
  return m_Rowstartindex;
}

void Submatrix::SetRowstartindex(const std::string& value)
{
  m_Rowstartindex = value;
}

const std::string& Submatrix::GetRowendmode() const
{
  return m_Rowendmode;
}

void Submatrix::SetRowendmode(const std::string& value)
{
  m_Rowendmode = value;
}

const std::string& Submatrix::GetRowendindex() const
{
  return m_Rowendindex;
}

void Submatrix::SetRowendindex(const std::string& value)
{
  m_Rowendindex = value;
}

const std::string& Submatrix::GetColspan() const
{
  return m_Colspan;
}

void Submatrix::SetColspan(const std::string& value)
{
  m_Colspan = value;
}

const std::string& Submatrix::GetColstartmode() const
{
  return m_Colstartmode;
}

void Submatrix::SetColstartmode(const std::string& value)
{
  m_Colstartmode = value;
}

const std::string& Submatrix::GetColstartindex() const
{
  return m_Colstartindex;
}

void Submatrix::SetColstartindex(const std::string& value)
{
  m_Colstartindex = value;
}

const std::string& Submatrix::GetColendmode() const
{
  return m_Colendmode;
}

void Submatrix::SetColendmode(const std::string& value)
{
  m_Colendmode = value;
}

const std::string& Submatrix::GetColendindex() const
{
  return m_Colendindex;
}

void Submatrix::SetColendindex(const std::string& value)
{
  m_Colendindex = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
