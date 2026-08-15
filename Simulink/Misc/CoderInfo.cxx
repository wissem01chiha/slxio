#include "CoderInfo.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CoderInfo::CoderInfo() : m_identifier(""), m_storageClass("auto") {}

std::string CoderInfo::GetStorageClass() const { return m_storageClass; }

bool CoderInfo::IsTunable() const { return m_tunable; }

std::string CoderInfo::GetIdentifier() const { return m_identifier; }

UInt32 CoderInfo::GetAlignment() const { return m_alignment; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
