#include "HErrorHelper.h"
#include "CorePCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

UInt32 GetProjectIdentifier(HError result) { return (result >> 30U) & 0x3U; }

UInt32 GetGroupIdentifier(HError result) { return (result >> 25U) & 0x1FU; }

UInt32 GetComponentIdentifier(HError result) { return (result >> 17U) & 0xFFU; }

UInt32 GetLevelIdentifier(HError result) { return (result >> 15U) & 0x3U; }

UInt32 GetErrorIdentifier(HError result) { return (result >> 5U) & 0x3FFU; }

bool IsSuccess(HError result)
{
    return GetLevelIdentifier(result) == SLXIO_SUCCESS;
}

bool IsWarning(HError result)
{
    return GetLevelIdentifier(result) == SLXIO_WARN;
}

bool IsFatal(HError result)
{
    return GetLevelIdentifier(result) == SLXIO_FATAL;
}

bool IsInfo(HError result) { return GetLevelIdentifier(result) == SLXIO_INFO; }

bool IsSameLevel(HError result1, HError result2)
{
    return GetLevelIdentifier(result1) == GetLevelIdentifier(result2);
}

bool IsSameProject(HError result1, HError result2)
{
    return GetProjectIdentifier(result1) == GetProjectIdentifier(result2);
}

bool IsSameGroup(HError result1, HError result2)
{
    return GetGroupIdentifier(result1) == GetGroupIdentifier(result2);
}

bool IsSameComponent(HError result1, HError result2)
{
    return GetComponentIdentifier(result1) == GetComponentIdentifier(result2);
}

const char* GetSeverityString(HError result)
{
    // get the severity level
    UInt32 level = GetLevelIdentifier(result);
    switch (level)
    {
    case SLXIO_SUCCESS:
        return "Success";
    case SLXIO_FATAL:
        return "Fatal";
    case SLXIO_WARN:
        return "Warning";
    case SLXIO_INFO:
        return "Info";
    }
    return "";
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
