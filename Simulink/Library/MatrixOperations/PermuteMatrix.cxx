#include "PermuteMatrix.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PermuteMatrix::PermuteMatrix() {}

PermuteMatrix::~PermuteMatrix() {}

const std::string& PermuteMatrix::GetMode() const
{
    return m_Mode;
}

void PermuteMatrix::SetMode(const std::string& value)
{
    m_Mode = value;
}

const std::string& PermuteMatrix::GetZerooneidxmode() const
{
    return m_Zerooneidxmode;
}

void PermuteMatrix::SetZerooneidxmode(const std::string& value)
{
    m_Zerooneidxmode = value;
}

const std::string& PermuteMatrix::GetErrmode() const
{
    return m_Errmode;
}

void PermuteMatrix::SetErrmode(const std::string& value)
{
    m_Errmode = value;
}

const std::string& PermuteMatrix::GetCheckdims() const
{
    return m_Checkdims;
}

void PermuteMatrix::SetCheckdims(const std::string& value)
{
    m_Checkdims = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
