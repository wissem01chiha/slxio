#include "ArchiveManager.h"
#include "Archive.h"
#include "SystemErrorTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ArchiveManager::ArchiveManager(std::vector<std::shared_ptr<Archive>> archives) {
  ArchiveBuffer = std::move(archives);
}

SId ArchiveManager::GetArchiveId(const std::string &archivename) const {
  for (size_t i = 0; i < ArchiveBuffer.size(); ++i) {
    if (ArchiveBuffer[i] &&
        ArchiveBuffer[i]->GetArchiveDirectory().GetDirectoryName() ==
            archivename) {
      return SLXIO_STATIC_CAST(SId, i);
    }
  }
  return -1;
}

SId ArchiveManager::GetArchiveMaxId() const {
  return SLXIO_STATIC_CAST(SId, ArchiveBuffer.size() - 1);
}

SId ArchiveManager::GetFirstFreeArchiveId() { return SId(); }

std::shared_ptr<Archive> ArchiveManager::GetArchive(SId id) const {
  if (id < 0 || id >= static_cast<SId>(ArchiveBuffer.size())) {
    return nullptr;
  }
  return ArchiveBuffer[id];
}

bool ArchiveManager::IsArchiveOpened(const std::string &archivename) const {
  for (const auto &archive : ArchiveBuffer) {
    if (archive &&
        archive->GetArchiveDirectory().GetDirectoryName() == archivename) {
      return true;
    }
  }
  return false;
}

HError ArchiveManager::Add(std::shared_ptr<Archive> archive) {
  ArchiveBuffer.push_back(std::move(archive));
  return E_OK;
}

HError ArchiveManager::Remove(const SId id) {
  if (id < 0 || id >= static_cast<SId>(ArchiveBuffer.size())) {
    return E_ARCHIVE_INVALID_ID;
  }
  ArchiveBuffer[id] = nullptr;

  while (!ArchiveBuffer.empty() && ArchiveBuffer.back() == nullptr) {
    ArchiveBuffer.pop_back();
  }
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
