#include "CoreErrors.h"

namespace slxio::core
{
namespace
{
class Category final : public std::error_category
{
public:
    const char* name() const noexcept override
    {
        return "slxio.common.core";
    }

    std::string message(int c) const override
    {
        switch (static_cast<Errc>(c))
        {
        case Errc::Ok:
            return "success";
        case Errc::InvalidArgument:
            return "invalid argument";
        case Errc::OutOfMemory:
            return "out of memory";
        case Errc::NotInitialized:
            return "not initialized";
        case Errc::LoggerInitFailed:
            return "logger initialization failed";
        case Errc::IoFailure:
            return "I/O failure";
        }
        return "unknown core error";
    }
};
} // namespace

const std::error_category& ErrorCategory() noexcept
{
    static const Category instance;
    return instance;
}

} // namespace slxio::core