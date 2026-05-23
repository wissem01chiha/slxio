#include "ArchiveManager.h"
#include "Archive.h"
#include "ErrorCode.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ArchiveManager::ArchiveManager(std::vector<std::shared_ptr<Archive>> archives)
{
}

IdType ArchiveManager::GetArchiveId(const std::string& archivename) const
{
  return IdType();
}

IdType ArchiveManager::GetArchiveMaxId() const
{
  return IdType();
}

IdType ArchiveManager::GetFirstFreeArchiveId()
{
  return IdType();
}

std::shared_ptr<Archive> ArchiveManager::GetArchive(IdType id) const
{
  return nullptr;
}

bool ArchiveManager::IsArchiveOpened(const std::string& archivename) const
{
  return false;
}

ReturnType ArchiveManager::Add(std::shared_ptr<Archive> archive)
{
  return E_OK;
}

ReturnType ArchiveManager::Remove(const IdType id)
{
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
