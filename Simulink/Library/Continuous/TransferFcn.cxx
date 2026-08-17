#include "TransferFcn.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TransferFcn::TransferFcn() {}

TransferFcn::~TransferFcn() {}

const std::string& TransferFcn::GetNumerator() const { return m_Numerator; }

void TransferFcn::SetNumerator(const std::string& value)
{
    m_Numerator = value;
}

const std::string& TransferFcn::GetDenominator() const { return m_Denominator; }

void TransferFcn::SetDenominator(const std::string& value)
{
    m_Denominator = value;
}

const std::string& TransferFcn::GetParametertunability() const
{
    return m_Parametertunability;
}

void TransferFcn::SetParametertunability(const std::string& value)
{
    m_Parametertunability = value;
}

const std::string& TransferFcn::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void TransferFcn::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& TransferFcn::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void TransferFcn::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
