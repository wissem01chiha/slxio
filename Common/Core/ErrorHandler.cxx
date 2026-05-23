#include "ErrorHandler.h"
#include "ErrorCode.h"
#include "ErrorMap.h"
#include "Libuv.h"
#include "Libzip.h"
#include <cstdio>

void ErrorHandler::SetLastError(int code)
{
  lastError = code;
}

int ErrorHandler::GetLastError(void)
{
  return lastError;
}

const char* ErrorHandler::GetLastErrorMessage(void)
{
  return GetErrorMessage(lastError);
}

const char* ErrorHandler::GetErrorMessage(int code)
{
  if (code >= 1000)
  {
    for (int i = 0; ErrorInfo[i].msg != NULL; ++i)
    {
      if (ErrorInfo[i].code == code)
      {
        return ErrorInfo[i].msg;
      }
    }
    static char buf[128];
    snprintf(buf, sizeof(buf), "unknown error %d", code);
    return buf;
  }

  if (code >= 0 && code <= 35)
  {
    static zip_error_t err;
    zip_error_init_with_code(&err, code);
    const char* msg = zip_error_strerror(&err);

    static char buf[128];
    snprintf(buf, sizeof(buf), "%s", msg ? msg : "unknown libzip error");
    zip_error_fini(&err);

    return buf;
  }

  if (code < 0)
  {
    return uv_strerror(code);
  }
  static char buf[128];
  snprintf(buf, sizeof(buf), "unknown error %d", code);
  return buf;
}

int ErrorHandler::PrintErrorMessage(int code)
{
  return printf("[%d]: %s\n", code, GetErrorMessage(code));
}

int ErrorHandler::PrintfErrorMessage(const char* format, int code)
{
  return printf(format, GetErrorMessage(code));
}

int ErrorHandler::PrintLastErrorMessage(void)
{
  return PrintErrorMessage(lastError);
}

int ErrorHandler::PrintfLastErrorMessage(const char* format)
{
  return PrintfErrorMessage(format, lastError);
}
