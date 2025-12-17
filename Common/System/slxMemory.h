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

#ifndef SLXMEMORY_H
#define SLXMEMORY_H

#include "slxAPIExport.h"
#include "slxType.h"

/**
 * @brief
 * https://github.com/scilab/scilab/blob/81a9cc049332de0c712cf56da585fcd25c8e59e3/scilab/modules/core/includes/getmaxMALLOC.h
 */
class SLXEXPORT slxMemory {
public:
  slxMemory() = default;
  static unsigned long getLargestFreeMemory(void);
  ;
  ~slxMemory() = default;
};

#endif // SLXMEMORY_H
