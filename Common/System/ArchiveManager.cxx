#include "ArchiveManager.h"
#include "Archive.h"
#include "ErrorCode.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ArchiveManager::ArchiveManager(std::vector<std::shared_ptr<Archive>> archives)
{
  ArchiveBuffer = std::move(archives);
}

IdType ArchiveManager::GetArchiveId(const std::string& archivename) const
{
  for (size_t i = 0; i < ArchiveBuffer.size(); ++i)
  {
    if (ArchiveBuffer[i] &&
      ArchiveBuffer[i]->GetArchiveDirectory().GetDirectoryName() == archivename)
    {
      return SLXIO_TYPE_CAST(IdType, i);
    }
  }
  return -1;
}

IdType ArchiveManager::GetArchiveMaxId() const
{
  return SLXIO_TYPE_CAST(IdType, ArchiveBuffer.size() - 1);
}

IdType ArchiveManager::GetFirstFreeArchiveId()
{
  return IdType();
}

std::shared_ptr<Archive> ArchiveManager::GetArchive(IdType id) const
{
  if (id < 0 || id >= static_cast<IdType>(ArchiveBuffer.size()))
  {
    return nullptr;
  }
  return ArchiveBuffer[id];
}

bool ArchiveManager::IsArchiveOpened(const std::string& archivename) const
{
  for (const auto& archive : ArchiveBuffer)
  {
    if (archive &&
      archive->GetArchiveDirectory().GetDirectoryName() == archivename)
    {
      return true;
    }
  }
  return false;
}

ReturnType ArchiveManager::Add(std::shared_ptr<Archive> archive)
{
  ArchiveBuffer.push_back(std::move(archive));
  return E_OK;
}

ReturnType ArchiveManager::Remove(const IdType id)
{
  if (id < 0 || id >= static_cast<IdType>(ArchiveBuffer.size()))
  {
    return E_ARCHIVE_INVALID_ID;
  }
  ArchiveBuffer[id] = nullptr;

  while (!ArchiveBuffer.empty() && ArchiveBuffer.back() == nullptr)
  {
    ArchiveBuffer.pop_back();
  }
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
