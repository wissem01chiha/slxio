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

#ifndef CODERINFO_H
#define CODERINFO_H

#include "slxABINamespace.h"
#include "slxType.h"

/**
 * @class CoderInfo
 * @brief This class holds information about code generation for a specific
 * variable or signal.
 * @see https://www.mathworks.com/help/simulink/slref/coderinfo.html
 */
SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class CoderInfo {
public:
  CoderInfo();
  ~CoderInfo() = default;

private:
  const char *StorageClass;
  bool Tunable = 1;
  bool ExportedGlobal = 0;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // CODERINFO_H