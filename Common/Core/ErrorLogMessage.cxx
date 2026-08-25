#include "ErrorLogMessage.h"
#include "HErrorHelper.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ErrorLogMessage::ErrorLogMessage(HError error) { m_data.push_back(error); }

std::string ErrorLogMessage::ToString() const
{
    std::ostringstream oss;

    for (const auto& error : m_data)
    {
        oss << "\n"
            << "ErrorCode="
            << "0x" << std::hex << error << " [Source=slxio"
            << " Severity=" << GetSeverityString(error)
            << " Project=" << GetProjectIdentifier(error)
            << " Group=" << GetGroupIdentifier(error)
            << " Component=" << GetComponentIdentifier(error)
            << " Code=" << GetErrorIdentifier(error) << "]";
    }

    return oss.str();
}

DataType ErrorLogMessage::GetDataType() const
{
    return DataType::SLXIO_TYPE_ERROR_LOG_MESSAGE;
}

bool ErrorLogMessage::Empty() const { return m_data.empty(); }

std::unique_ptr<ILogMessage> operator+(const ErrorLogMessage& lhs, // NOSONAR
                                       const ILogMessage& rhs)
{
    if (rhs.GetDataType() != DataType::SLXIO_TYPE_ERROR_LOG_MESSAGE)
    {
        return std::make_unique<ErrorLogMessage>(lhs);
    }

    const auto& rhsErr = dynamic_cast<const ErrorLogMessage&>(rhs);

    auto result = std::make_unique<ErrorLogMessage>(lhs);
    result->m_data.insert(result->m_data.end(), rhsErr.m_data.begin(),
                          rhsErr.m_data.end());
    return result;
}

std::unique_ptr<ILogMessage> ErrorLogMessage::Clone() const
{
    return std::make_unique<ErrorLogMessage>(*this);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio