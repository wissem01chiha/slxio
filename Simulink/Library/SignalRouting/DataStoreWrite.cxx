#include "DataStoreWrite.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataStoreWrite::DataStoreWrite() {}

DataStoreWrite::~DataStoreWrite() {}

const std::string& DataStoreWrite::GetDatastorename() const
{
    return m_Datastorename;
}

void DataStoreWrite::SetDatastorename(const std::string& value)
{
    m_Datastorename = value;
}

const std::string& DataStoreWrite::GetSampletime() const
{
    return m_Sampletime;
}

void DataStoreWrite::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DataStoreWrite::GetDatastoreelements() const
{
    return m_Datastoreelements;
}

void DataStoreWrite::SetDatastoreelements(const std::string& value)
{
    m_Datastoreelements = value;
}

const std::string& DataStoreWrite::GetEnableindexing() const
{
    return m_Enableindexing;
}

void DataStoreWrite::SetEnableindexing(const std::string& value)
{
    m_Enableindexing = value;
}

const std::string& DataStoreWrite::GetNumberofdimensions() const
{
    return m_Numberofdimensions;
}

void DataStoreWrite::SetNumberofdimensions(const std::string& value)
{
    m_Numberofdimensions = value;
}

const std::string& DataStoreWrite::GetIndexmode() const { return m_Indexmode; }

void DataStoreWrite::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& DataStoreWrite::GetIndexoptionarray() const
{
    return m_Indexoptionarray;
}

void DataStoreWrite::SetIndexoptionarray(const std::string& value)
{
    m_Indexoptionarray = value;
}

const std::string& DataStoreWrite::GetIndexparamarray() const
{
    return m_Indexparamarray;
}

void DataStoreWrite::SetIndexparamarray(const std::string& value)
{
    m_Indexparamarray = value;
}

const std::string& DataStoreWrite::GetOutputsizearray() const
{
    return m_Outputsizearray;
}

void DataStoreWrite::SetOutputsizearray(const std::string& value)
{
    m_Outputsizearray = value;
}

const std::string& DataStoreWrite::GetIndexoptions() const
{
    return m_Indexoptions;
}

void DataStoreWrite::SetIndexoptions(const std::string& value)
{
    m_Indexoptions = value;
}

const std::string& DataStoreWrite::GetIndices() const { return m_Indices; }

void DataStoreWrite::SetIndices(const std::string& value) { m_Indices = value; }

const std::string& DataStoreWrite::GetOutputsizes() const
{
    return m_Outputsizes;
}

void DataStoreWrite::SetOutputsizes(const std::string& value)
{
    m_Outputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
