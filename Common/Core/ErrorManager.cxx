#include "ErrorManager.h"
#include <cassert>
#include <cstdio>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

const char* ErrorManager::GetErrorGroupName(UInt32 code)
{
  SLXIO_ASSERT_TYPE_EQUAL(code, (UInt32)1);
  assert(code >= 100 && code <= 199);
  switch (code)
  {
#define XX(name, str)                                                          \
  case name:                                                                   \
    return str;
    SLXIO_NAME_MAP(XX)
#undef XX
    default:
      return "";
  }
}

const char* ErrorManager::GetErrorModuleName(UInt32 code)
{
  SLXIO_ASSERT_TYPE_EQUAL(code, (UInt32)1);
  assert(code >= 1000 && code <= 1999);
  switch (code)
  {
#define XX(name, str)                                                          \
  case name:                                                                   \
    return str;
    SLXIO_NAME_MAP(XX)
#undef XX
    default:
      return "";
  }
}

const char* ErrorManager::GetErrorMessage(UInt32 code)
{
  SLXIO_ASSERT_TYPE_EQUAL(code, (UInt32)1);
  switch (code)
  {
#define XX(name, msg)                                                          \
  case name:                                                                   \
    return msg;
    SLXIO_ERROR_MAP(XX)
#undef XX
    default:
      return "";
  }
}

const char* ErrorManager::GetErrorAsChar(UInt32 code)
{

  SLXIO_ASSERT_TYPE_EQUAL(code, (UInt32)1);

  static char buffer[256];
  UInt32 group = (code >> 24) & 0xFF;
  UInt32 module = (code >> 16) & 0xFF;
  UInt32 error = code & 0xFFFF;

  snprintf(buffer, sizeof(buffer), "Error [group:%s module:%s code:%u] %s",
    GetErrorGroupName(group), GetErrorModuleName(module), error,
    GetErrorMessage(error));

  return buffer;
}

const char* ErrorManager::GetLastErrorMessage(void)
{
  return nullptr;
}

void ErrorManager::PrintfError(const char* format, UInt32 code)
{
  printf(format, GetErrorAsChar(code));
}

void ErrorManager::PrintError(UInt32 code)
{
  printf("%s", GetErrorAsChar(code));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END