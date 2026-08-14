#include "DataStoreRead.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataStoreRead::DataStoreRead() {}

DataStoreRead::~DataStoreRead() {}

const std::string& DataStoreRead::GetDatastorename() const
{
  return m_Datastorename;
}

void DataStoreRead::SetDatastorename(const std::string& value)
{
  m_Datastorename = value;
}

const std::string& DataStoreRead::GetSampletime() const
{
  return m_Sampletime;
}

void DataStoreRead::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& DataStoreRead::GetDatastoreelements() const
{
  return m_Datastoreelements;
}

void DataStoreRead::SetDatastoreelements(const std::string& value)
{
  m_Datastoreelements = value;
}

const std::string& DataStoreRead::GetEnableindexing() const
{
  return m_Enableindexing;
}

void DataStoreRead::SetEnableindexing(const std::string& value)
{
  m_Enableindexing = value;
}

const std::string& DataStoreRead::GetNumberofdimensions() const
{
  return m_Numberofdimensions;
}

void DataStoreRead::SetNumberofdimensions(const std::string& value)
{
  m_Numberofdimensions = value;
}

const std::string& DataStoreRead::GetIndexmode() const
{
  return m_Indexmode;
}

void DataStoreRead::SetIndexmode(const std::string& value)
{
  m_Indexmode = value;
}

const std::string& DataStoreRead::GetIndexoptionarray() const
{
  return m_Indexoptionarray;
}

void DataStoreRead::SetIndexoptionarray(const std::string& value)
{
  m_Indexoptionarray = value;
}

const std::string& DataStoreRead::GetIndexparamarray() const
{
  return m_Indexparamarray;
}

void DataStoreRead::SetIndexparamarray(const std::string& value)
{
  m_Indexparamarray = value;
}

const std::string& DataStoreRead::GetOutputsizearray() const
{
  return m_Outputsizearray;
}

void DataStoreRead::SetOutputsizearray(const std::string& value)
{
  m_Outputsizearray = value;
}

const std::string& DataStoreRead::GetIndexoptions() const
{
  return m_Indexoptions;
}

void DataStoreRead::SetIndexoptions(const std::string& value)
{
  m_Indexoptions = value;
}

const std::string& DataStoreRead::GetIndices() const
{
  return m_Indices;
}

void DataStoreRead::SetIndices(const std::string& value)
{
  m_Indices = value;
}

const std::string& DataStoreRead::GetOutputsizes() const
{
  return m_Outputsizes;
}

void DataStoreRead::SetOutputsizes(const std::string& value)
{
  m_Outputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
