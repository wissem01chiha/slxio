#include "ArchiveManager.h"
#include "Archive.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ArchiveManager::ArchiveManager(std::vector<std::shared_ptr<Archive>> archives)
{
}

IdType ArchiveManager::GetArchiveId(const std::string& archivename) const
{
  return IdType();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END