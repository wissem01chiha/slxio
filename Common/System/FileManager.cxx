#include "FileManager.h"

Index FileManager::getFileID(const std::string& _stFilename)
{
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] != nullptr && fileList[i]->getFilename() == _stFilename)
    {
      return i;
    }
  }
  return -1;
}

Index FileManager::getFileMaxID()
{
  return static_cast<Index>(fileList.size());
}

bool FileManager::isOpened(const std::string& _stFilename)
{
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] != nullptr && fileList[i]->getFilename() == _stFilename)
    {
      return true;
    }
  }
  return false;
}

File* FileManager::getFile(Index _iID)
{
  if (_iID == -1 && file == -1)
  {
    return nullptr;
  }

  if (_iID == -1 && file != -1)
  {
    return fileList[file];
  }

  if (_iID < static_cast<Index>(fileList.size()))
  {
    return fileList[_iID];
  }

  return nullptr;
}

Index FileManager::push_back(File* _file)
{
  // if already opened, return previous ID
  // if(isOpened(_file->getFilename()) == true)
  //{
  //    Index iFile = getFileID(_file->getFilename());
  //        _file->getReal()[0] = iFile;
  //    return iFile;
  //}

  // find first free space
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] == nullptr)
    {
      fileList[i] = _file;
      file = i;
      return i;
    }
  }

  // no free space, add at the end
  Index iNewId = static_cast<Index>(fileList.size());
  fileList.push_back(_file);
  file = iNewId;
  return iNewId;
}

Index FileManager::getFirstFreeFileID()
{
  // find first free space
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] == nullptr)
    {
      file = i;
      return i;
    }
  }

  // no free space, add at the end
  Index iNewId = static_cast<Index>(fileList.size());
  fileList.push_back(nullptr);
  file = iNewId;
  return iNewId;
}

void FileManager::remove(Index _iID)
{
  if (0 < _iID && _iID < static_cast<Index>(fileList.size()))
  {
    delete fileList[_iID];
    fileList[_iID] = nullptr;
    if (file == _iID)
    {
      file = -1;
    }
  }

  // to clean end of list and remove empty spaces
  while (fileList.size() != 0 && fileList.back() == nullptr)
  {
    fileList.pop_back();
  }
}

Index FileManager::getCurrentFile()
{
  return file;
}

Index* FileManager::getIDs()
{
  Index iFileIndex = 0;
  Index* piIds = nullptr;

  piIds = new Index[getOpenedCount()];
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] != nullptr)
    {
      piIds[iFileIndex++] = i;
    }
  }

  return piIds;
}

Index FileManager::getOpenedCount()
{
  Index iCount = 0;
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] != nullptr)
    {
      iCount++;
    }
  }
  return iCount;
}

wchar_t** FileManager::getTypesAsString()
{
  Index iFileIndex = 0;
  wchar_t** pstTypes = nullptr;

  //   pstTypes = new wchar_t *[getOpenedCount()];
  //   for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  //   {
  //     if (fileList[i] != nullptr) {
  //       pstTypes[iFileIndex++] =
  //       _wcsdup(fileList[i]->getFileTypeAsChar());
  //     }
  //   }

  return pstTypes;
}

wchar_t** FileManager::getFilenames()
{
  Index iFileIndex = 0;
  wchar_t** pstFilenames = nullptr;

  // pstFilenames = (char **)malloc(getOpenedCount() * sizeof(char
  // *)); for (Index i = 0; i < static_cast<Index>(fileList.size());
  // ++i) {
  //     if (fileList[i] != nullptr) {
  //         // getFilename() must return std::wstring
  //         pstFilenames[iFileIndex++] =
  //         strdup(fileList[i]->getFilename().c_str());
  //     }
  // }

  return pstFilenames;
}

Float* FileManager::getModes()
{
  Index iFileIndex = 0;
  Float* pdblModes = nullptr;

  pdblModes = new Float[getOpenedCount()];
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] != nullptr)
    {
      pdblModes[iFileIndex++] = (Float)(fileList[i]->getFileMode());
    }
  }

  return pdblModes;
}

std::vector<Float> FileManager::getSwaps()
{

  std::vector<Float> swaps;
  swaps.reserve(getOpenedCount());

  for (Index i = 0; i < static_cast<Index>(fileList.size()); ++i)
  {
    if (fileList[i] != nullptr)
    {
      // swaps.push_back(static_cast<Float>(fileList[i]->getFileSwap()));
    }
  }

  return swaps;
}

FileManager::FileManager()
{
  File* pErr = new File();
  // pErr->setFileMode(L"wb");
  // pErr->setFileDesc(stderr);
  // pErr->setFileSwap(0);
  // pErr->setFileType(3);
  // pErr->setFilename(L"stderr");

  File* pIn = new File();
  // pIn->setFileMode(L"rb");
  // pIn->setFileDesc(stdin);
  // pIn->setFileSwap(0);
  // pIn->setFileType(3);
  // pIn->setFilename(L"stdin");

  File* pOut = new File();
  // pOut->setFileMode(L"wb");
  // pOut->setFileDesc(stdout);
  // pOut->setFileSwap(0);
  // pOut->setFileType(3);
  // pOut->setFilename(L"stdout");

  // put pErr at position 0
  fileList.push_back(pErr);

  // insert free space
  fileList.push_back(nullptr);
  fileList.push_back(nullptr);
  fileList.push_back(nullptr);
  fileList.push_back(nullptr);

  // put pIn at position 5
  fileList.push_back(pIn);
  // put pOut at position 6
  fileList.push_back(pOut);
  file = -1;
}

ErrorCode FileManager::clear()
{
  for (Index i = 0; i < static_cast<Index>(fileList.size()); i++)
  {
    if (fileList[i] != nullptr)
    {
      delete fileList[i];
    }
  }

  fileList.clear();
  return ErrorCode::SLX_OK;
}

FileManager::FileManager(std::vector<File*> files) {}
