#include "ToFile.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ToFile::ToFile() {}

ToFile::~ToFile() {}

const std::string& ToFile::GetFilename() const
{
  return m_Filename;
}

void ToFile::SetFilename(const std::string& value)
{
  m_Filename = value;
}

const std::string& ToFile::GetMatrixname() const
{
  return m_Matrixname;
}

void ToFile::SetMatrixname(const std::string& value)
{
  m_Matrixname = value;
}

const std::string& ToFile::GetSaveformat() const
{
  return m_Saveformat;
}

void ToFile::SetSaveformat(const std::string& value)
{
  m_Saveformat = value;
}

const std::string& ToFile::GetDecimation() const
{
  return m_Decimation;
}

void ToFile::SetDecimation(const std::string& value)
{
  m_Decimation = value;
}

const std::string& ToFile::GetSampletime() const
{
  return m_Sampletime;
}

void ToFile::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
