/**
 * @file json_inttypes.h
 * @brief Do not use, json-c internal, may be changed or removed at any time.
 */
#ifndef _json_inttypes_h_
#define _json_inttypes_h_

#include <inttypes.h>
#include <stdint.h>

#if defined(_MSC_VER) 
#include <BaseTsd.h>
#ifndef ssize_t
typedef SSIZE_T ssize_t;
#endif
#endif // _MSC_VER

#endif // _json_inttypes_h_
