#include "SimulinkModelType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string ToString(SimulinkModelType type)
{
    switch (type)
    {
    case SimulinkModelType::Library:
        return std::string("Library");
    case SimulinkModelType::Model:
        return std::string("Model");
    default:
        return std::string("");
    }
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
