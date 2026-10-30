#ifndef SLXIO_COMMON_CORE_COREERRORS_H_
#define SLXIO_COMMON_CORE_COREERRORS_H_

#include <system_error>

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"

namespace slxio::core
{
SLXIO_ABI_NAMESPACE_BEGIN

enum class Errc : int
{
    Ok = 0,            // never reorder or reuse released values
    InvalidArgument = 1,
    OutOfMemory = 2,
    NotInitialized = 3,
    LoggerInitFailed = 4,
    IoFailure = 5,
};

SLXIO_APIEXPORT const std::error_category& ErrorCategory() noexcept;

[[nodiscard]] inline std::error_code make_error_code(Errc e) noexcept
{
    return {static_cast<int>(e), ErrorCategory()};
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio::core

template <>
struct std::is_error_code_enum<slxio::core::Errc> : std::true_type {};

#endif // SLXIO_COMMON_CORE_COREERRORS_H_