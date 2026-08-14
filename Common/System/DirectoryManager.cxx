#include "DirectoryManager.h"
#include "Directory.h"
#include "File.h"
#include "SystemECH.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DirectoryManager::DirectoryManager()
{
  DirectoryBuffer.clear();
}

DirectoryManager::DirectoryManager(
  const std::vector<std::shared_ptr<Directory>>& directories)
  : DirectoryBuffer(directories)
{
}

std::vector<std::string> DirectoryManager::GetDirectoryNames()
{
  std::vector<std::string> names;
  for (const auto& dir : DirectoryBuffer) {
    if (dir) {
      names.push_back(dir->GetDirectoryName());
    }
  }
  return names;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
