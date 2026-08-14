#include "FileManager.h"
#include "Directory.h"
#include "File.h"
#include "SystemECH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FileManager::FileManager() { FileBuffer.clear(); }

FileManager::FileManager(const std::vector<std::shared_ptr<File>>& files)
    : FileBuffer(files)
{
}

SId FileManager::GetFileId(const std::string& filename) const
{
    for (UInt32 i = 0; i <= GetFileMaxId(); i++)
    {
        if (FileBuffer[i] != nullptr &&
            FileBuffer[i]->GetFileName() == filename)
        {
            return i;
        }
    }
    return (SId)-1;
}

SId FileManager::GetFileMaxId() const
{
    return SLXIO_STATIC_CAST(SId, FileBuffer.size());
}

bool FileManager::IsOpened(const std::string& filename)
{
    for (UInt32 i = 0; i <= GetFileMaxId(); i++)
    {
        if (FileBuffer[i] != nullptr &&
            FileBuffer[i]->GetFileName() == filename)
        {
            return true;
        }
    }
    return false;
}

HError FileManager::Add(std::shared_ptr<File> file) { return E_OK; }

std::shared_ptr<File> FileManager::GetFile(SId id) const
{
    if (id < 0)
    {
        return nullptr;
    }

    if (id < static_cast<SId>(FileBuffer.size()))
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

SId FileManager::GetFirstFreeFileId()
{
    // find first free space
    for (size_t i = 0; i < FileBuffer.size(); i++)
    {
        if (FileBuffer[i] == nullptr)
        {
            return i;
        }
        return (SId)-1;
    }
    // no free space, add at the end
    SId NewId = static_cast<SId>(FileBuffer.size());
    FileBuffer.push_back(nullptr);
    return NewId;
}

HError FileManager::Remove(SId id)
{
    if (0 < id && id < static_cast<SId>(FileBuffer.size()))
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

std::vector<SId> FileManager::GetFileIds() const
{
    std::vector<SId> piIds;
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

HError FileManager::Clear()
{
    FileBuffer.clear();
    return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
