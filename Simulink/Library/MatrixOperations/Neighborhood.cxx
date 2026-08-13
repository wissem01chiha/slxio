#include "Neighborhood.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Neighborhood::Neighborhood() {}

Neighborhood::~Neighborhood() {}

const std::string& Neighborhood::GetInportneighborhood() const
{
    return m_Inportneighborhood;
}

void Neighborhood::SetInportneighborhood(const std::string& value)
{
    m_Inportneighborhood = value;
}

const std::string& Neighborhood::GetPaddingoption() const
{
    return m_Paddingoption;
}

void Neighborhood::SetPaddingoption(const std::string& value)
{
    m_Paddingoption = value;
}

const std::string& Neighborhood::GetPaddingconstant() const
{
    return m_Paddingconstant;
}

void Neighborhood::SetPaddingconstant(const std::string& value)
{
    m_Paddingconstant = value;
}

const std::string& Neighborhood::GetNeighborhoodsize() const
{
    return m_Neighborhoodsize;
}

void Neighborhood::SetNeighborhoodsize(const std::string& value)
{
    m_Neighborhoodsize = value;
}

const std::string& Neighborhood::GetStride() const
{
    return m_Stride;
}

void Neighborhood::SetStride(const std::string& value)
{
    m_Stride = value;
}

const std::string& Neighborhood::GetProcessingoffset() const
{
    return m_Processingoffset;
}

void Neighborhood::SetProcessingoffset(const std::string& value)
{
    m_Processingoffset = value;
}

const std::string& Neighborhood::GetProcessingwidth() const
{
    return m_Processingwidth;
}

void Neighborhood::SetProcessingwidth(const std::string& value)
{
    m_Processingwidth = value;
}

const std::string& Neighborhood::GetOutputsize() const
{
    return m_Outputsize;
}

void Neighborhood::SetOutputsize(const std::string& value)
{
    m_Outputsize = value;
}

const std::string& Neighborhood::GetUsagetype() const
{
    return m_Usagetype;
}

void Neighborhood::SetUsagetype(const std::string& value)
{
    m_Usagetype = value;
}

const std::string& Neighborhood::GetFilterspatialdimensions() const
{
    return m_Filterspatialdimensions;
}

void Neighborhood::SetFilterspatialdimensions(const std::string& value)
{
    m_Filterspatialdimensions = value;
}

const std::string& Neighborhood::GetNumberofchannels() const
{
    return m_Numberofchannels;
}

void Neighborhood::SetNumberofchannels(const std::string& value)
{
    m_Numberofchannels = value;
}

const std::string& Neighborhood::GetNumberoffilters() const
{
    return m_Numberoffilters;
}

void Neighborhood::SetNumberoffilters(const std::string& value)
{
    m_Numberoffilters = value;
}

const std::string& Neighborhood::GetActivatefastersimulation() const
{
    return m_Activatefastersimulation;
}

void Neighborhood::SetActivatefastersimulation(const std::string& value)
{
    m_Activatefastersimulation = value;
}

const std::string& Neighborhood::GetMathoperation() const
{
    return m_Mathoperation;
}

void Neighborhood::SetMathoperation(const std::string& value)
{
    m_Mathoperation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
