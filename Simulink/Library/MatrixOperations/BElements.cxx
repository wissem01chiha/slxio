#include "BElements.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BElements::BElements() {}

BElements::~BElements() {}

const std::string& BElements::GetNumberofdimensions() const
{
    return m_Numberofdimensions;
}

void BElements::SetNumberofdimensions(const std::string& value)
{
    m_Numberofdimensions = value;
}

const std::string& BElements::GetIndexmode() const
{
    return m_Indexmode;
}

void BElements::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& BElements::GetIndexoptionarray() const
{
    return m_Indexoptionarray;
}

void BElements::SetIndexoptionarray(const std::string& value)
{
    m_Indexoptionarray = value;
}

const std::string& BElements::GetIndexparamarray() const
{
    return m_Indexparamarray;
}

void BElements::SetIndexparamarray(const std::string& value)
{
    m_Indexparamarray = value;
}

const std::string& BElements::GetOutputsizearray() const
{
    return m_Outputsizearray;
}

void BElements::SetOutputsizearray(const std::string& value)
{
    m_Outputsizearray = value;
}

const std::string& BElements::GetInputportwidth() const
{
    return m_Inputportwidth;
}

void BElements::SetInputportwidth(const std::string& value)
{
    m_Inputportwidth = value;
}

const std::string& BElements::GetSampletime() const
{
    return m_Sampletime;
}

void BElements::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& BElements::GetIndexoptions() const
{
    return m_Indexoptions;
}

void BElements::SetIndexoptions(const std::string& value)
{
    m_Indexoptions = value;
}

const std::string& BElements::GetIndices() const
{
    return m_Indices;
}

void BElements::SetIndices(const std::string& value)
{
    m_Indices = value;
}

const std::string& BElements::GetOutputsizes() const
{
    return m_Outputsizes;
}

void BElements::SetOutputsizes(const std::string& value)
{
    m_Outputsizes = value;
}

const std::string& BElements::GetRuntimerangechecks() const
{
    return m_Runtimerangechecks;
}

void BElements::SetRuntimerangechecks(const std::string& value)
{
    m_Runtimerangechecks = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
