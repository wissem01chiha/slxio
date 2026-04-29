#include "FileManager.h"
#include "File.h"
#include "ErrorTypes.h"

// UInt32 FileManager::GetFileID(const std::string& _stFilename)
// {
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] != nullptr && fileList[i]->getFilename() == _stFilename)
//     {
//       return i;
//     }
//   }
//   return -1;
// }

// UInt32 FileManager::GetFileMaxID()
// {
//   return static_cast<UInt32>(fileList.size());
// }

// bool FileManager::IsOpened(const std::string& _stFilename)
// {
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] != nullptr && fileList[i]->getFilename() == _stFilename)
//     {
//       return true;
//     }
//   }
//   return false;
// }

// File* FileManager::GetFile(UInt32 _iID)
// {
//   if (_iID == -1 && file == -1)
//   {
//     return nullptr;
//   }

//   if (_iID == -1 && file != -1)
//   {
//     return fileList[file];
//   }

//   if (_iID < static_cast<UInt32>(fileList.size()))
//   {
//     return fileList[_iID];
//   }

//   return nullptr;
// }

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

// UInt32 FileManager::GetFirstFreeFileID()
// {
//   // find first free space
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] == nullptr)
//     {
//       file = i;
//       return i;
//     }
//   }

//   // no free space, add at the end
//   UInt32 iNewId = static_cast<UInt32>(fileList.size());
//   fileList.push_back(nullptr);
//   file = iNewId;
//   return iNewId;
// }

// void FileManager::Remove(UInt32 _iID)
// {
//   if (0 < _iID && _iID < static_cast<UInt32>(fileList.size()))
//   {
//     delete fileList[_iID];
//     fileList[_iID] = nullptr;
//     if (file == _iID)
//     {
//       file = -1;
//     }
//   }

//   // to clean end of list and remove empty spaces
//   while (fileList.size() != 0 && fileList.back() == nullptr)
//   {
//     fileList.pop_back();
//   }
// }

// UInt32 FileManager::GetCurrentFile()
// {
//   return file;
// }

// UInt32* FileManager::GetIDs()
// {
//   UInt32 iFileUInt32 = 0;
//   UInt32* piIds = nullptr;

//   piIds = new UInt32[GetOpenedCount()];
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] != nullptr)
//     {
//       piIds[iFileUInt32++] = i;
//     }
//   }

//   return piIds;
// }

// UInt32 FileManager::GetOpenedCount()
// {
//   UInt32 iCount = 0;
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] != nullptr)
//     {
//       iCount++;
//     }
//   }
//   return iCount;
// }

// wchar_t** FileManager::GetTypesAsString()
// {
//   UInt32 iFileUInt32 = 0;
//   wchar_t** pstTypes = nullptr;

//   //   pstTypes = new wchar_t *[getOpenedCount()];
//   //   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   //   {
//   //     if (fileList[i] != nullptr) {
//   //       pstTypes[iFileUInt32++] =
//   //       _wcsdup(fileList[i]->getFileTypeAsChar());
//   //     }
//   //   }

//   return pstTypes;
// }

// wchar_t** FileManager::GetFilenames()
// {
//   UInt32 iFileUInt32 = 0;
//   wchar_t** pstFilenames = nullptr;

//   // pstFilenames = (char **)malloc(getOpenedCount() * sizeof(char
//   // *)); for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size());
//   // ++i) {
//   //     if (fileList[i] != nullptr) {
//   //         // getFilename() must return std::wstring
//   //         pstFilenames[iFileUInt32++] =
//   //         strdup(fileList[i]->getFilename().c_str());
//   //     }
//   // }

//   return pstFilenames;
// }

// Float32* FileManager::GetModes()
// {
//   UInt32 iFileUInt32 = 0;
//   Float32* pdblModes = nullptr;

//   pdblModes = new Float32[GetOpenedCount()];
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] != nullptr)
//     {
//       pdblModes[iFileUInt32++] = (Float32)(fileList[i]->getFileMode());
//     }
//   }

//   return pdblModes;
// }

// std::vector<Float32> FileManager::GetSwaps()
// {

//   std::vector<Float32> swaps;
//   swaps.reserve(GetOpenedCount());

//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); ++i)
//   {
//     if (fileList[i] != nullptr)
//     {
//       // swaps.push_back(static_cast<Float>(fileList[i]->getFileSwap()));
//     }
//   }

//   return swaps;
// }

// FileManager::FileManager()
// {
//   File* pErr = new File();
//   // pErr->setFileMode(L"wb");
//   // pErr->setFileDesc(stderr);
//   // pErr->setFileSwap(0);
//   // pErr->setFileType(3);
//   // pErr->setFilename(L"stderr");

//   File* pIn = new File();
//   // pIn->setFileMode(L"rb");
//   // pIn->setFileDesc(stdin);
//   // pIn->setFileSwap(0);
//   // pIn->setFileType(3);
//   // pIn->setFilename(L"stdin");

//   File* pOut = new File();
//   // pOut->setFileMode(L"wb");
//   // pOut->setFileDesc(stdout);
//   // pOut->setFileSwap(0);
//   // pOut->setFileType(3);
//   // pOut->setFilename(L"stdout");

//   // put pErr at position 0
//   fileList.push_back(pErr);

//   // insert free space
//   fileList.push_back(nullptr);
//   fileList.push_back(nullptr);
//   fileList.push_back(nullptr);
//   fileList.push_back(nullptr);

//   // put pIn at position 5
//   fileList.push_back(pIn);
//   // put pOut at position 6
//   fileList.push_back(pOut);
//   file = -1;
// }

// UInt32 FileManager::Clear()
// {
//   for (UInt32 i = 0; i < static_cast<UInt32>(fileList.size()); i++)
//   {
//     if (fileList[i] != nullptr)
//     {
//       delete fileList[i];
//     }
//   }

//   fileList.clear();
//   return E_OK;
// }

// FileManager::FileManager(std::vector<File*> files) {}
