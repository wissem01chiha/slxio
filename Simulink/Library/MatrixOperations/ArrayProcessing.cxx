#include "ArrayProcessing.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ArrayProcessing::ArrayProcessing() {}

ArrayProcessing::~ArrayProcessing() {}

const std::string& ArrayProcessing::GetInportneighborhood() const
{
    return m_Inportneighborhood;
}

void ArrayProcessing::SetInportneighborhood(const std::string& value)
{
    m_Inportneighborhood = value;
}

const std::string& ArrayProcessing::GetPaddingoption() const
{
    return m_Paddingoption;
}

void ArrayProcessing::SetPaddingoption(const std::string& value)
{
    m_Paddingoption = value;
}

const std::string& ArrayProcessing::GetPaddingconstant() const
{
    return m_Paddingconstant;
}

void ArrayProcessing::SetPaddingconstant(const std::string& value)
{
    m_Paddingconstant = value;
}

const std::string& ArrayProcessing::GetNeighborhoodsize() const
{
    return m_Neighborhoodsize;
}

void ArrayProcessing::SetNeighborhoodsize(const std::string& value)
{
    m_Neighborhoodsize = value;
}

const std::string& ArrayProcessing::GetStride() const
{
    return m_Stride;
}

void ArrayProcessing::SetStride(const std::string& value)
{
    m_Stride = value;
}

const std::string& ArrayProcessing::GetProcessingoffset() const
{
    return m_Processingoffset;
}

void ArrayProcessing::SetProcessingoffset(const std::string& value)
{
    m_Processingoffset = value;
}

const std::string& ArrayProcessing::GetProcessingwidth() const
{
    return m_Processingwidth;
}

void ArrayProcessing::SetProcessingwidth(const std::string& value)
{
    m_Processingwidth = value;
}

const std::string& ArrayProcessing::GetOutputsize() const
{
    return m_Outputsize;
}

void ArrayProcessing::SetOutputsize(const std::string& value)
{
    m_Outputsize = value;
}

const std::string& ArrayProcessing::GetUsagetype() const
{
    return m_Usagetype;
}

void ArrayProcessing::SetUsagetype(const std::string& value)
{
    m_Usagetype = value;
}

const std::string& ArrayProcessing::GetFilterspatialdimensions() const
{
    return m_Filterspatialdimensions;
}

void ArrayProcessing::SetFilterspatialdimensions(const std::string& value)
{
    m_Filterspatialdimensions = value;
}

const std::string& ArrayProcessing::GetNumberofchannels() const
{
    return m_Numberofchannels;
}

void ArrayProcessing::SetNumberofchannels(const std::string& value)
{
    m_Numberofchannels = value;
}

const std::string& ArrayProcessing::GetNumberoffilters() const
{
    return m_Numberoffilters;
}

void ArrayProcessing::SetNumberoffilters(const std::string& value)
{
    m_Numberoffilters = value;
}

const std::string& ArrayProcessing::GetActivatefastersimulation() const
{
    return m_Activatefastersimulation;
}

void ArrayProcessing::SetActivatefastersimulation(const std::string& value)
{
    m_Activatefastersimulation = value;
}

const std::string& ArrayProcessing::GetMathoperation() const
{
    return m_Mathoperation;
}

void ArrayProcessing::SetMathoperation(const std::string& value)
{
    m_Mathoperation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
