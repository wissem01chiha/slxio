#include "PixelProcessing.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PixelProcessing::PixelProcessing() {}

PixelProcessing::~PixelProcessing() {}

const std::string& PixelProcessing::GetInportneighborhood() const
{
    return m_Inportneighborhood;
}

void PixelProcessing::SetInportneighborhood(const std::string& value)
{
    m_Inportneighborhood = value;
}

const std::string& PixelProcessing::GetPaddingoption() const
{
    return m_Paddingoption;
}

void PixelProcessing::SetPaddingoption(const std::string& value)
{
    m_Paddingoption = value;
}

const std::string& PixelProcessing::GetPaddingconstant() const
{
    return m_Paddingconstant;
}

void PixelProcessing::SetPaddingconstant(const std::string& value)
{
    m_Paddingconstant = value;
}

const std::string& PixelProcessing::GetNeighborhoodsize() const
{
    return m_Neighborhoodsize;
}

void PixelProcessing::SetNeighborhoodsize(const std::string& value)
{
    m_Neighborhoodsize = value;
}

const std::string& PixelProcessing::GetStride() const
{
    return m_Stride;
}

void PixelProcessing::SetStride(const std::string& value)
{
    m_Stride = value;
}

const std::string& PixelProcessing::GetProcessingoffset() const
{
    return m_Processingoffset;
}

void PixelProcessing::SetProcessingoffset(const std::string& value)
{
    m_Processingoffset = value;
}

const std::string& PixelProcessing::GetProcessingwidth() const
{
    return m_Processingwidth;
}

void PixelProcessing::SetProcessingwidth(const std::string& value)
{
    m_Processingwidth = value;
}

const std::string& PixelProcessing::GetOutputsize() const
{
    return m_Outputsize;
}

void PixelProcessing::SetOutputsize(const std::string& value)
{
    m_Outputsize = value;
}

const std::string& PixelProcessing::GetUsagetype() const
{
    return m_Usagetype;
}

void PixelProcessing::SetUsagetype(const std::string& value)
{
    m_Usagetype = value;
}

const std::string& PixelProcessing::GetFilterspatialdimensions() const
{
    return m_Filterspatialdimensions;
}

void PixelProcessing::SetFilterspatialdimensions(const std::string& value)
{
    m_Filterspatialdimensions = value;
}

const std::string& PixelProcessing::GetNumberofchannels() const
{
    return m_Numberofchannels;
}

void PixelProcessing::SetNumberofchannels(const std::string& value)
{
    m_Numberofchannels = value;
}

const std::string& PixelProcessing::GetNumberoffilters() const
{
    return m_Numberoffilters;
}

void PixelProcessing::SetNumberoffilters(const std::string& value)
{
    m_Numberoffilters = value;
}

const std::string& PixelProcessing::GetActivatefastersimulation() const
{
    return m_Activatefastersimulation;
}

void PixelProcessing::SetActivatefastersimulation(const std::string& value)
{
    m_Activatefastersimulation = value;
}

const std::string& PixelProcessing::GetMathoperation() const
{
    return m_Mathoperation;
}

void PixelProcessing::SetMathoperation(const std::string& value)
{
    m_Mathoperation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
