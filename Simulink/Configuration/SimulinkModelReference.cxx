#include "SimulinkModelReference.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

bool IsValid(const SimulinkModelReference* reference)
{
    return reference == nullptr;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
