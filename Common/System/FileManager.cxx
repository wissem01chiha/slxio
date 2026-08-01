#include "FileManager.h"
#include "Directory.h"
#include "ErrorCode.h"
#include "File.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FileManager::FileManager()
{
  FileBuffer.clear();
}

FileManager::FileManager(std::vector<std::shared_ptr<File>> files)
{
  FileBuffer = files;
}

IdType FileManager::GetFileId(const std::string& filename) const
{
  for (UInt32 i = 0; i <= GetFileMaxId(); i++)
  {
    if (FileBuffer[i] != nullptr && FileBuffer[i]->GetFileName() == filename)
    {
      return i;
    }
  }
  return (IdType)-1;
}

IdType FileManager::GetFileMaxId() const
{
  return SLXIO_TYPE_CAST(IdType, FileBuffer.size());
}

bool FileManager::IsOpened(const std::string& filename)
{
  for (UInt32 i = 0; i <= GetFileMaxId(); i++)
  {
    if (FileBuffer[i] != nullptr && FileBuffer[i]->GetFileName() == filename)
    {
      return true;
    }
  }
  return false;
}

ReturnType FileManager::Add(std::shared_ptr<File> file)
{
  return E_OK;
}

std::shared_ptr<File> FileManager::GetFile(IdType id) const
{
  if (id < 0)
  {
    return nullptr;
  }

  if (id < static_cast<IdType>(FileBuffer.size()))
  {
    return FileBuffer[id];
  }

  return nullptr;
}

// UInt32 FileManager::PushBack(File* _file)
// {
//   // if already opened, return previous ID
//   // if(isOpened(_file->getFilename()) == true)
//   //{
//   //    UInt32 iFile = getFileID(_file->getFilename());
//   //        _file->getReal()[0] = iFile;
//   //    return iFile;
//   //}

//   // find first free space
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] == nullptr)
//     {
//       fileList[i] = _file;
//       file = i;
//       return i;
//     }
//   }

//   // no free space, add at the end
//   UInt32 iNewId = static_cast<UInt32>(fileList.size());
//   fileList.push_back(_file);
//   file = iNewId;
//   return iNewId;
// }

IdType FileManager::GetFirstFreeFileId()
{
  // find first free space
  for (size_t i = 0; i < FileBuffer.size(); i++)
  {
    if (FileBuffer[i] == nullptr)
    {
      return i;
    }
    return (IdType)-1;
  }
  // no free space, add at the end
  IdType NewId = static_cast<IdType>(FileBuffer.size());
  FileBuffer.push_back(nullptr);
  return NewId;
}

ReturnType FileManager::Remove(IdType id)
{
  if (0 < id && id < static_cast<IdType>(FileBuffer.size()))
  {
    //     delete fileList[_iID];
    //     fileList[_iID] = nullptr;
    //     if (file == _iID)
    //     {
    //       file = -1;
    //     }
  }

  // to clean end of list and remove empty spaces
  while (FileBuffer.size() != 0 && FileBuffer.back() == nullptr)
  {
    FileBuffer.pop_back();
  }
  return E_OK;
}

std::vector<IdType> FileManager::GetFileIds() const
{
  std::vector<IdType> piIds;
  for (UInt32 i = 0; i < static_cast<UInt32>(FileBuffer.size()); i++)
  {
    if (FileBuffer[i] != nullptr)
    {
      piIds.push_back(i);
    }
  }

  return piIds;
}

std::vector<Directory> FileManager::GetFileDirectories() const
{
  return std::vector<Directory>();
}

UInt32 FileManager::GetOpenedCount()
{
  UInt32 iCount = 0;
  for (UInt32 i = 0; i < static_cast<UInt32>(FileBuffer.size()); i++)
  {
    if (FileBuffer[i] != nullptr)
    {
      iCount++;
    }
  }
  return iCount;
}

std::vector<std::string> FileManager::GetFileNames()
{
  return std::vector<std::string>();
}

std::vector<int> FileManager::GetFileModes() const
{
  std::vector<int> pdblModes;

  for (UInt32 i = 0; i < static_cast<UInt32>(FileBuffer.size()); i++)
  {
    if (FileBuffer[i] != nullptr)
    {
      pdblModes.push_back(FileBuffer[i]->GetFileMode());
    }
  }

  return pdblModes;
}

ReturnType FileManager::Clear()
{
  FileBuffer.clear();
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};