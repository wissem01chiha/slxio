#include "Errorno.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string Error::Message() const
{
    if (IsSuccess())
        return "success";
    std::string out;
    out += ToString(m_severity);
    out += " [";
    out += m_code.category().name();
    out += ':';
    out += std::to_string(m_code.value());
    out += "] ";
    out += m_code.message();
    return out;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio