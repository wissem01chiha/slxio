
#include "Libzip.h"

UInt32 File::Unzip(const char* dir)
{

  int err = 0;
  uv_fs_t req;

  zip_t* archive = zip_open(FilePath.c_str(), ZIP_RDONLY, &err);
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
    snprintf(entrydirpath, sizeof(entrydirpath), "%s/%s", dir, name);

    int ec = Directory::Create(entrydirpath);
    if (ec != E_OK)
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

ReturnType File::Zip(const char* zfilepath, const char* zname)
{
  zip_t* za;
  int err;

  if ((za = zip_open(zfilepath, ZIP_CREATE, &err)) == NULL)
  {
    zip_error_t error;
    zip_error_init_with_code(&error, err);
    zip_error_fini(&error);
    return err;
  }
  zip_int64_t idx = zip_name_locate(za, zname, 0);
  zip_source_t* source = zip_source_file(za, FilePath.c_str(), 0, -1);
  zip_file_replace(za, idx, source, ZIP_FL_ENC_UTF_8);
  zip_close(za);

  return E_OK;
};



UInt32 File::SetFileExtension(const char* newExt)
{

  if (!newExt || *newExt == '\0')
  {
    return E_INVALID_ARGUMENT;
  }
  if (FilePath.empty())
  {
    return E_INVALID_ARGUMENT;
  }

  size_t pos = FilePath.find_last_of('.');
  std::string base;
  if (pos == std::string::npos)
  {
    base = FilePath;
  }
  else
  {
    base = FilePath.substr(0, pos);
  }

  std::string dest = base + "." + newExt;

  FILE* src = fopen(FilePath.c_str(), "rb");
  if (!src)
  {
    return E_FILE_OPEN_FAIL;
  }

  FILE* dst = fopen(dest.c_str(), "wb");
  if (!dst)
  {
    fclose(src);
    return E_FILE_OPEN_FAIL;
  }

  char InternalBuffer[4096];
  size_t bytes;
  while ((bytes = fread(InternalBuffer, 1, sizeof(InternalBuffer), src)) > 0)
  {
    fwrite(InternalBuffer, 1, bytes, dst);
  }

  fclose(src);
  fclose(dst);

  FilePath = dest;

  return E_OK;
}


UInt32 Directory::Zip(const char* dir)
{
  return E_NOT_IMPLEMENTED;
}
