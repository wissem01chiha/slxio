#include "DirectoryService.h"
#include "Directory.h"
#include "ErrorCode.h"
#include "Libuv.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

std::string DirectoryService::toString(const Directory& directory)
{
  return std::string();
}

Directory DirectoryService::GetWorkingDirectory(ReturnType* error)
{
  static char buffer[1024];

  size_t size = sizeof(buffer);

  *error = uv_cwd(buffer, &size);
  return Directory(buffer);
}

ReturnType DirectoryService::CreateDirectoryStructure(
  const std::string& structure)
{
  const char* tree = structure.c_str();
  if (tree == nullptr)
    return E_PARAMETER_NULL_PTR;

  char* Path = (char*)malloc(strlen(tree) + 1);
  strcpy(Path, tree);

  if (tree[strlen(tree) - 1] != '/')
  {
    char* last_slash = strrchr(Path, '/');
    if (last_slash)
    {
      *(last_slash + 1) = '\0';
    }
    else
    {
      Path[0] = '\0';
    }
  }

  uv_fs_t req;
  char temp[1024];
  strncpy(temp, Path, sizeof(temp));
  temp[sizeof(temp) - 1] = '\0';

  for (char* p = temp + 1; *p; p++)
  {
    if (*p == '/')
    {
      *p = '\0';
      int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
      if (r < 0 && r != UV_EEXIST)
      {
        return r;
      }
      *p = '/';
    }
  }

  int r = uv_fs_mkdir(uv_default_loop(), &req, temp, 0755, NULL);
  if (r < 0 && r != UV_EEXIST)
  {
    return r;
  }

  return E_OK;
}

std::string DirectoryService::CreateTemporaryDirectory(ReturnType* error)
{
  uv_fs_t req;
  int r = uv_fs_mkdtemp(uv_default_loop(), &req, "XXXXXX", nullptr);

  if (r < 0)
  {
    uv_fs_req_cleanup(&req);
    return nullptr;
  }

  if (req.path == nullptr)
  {
    uv_fs_req_cleanup(&req);
    return nullptr;
  }

  const char* tmpdir = strdup(req.path);
  uv_fs_req_cleanup(&req);

  return std::string(tmpdir);
}

std::string DirectoryService::CreatePrefixedTemporaryDirectory(
  const char* prefix, ReturnType* error)
{
  uv_fs_t req;

  std::string tempDirName = "XXXXXX";
  if (prefix != nullptr && strlen(prefix) > 0)
  {
    tempDirName = std::string(prefix) + "_XXXXXX";
  }

  int r = uv_fs_mkdtemp(uv_default_loop(), &req, tempDirName.c_str(), nullptr);

  if (r < 0)
  {
    uv_fs_req_cleanup(&req);
    return nullptr;
  }

  if (req.path == nullptr)
  {
    uv_fs_req_cleanup(&req);
    return nullptr;
  }

  const char* tmpdir = strdup(req.path);
  uv_fs_req_cleanup(&req);

  return std::string(tmpdir);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END