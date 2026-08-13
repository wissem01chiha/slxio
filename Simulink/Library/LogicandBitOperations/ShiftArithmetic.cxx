#include "ShiftArithmetic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ShiftArithmetic::ShiftArithmetic() {}

ShiftArithmetic::~ShiftArithmetic() {}

const std::string& ShiftArithmetic::GetBitshiftnumbersource() const
{
    return m_Bitshiftnumbersource;
}

void ShiftArithmetic::SetBitshiftnumbersource(const std::string& value)
{
    m_Bitshiftnumbersource = value;
}

const std::string& ShiftArithmetic::GetBitshiftnumber() const
{
    return m_Bitshiftnumber;
}

void ShiftArithmetic::SetBitshiftnumber(const std::string& value)
{
    m_Bitshiftnumber = value;
}

const std::string& ShiftArithmetic::GetBinptshiftnumber() const
{
    return m_Binptshiftnumber;
}

void ShiftArithmetic::SetBinptshiftnumber(const std::string& value)
{
    m_Binptshiftnumber = value;
}

const std::string& ShiftArithmetic::GetBitshiftdirection() const
{
    return m_Bitshiftdirection;
}

void ShiftArithmetic::SetBitshiftdirection(const std::string& value)
{
    m_Bitshiftdirection = value;
}

const std::string& ShiftArithmetic::GetDiagnosticforoorshift() const
{
    return m_Diagnosticforoorshift;
}

void ShiftArithmetic::SetDiagnosticforoorshift(const std::string& value)
{
    m_Diagnosticforoorshift = value;
}

const std::string& ShiftArithmetic::GetCheckoorbitshift() const
{
    return m_Checkoorbitshift;
}

void ShiftArithmetic::SetCheckoorbitshift(const std::string& value)
{
    m_Checkoorbitshift = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
