#include "ForEach.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ForEach::ForEach() {}

ForEach::~ForEach() {}

const std::string& ForEach::GetIterationindexdatatype() const
{
    return m_Iterationindexdatatype;
}

void ForEach::SetIterationindexdatatype(const std::string& value)
{
    m_Iterationindexdatatype = value;
}

const std::string& ForEach::GetShowiterationindex() const
{
    return m_Showiterationindex;
}

void ForEach::SetShowiterationindex(const std::string& value)
{
    m_Showiterationindex = value;
}

const std::string& ForEach::GetInputpartition() const
{
    return m_Inputpartition;
}

void ForEach::SetInputpartition(const std::string& value)
{
    m_Inputpartition = value;
}

const std::string& ForEach::GetInputpartitiondimension() const
{
    return m_Inputpartitiondimension;
}

void ForEach::SetInputpartitiondimension(const std::string& value)
{
    m_Inputpartitiondimension = value;
}

const std::string& ForEach::GetInputpartitionwidth() const
{
    return m_Inputpartitionwidth;
}

void ForEach::SetInputpartitionwidth(const std::string& value)
{
    m_Inputpartitionwidth = value;
}

const std::string& ForEach::GetInputpartitionoffset() const
{
    return m_Inputpartitionoffset;
}

void ForEach::SetInputpartitionoffset(const std::string& value)
{
    m_Inputpartitionoffset = value;
}

const std::string& ForEach::GetOutputconcatenationdimension() const
{
    return m_Outputconcatenationdimension;
}

void ForEach::SetOutputconcatenationdimension(const std::string& value)
{
    m_Outputconcatenationdimension = value;
}

const std::string& ForEach::GetSubsysmaskparameterpartition() const
{
    return m_Subsysmaskparameterpartition;
}

void ForEach::SetSubsysmaskparameterpartition(const std::string& value)
{
    m_Subsysmaskparameterpartition = value;
}

const std::string& ForEach::GetSubsysmaskparameterpartitiondimension() const
{
    return m_Subsysmaskparameterpartitiondimension;
}

void ForEach::SetSubsysmaskparameterpartitiondimension(const std::string& value)
{
    m_Subsysmaskparameterpartitiondimension = value;
}

const std::string& ForEach::GetSubsysmaskparameterpartitionwidth() const
{
    return m_Subsysmaskparameterpartitionwidth;
}

void ForEach::SetSubsysmaskparameterpartitionwidth(const std::string& value)
{
    m_Subsysmaskparameterpartitionwidth = value;
}

const std::string& ForEach::GetSpecifiednumiters() const
{
    return m_Specifiednumiters;
}

void ForEach::SetSpecifiednumiters(const std::string& value)
{
    m_Specifiednumiters = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
