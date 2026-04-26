#include "ErrorMap.h"
#include <cstdio>
#include <cassert>   

static const char* GetErrorGroupName(UInt32 code)
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

static const char* GetErrorModuleName(UInt32 code)
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

static const char* GetErrorMessage(UInt32 code)
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

static const char* GetErrorAsChar(UInt32 code)
{

  SLXIO_ASSERT_TYPE_EQUAL(code, (UInt32)1);

  static char buffer[256];
  UInt32 group = (code >> 24) & 0xFF;
  UInt32 module = (code >> 16) & 0xFF;
  UInt32 error = code & 0xFFFF;

  snprintf(buffer, sizeof(buffer), "ERROR [group:%s module:%s code:%u] %s",
    GetErrorGroupName(group), GetErrorModuleName(module), error,
    GetErrorMessage(error));

  return buffer;
}

void PrintfError(const char* format, UInt32 code)
{
  printf(format, GetErrorAsChar(code));
}

void PrintError(UInt32 code)
{
  printf("%s", GetErrorAsChar(code));
}