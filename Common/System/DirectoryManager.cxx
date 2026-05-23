#include "DirectoryManager.h"
#include "Directory.h"
#include "ErrorCode.h"
#include "File.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DirectoryManager::DirectoryManager()
{
  DirectoryBuffer.clear();
}

DirectoryManager::DirectoryManager(
  std::vector<std::shared_ptr<Directory>> directories)
  : DirectoryBuffer(directories)
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
