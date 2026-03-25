// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Json_c_h__
#define __Json_c_h__

#ifdef USE_EXTERNAL_JSON_C
#include <json.h>
#else
#include "src/arraylist.h"
#include "src/debug.h"
#include "src/json_c_version.h"
#include "src/json_object.h"
#include "src/json_object_iterator.h"
#include "src/json_tokener.h"
#include "src/json_util.h"
#include "src/linkhash.h"
#endif 

#endif //  __Json_c_h__