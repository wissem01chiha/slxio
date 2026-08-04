#include "ResultHandler.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

    UInt32 GetProjectIdentifier(SResult result)
    {
        return (result >> 30U) & 0x3U;
    }

    UInt32 GetGroupIdentifier(SResult result)
    {
        return (result >> 25U) & 0x1FU;
    }

    UInt32 GetComponentIdentifier(SResult result)
    {
        return (result >> 17U) & 0xFFU;
    }

    UInt32 GetLevelIdentifier(SResult result)
    {
        return (result >> 15U) & 0x3U;
    }

    UInt32 GetErrorIdentifier(SResult result)
    {
        return (result >> 5U) & 0x3FFU;
    }

    bool IsSuccess(SResult result)
    {
        return GetLevelIdentifier(result) == SLXIO_SUCCESS;
    }

    bool IsWarning(SResult result)
    {
        return GetLevelIdentifier(result) == SLXIO_WARN;
    }

    bool IsFatal(SResult result)
    {
        return GetLevelIdentifier(result) == SLXIO_FATAL;
    }

    bool IsSameLevel(SResult result1, SResult result2)
    {
        return GetLevelIdentifier(result1) == GetLevelIdentifier(result2);
    }

    bool IsSameProject(SResult result1, SResult result2)
    {
        return GetProjectIdentifier(result1) == GetProjectIdentifier(result2);
    }

    bool IsSameGroup(SResult result1, SResult result2)
    {
        return GetGroupIdentifier(result1) == GetGroupIdentifier(result2);
    }

    bool IsSameComponent(SResult result1, SResult result2)
    {
        return GetComponentIdentifier(result1) == GetComponentIdentifier(result2);
    }

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
