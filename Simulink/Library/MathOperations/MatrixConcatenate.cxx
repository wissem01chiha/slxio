#include "MatrixConcatenate.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MatrixConcatenate::MatrixConcatenate() {}

MatrixConcatenate::~MatrixConcatenate() {}

const std::string& MatrixConcatenate::GetNuminputs() const
{
    return m_Numinputs;
}

void MatrixConcatenate::SetNuminputs(const std::string& value)
{
    m_Numinputs = value;
}

const std::string& MatrixConcatenate::GetMode() const
{
    return m_Mode;
}

void MatrixConcatenate::SetMode(const std::string& value)
{
    m_Mode = value;
}

const std::string& MatrixConcatenate::GetConcatenatedimension() const
{
    return m_Concatenatedimension;
}

void MatrixConcatenate::SetConcatenatedimension(const std::string& value)
{
    m_Concatenatedimension = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
