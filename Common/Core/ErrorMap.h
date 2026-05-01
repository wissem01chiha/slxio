

#include "PlatformTypes.h"

  /* Define error metadata structure */
  typedef struct
  {
    UInt32 code;
    const char* msg;
  } ErrorTypeInfo;

  /* Define error named namepsace/module/level mapping */
  typedef struct
  {
    UInt8 code;
    const char* name;
  } ErrorLevelTypeInfo;

  typedef struct
  {
    UInt8 code;
    const char* name;
  } ErrorDomainTypeInfo;