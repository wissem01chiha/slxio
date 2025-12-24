// Copyright 2025-2026 Wissem Chiha
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

#include "ABINamespace.h"
#include "APIExport.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class CoderInfo
 * @brief This class holds information about code generation for a specific
 * variable or signal.
 * @see
 * https://www.mathworks.com/help/simulink/slref/simulink.coderinfo.html?s_tid=srchtitle_support_results_1_coderinfo
 * @note StorageClass= 'Custom' not supported along with the CustomAttribute
 */
class APIEXPORT CoderInfo final {
public:
  CoderInfo();
  ~CoderInfo() = default;
  const char *getStorageClass() const;
  bool isTunable();
  const char *getIdentifier();
  uint32 getAlignment();

private:
  const char *Identifier;
  uint32 Alignment;
  const char *StorageClass;
  bool Tunable = true;
  bool ExportedGlobal = false;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // CODERINFO_H