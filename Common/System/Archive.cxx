#include "Archive.h"
#include "DirectoryService.h"
#include "ErrorCode.h"
#include "Libuv.h"
#include "Libzip.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Archive* Archive::New()
{
  return new Archive();
}

Archive::Archive()
  : file(File(""))
  , directory(Directory(""))
{
}

Archive::Archive(File _file)
  : file(_file)
  , directory(Directory(""))
{
}

void Archive::SetArchiveExtension(const char* ext)
{
  if (!ext || *ext == '\0')
  {
    return;
  }

  size_t pos = file.GetFilePath().find_last_of('.');
  std::string base;
  base = (pos == std::string::npos) ? file.GetFilePath()
                                    : file.GetFilePath().substr(0, pos);
  std::string dest = base + "." + ext;
  file.Rename(dest);
}

void Archive::SetArchiveDirectory(const Directory _directory)
{
  directory = _directory;
}

Directory Archive::GetArchiveDirectory() const
{
  return directory;
}

ReturnType Archive::Extract()
{
  int err = 0;
  uv_fs_t req;

  zip_t* archive = zip_open(file.GetFilePath().c_str(), ZIP_RDONLY, &err);
  if (!archive)
  {
    return err;
  }

  zip_int64_t num_entries = zip_get_num_entries(archive, 0);

  for (zip_uint64_t i = 0; i < num_entries; ++i)
  {
    const char* name = zip_get_name(archive, i, 0);
    if (!name)
    {
      continue;
    }
    char entrydirpath[1024];
    snprintf(entrydirpath, sizeof(entrydirpath), "%s/%s",
      directory.GetDirectoryPath().c_str(), name);

    int ec = 0;
    DirectoryService::CreateDirectoryStructure(entrydirpath, &ec);
    if (ec != 0)
    {
      return ec;
    }

    zip_file_t* zf = zip_fopen_index(archive, i, 0);
    if (!zf)
    {
      continue;
    }

    FILE* out = fopen(entrydirpath, "wb");
    if (!out)
    {
      zip_fclose(zf);
      continue;
    }

    char InternalBuffer[4096];
    zip_int64_t bytes;
    while ((bytes = zip_fread(zf, InternalBuffer, sizeof(InternalBuffer))) > 0)
    {
      fwrite(InternalBuffer, 1, bytes, out);
    }
    fclose(out);
    zip_fclose(zf);
  }

  return E_OK;
}

ReturnType Archive::Add(const File file_)
{
  int err = 0;
  zip_t* za = zip_open(file.GetFilePath().c_str(), ZIP_CREATE, &err);
  if (!za)
  {
    return E_ARCHIVE_OPEN_FAILED;
  }

  zip_int64_t idx = zip_name_locate(za, file.GetFileName().c_str(), 0);

  zip_source_t* source = zip_source_file(za, file.GetFilePath().c_str(), 0, -1);
  if (!source)
  {
    zip_close(za);
    return E_ARCHIVE_SOURCE_FAILED;
  }

  if (idx >= 0)
  {
    if (zip_file_replace(za, idx, source, ZIP_FL_ENC_UTF_8) < 0)
    {
      zip_source_free(source);
      zip_close(za);
      return E_ARCHIVE_REPLACE_FAILED;
    }
  }
  else
  {
    if (zip_file_add(
          za, file_.GetFileName().c_str(), source, ZIP_FL_ENC_UTF_8) < 0)
    {
      zip_source_free(source);
      zip_close(za);
      return E_ARCHIVE_ADD_FAILED;
    }
  }
  if (zip_close(za) < 0)
  {
    return E_ARCHIVE_CLOSE_FAILED;
  }

  return E_OK;
}

ReturnType Archive::Remove(const File file_)
{
  int err = 0;
  zip_t* za = zip_open(file.GetFilePath().c_str(), ZIP_CREATE, &err);
  if (!za)
  {
    return E_ARCHIVE_OPEN_FAILED;
  }

  zip_int64_t idx = zip_name_locate(za, file_.GetFileName().c_str(), 0);
  if (idx < 0)
  {
    zip_close(za);
    return E_ARCHIVE_ENTRY_NOT_FOUND;
  }

  if (zip_delete(za, idx) < 0)
  {
    zip_close(za);
    return E_ARCHIVE_REMOVE_FAILED;
  }

  if (zip_close(za) < 0)
  {
    return E_ARCHIVE_CLOSE_FAILED;
  }

  return E_OK;
}

std::string Archive::GetArchiveExtension() const
{
  if (file.GetFilePath().empty())
    return {};
  auto pos = file.GetFilePath().find_last_of('.');
  if (pos == std::string::npos)
    return {};
  return file.GetFilePath().substr(pos + 1);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
