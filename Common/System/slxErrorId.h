// Copyright 2024-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef SLXERRORID_H
#define SLXERRORID_H

#include "slxAPIExport.h"

  /**
   * @brief container for all low level errono ids used acros s the project
   */
  enum class SLXEXPORT slxErrorId {
    Ok = 0,
    SLX_ERR_OPEN,
    SLX_ERR_DECOMPRESS,
    SLX_ERR_ER_NOENT,
    SLX_ERR_ER_NOTEMPTY,
    SLX_ERR_ER_COPY_FAIL,
    SLX_ERR_NULL_PTR,
    SLX_ERR_ADD_FAIL,
    SLX_ERR_FILE_DELETE,
    SLX_ERR_MEMORY_ALLOC,
    SLX_ERR_DENIED,
    SLX_ERR_TYPE_MISMATCH,
    SLX_ERR_CAST_FAIL,
    SLX_ERR_INVALID_XML,
    SLX_ERR_UNKNOWN,
    SLX_ERR_INVALID_EXTENSION,
    SLX_ERR_EXTENSION_NOT_SUPPORTED,
        InvalidArgument,
    FileNotFound,
    NotOpen,
    IOError,
    EndOfFile,
    AlreadyExists,
    NoSpace,
    ReadOnly,
    NotImplemented,
    PermissionDenied,
    CrossDeviceMove,
    IsDirectory,
    FileExists,
    PathNotFound
  };

#endif //  SLXERRORID_H