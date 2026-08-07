#include "ErrorLogMessage.h"
#include "ErrorHandler.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ErrorLogMessage::ErrorLogMessage(HError error) { m_data.push_back(error); }

std::string ErrorLogMessage::ToString() const {
  std::ostringstream oss;

  for (const auto &error : m_data) {
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

DataType ErrorLogMessage::GetDataType() const {
  return DataType::SLXIO_TYPE_ERRORLOGMESSAGE;
}

bool ErrorLogMessage::Empty() const { return m_data.empty(); }

std::unique_ptr<ILogMessage>
ErrorLogMessage::operator+(const ILogMessage &rhs) const {
  if (rhs.GetDataType() != DataType::SLXIO_TYPE_ERRORLOGMESSAGE) {
    return std::make_unique<ErrorLogMessage>(*this);
  }
  const ErrorLogMessage &other =
      SLXIO_STATIC_CAST(const ErrorLogMessage &, rhs);

  auto result = std::make_unique<ErrorLogMessage>(*this);
  result->m_data.insert(result->m_data.end(), other.m_data.begin(),
                        other.m_data.end());
  return result;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio