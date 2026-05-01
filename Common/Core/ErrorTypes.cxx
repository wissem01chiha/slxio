#include "ErrorTypes.h"
#include <cstdio>

#define GET_SEVERITY(code) (((code) >> 30) & 0x3)
#define GET_NAMESPACE(code) (((code) >> 22) & 0xFF)
#define GET_MODULE(code) (((code) >> 14) & 0xFF)
#define GET_ERROR(code) ((code) & 0x3FFF)

/* Define error info for each error code */
const ErrorTypeInfo ErrorInfo[] = {
  { E_OK, "OK" },
  { E_NULL_FILE_PATH, "Invalid file path" },
  { E_NULL_DIR_PATH, "Invalid directory path" },
  { E_STREAM_EMPTY_OUTPUT, "Output stream is empty after copy" },
  { E_STREAM_WRITE_FAIL, "Failed to write to output stream" },
  { E_FOPEN_FAIL, "Failed to open the requested file" },
  { E_FUNC_PARAM_NULL_PTR, "Null pointer parameter not allowed" },
  { E_WRNG_FILE_MODE, "Invalid File Mode for this operation" },
  { E_PATH_TOO_LONG, "File path too long" },
  { E_MSG_TOO_LARGE, "Message too large" },
  { E_EOF, "End of file encountered" },
  { E_WRNG_FUNC_PARAM, "Invalid function parameter argument" },
  { E_NOT_IMPL, "Function not implemented yet" },
  { E_CONFIG_ACTIVE, "Config active" },
  { E_ZIP_ER_OK, "No error" },
  { E_ZIP_ER_MULTIDISK, "Multi-disk zip archives not supported" },
  { E_ZIP_ER_RENAME, "Renaming temporary file failed" },
  { E_ZIP_ER_CLOSE, "Closing zip archive failed" },
  { E_ZIP_ER_SEEK, "Seek error" },
  { E_ZIP_ER_READ, "Read error" },
  { E_ZIP_ER_WRITE, "Write error" },
  { E_ZIP_ER_CRC, "CRC error" },
  { E_ZIP_ER_ZIPCLOSED, "Containing zip archive was closed" },
  { E_ZIP_ER_NOENT, "No such file" },
  { E_ZIP_ER_EXISTS, "File already exists" },
  { E_ZIP_ER_OPEN, "Can't open file" },
  { E_ZIP_ER_TMPOPEN, "Failure to create temporary file" },
  { E_ZIP_ER_ZLIB, "Zlib error" },
  { E_ZIP_ER_MEMORY, "Malloc failure" },
  { E_ZIP_ER_CHANGED, "Entry has been changed" },
  { E_ZIP_ER_COMPNOTSUPP, "Compression method not supported" },
  { E_ZIP_ER_EOF, "Premature end of file" },
  { E_ZIP_ER_INVAL, "Invalid argument" },
  { E_ZIP_ER_NOZIP, "Not a zip archive" },
  { E_ZIP_ER_INTERNAL, "Internal error" },
  { E_ZIP_ER_INCONS, "Zip archive inconsistent" },
  { E_ZIP_ER_REMOVE, "Can't remove file" },
  { E_ZIP_ER_DELETED, "Entry has been deleted" },
  { E_ZIP_ER_ENCRNOTSUPP, "Encryption method not supported" },
  { E_ZIP_ER_RDONLY, "Read-only archive" },
  { E_ZIP_ER_NOPASSWD, "No password provided" },
  { E_ZIP_ER_WRONGPASSWD, "Wrong password provided" },
  { E_ZIP_ER_OPNOTSUPP, "Operation not supported" },
  { E_ZIP_ER_INUSE, "Resource still in use" },
  { E_ZIP_ER_TELL, "Tell error" },
  { E_ZIP_ER_COMPRESSED_DATA, "Compressed data invalid" },
  { E_ZIP_ER_CANCELLED, "Operation cancelled" },
  { E_ZIP_ER_DATA_LENGTH, "Unexpected length of data" },
  { E_ZIP_ER_NOT_ALLOWED, "Not allowed in torrentzip" },
  { E_ZIP_ER_TRUNCATED_ZIP, "Possibly truncated or corrupted zip archive" },
};

const size_t ErrorInfoCount = sizeof(ErrorInfo) / sizeof(ErrorInfo[0]);

/* Define severity levels */
const ErrorLevelTypeInfo ErrorLevelInfo[] = {
  { E_FATAL, "FATAL" },
  { E_ERROR, "ERROR" },
  { E_WARN, "WARN" },
  { E_INFO, "INFO" },
};

const size_t ErrorLevelInfoCount =
  sizeof(ErrorLevelInfo) / sizeof(ErrorLevelInfo[0]);

/* Define namespaces/modules */
const ErrorDomainTypeInfo ErrorDomainInfo[] = { { COMMON, "Common" },
  { DOCUMENTATION, "Documentation" }, { EXAMPLES, "Examples" },
  { INTERACTION, "Interaction" }, { IO, "IO" }, { SIMULINK, "Simulink" },
  { TESTING, "Testing" }, { THIRDPARTY, "ThirdParty" },
  { UTILITIES, "Utilities" }, { VISUALIZATION, "Visualization" },
  { CORE, "Core" }, { SYSTEM, "System" }, { DATA, "Data" }, { JSON, "Json" },
  { SLX, "Slx" }, { ANNOTATION, "Annotation" },
  { CONFIGURATION, "Configuration" }, { LAYOUT, "Layout" },
  { LIBRARY, "Library" }, { MISC, "Misc" }, { STATEFLOW, "Stateflow" },
  { CONSOLE, "Console" }, { PYTHON, "Python" }, { QT, "Qt" },
  { LIBZIP, "libzip" }, { LIBUV, "libuv" } };

const size_t ErrorDomainInfoCount =
  sizeof(ErrorDomainInfo) / sizeof(ErrorDomainInfo[0]);

const char* GetErrorLevelInfo(UInt32 code)
{
  switch (GET_SEVERITY(code))
  {
    case E_FATAL: return "FATAL";
    case E_ERROR: return "ERROR";
    case E_WARN: return "WARN";
    case E_INFO: return "INFO";
    default: return "UNKNOWN";
  }
}

const char* GetErrorDomainInfo(UInt32 code)
{
  UInt32 ns = GET_NAMESPACE(code);
  for (size_t i = 0; i < sizeof(ErrorDomainInfo) / sizeof(ErrorDomainInfo[0]);
    ++i)
  {
    if (ErrorDomainInfo[i].code == ns)
      return ErrorDomainInfo[i].name;
  }
  return "";
}

const char* _GetErrorInfo(UInt32 code)
{
  for (size_t i = 0; i < sizeof(ErrorInfo) / sizeof(ErrorInfo[0]); ++i)
  {
    if (ErrorInfo[i].code == code)
      return ErrorInfo[i].msg;
  }
  return "";
}

int PrintError(UInt32 code)
{
  return printf("ERROR [Level:%s, Group:%s, Module:%u, Code:%u] %s\n",
    GetErrorLevelInfo(code), GetErrorDomainInfo(code), GET_MODULE(code),
    GET_ERROR(code), _GetErrorInfo(code));
}

int PrintfError(const char* format, UInt32 code)
{
  return printf(format, GetErrorLevelInfo(code), GetErrorDomainInfo(code),
    GET_MODULE(code), GET_ERROR(code), _GetErrorInfo(code));
}
