#include "ParameterWriter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ParameterWriter::ParameterWriter() {}

ParameterWriter::~ParameterWriter() {}

const std::string& ParameterWriter::GetParameterownerblock() const
{
  return m_Parameterownerblock;
}

void ParameterWriter::SetParameterownerblock(const std::string& value)
{
  m_Parameterownerblock = value;
}

const std::string& ParameterWriter::GetParametername() const
{
  return m_Parametername;
}

void ParameterWriter::SetParametername(const std::string& value)
{
  m_Parametername = value;
}

const std::string& ParameterWriter::GetWorkspacevariablename() const
{
  return m_Workspacevariablename;
}

void ParameterWriter::SetWorkspacevariablename(const std::string& value)
{
  m_Workspacevariablename = value;
}

const std::string& ParameterWriter::GetIsparametervalidationon() const
{
  return m_Isparametervalidationon;
}

void ParameterWriter::SetIsparametervalidationon(const std::string& value)
{
  m_Isparametervalidationon = value;
}

const std::string& ParameterWriter::GetDestination() const
{
  return m_Destination;
}

void ParameterWriter::SetDestination(const std::string& value)
{
  m_Destination = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
