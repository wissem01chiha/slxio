#include "Selector2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Selector2::Selector2() {}

Selector2::~Selector2() {}

const std::string& Selector2::GetNumberofdimensions() const
{
    return m_Numberofdimensions;
}

void Selector2::SetNumberofdimensions(const std::string& value)
{
    m_Numberofdimensions = value;
}

const std::string& Selector2::GetIndexmode() const
{
    return m_Indexmode;
}

void Selector2::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& Selector2::GetIndexoptionarray() const
{
    return m_Indexoptionarray;
}

void Selector2::SetIndexoptionarray(const std::string& value)
{
    m_Indexoptionarray = value;
}

const std::string& Selector2::GetIndexparamarray() const
{
    return m_Indexparamarray;
}

void Selector2::SetIndexparamarray(const std::string& value)
{
    m_Indexparamarray = value;
}

const std::string& Selector2::GetOutputsizearray() const
{
    return m_Outputsizearray;
}

void Selector2::SetOutputsizearray(const std::string& value)
{
    m_Outputsizearray = value;
}

const std::string& Selector2::GetInputportwidth() const
{
    return m_Inputportwidth;
}

void Selector2::SetInputportwidth(const std::string& value)
{
    m_Inputportwidth = value;
}

const std::string& Selector2::GetSampletime() const
{
    return m_Sampletime;
}

void Selector2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Selector2::GetIndexoptions() const
{
    return m_Indexoptions;
}

void Selector2::SetIndexoptions(const std::string& value)
{
    m_Indexoptions = value;
}

const std::string& Selector2::GetIndices() const
{
    return m_Indices;
}

void Selector2::SetIndices(const std::string& value)
{
    m_Indices = value;
}

const std::string& Selector2::GetOutputsizes() const
{
    return m_Outputsizes;
}

void Selector2::SetOutputsizes(const std::string& value)
{
    m_Outputsizes = value;
}

const std::string& Selector2::GetRuntimerangechecks() const
{
    return m_Runtimerangechecks;
}

void Selector2::SetRuntimerangechecks(const std::string& value)
{
    m_Runtimerangechecks = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
