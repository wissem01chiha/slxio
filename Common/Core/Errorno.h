#ifndef ERRORNO_H
#define ERRORNO_H

#include <cstdint>
#include <string>
#include <string_view>
#include <system_error>
#include <type_traits>
#include "ABINamespaceMacro.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

enum class Severity : std::uint8_t
{
    Success = 0,
    Info,
    Warning,
    Fatal,
};

[[nodiscard]] constexpr std::string_view ToString(Severity s) noexcept
{
    switch (s)
    {
    case Severity::Success:
        return "Success";
    case Severity::Info:
        return "Info";
    case Severity::Warning:
        return "Warning";
    case Severity::Fatal:
        return "Fatal";
    }
    return "Unknown";
}

/// Immutable result: an error code (module identity via category) plus severity.
/// A default-constructed Error means success.
class Error final
{
public:
    Error() noexcept = default;

    Error(std::error_code ec, Severity s) noexcept : m_code(ec), m_severity(ec ? s : Severity::Success)
    {
    }

    template <class E, std::enable_if_t<std::is_error_code_enum_v<E>, int> = 0>
    Error(E e, Severity s = Severity::Fatal) noexcept : Error(std::error_code(e), s)
    {
    }

    [[nodiscard]] std::error_code Code() const noexcept
    {
        return m_code;
    }
    [[nodiscard]] Severity GetSeverity() const noexcept
    {
        return m_severity;
    }
    [[nodiscard]] bool IsSuccess() const noexcept
    {
        return !m_code;
    }
    [[nodiscard]] bool IsFatal() const noexcept
    {
        return m_severity == Severity::Fatal;
    }
    [[nodiscard]] std::string Message() const;

    [[nodiscard]] bool SameModule(const Error& o) const noexcept
    {
        return m_code.category() == o.m_code.category();
    }

private:
    std::error_code m_code{};
    Severity m_severity{Severity::Success};
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ERRORNO_H