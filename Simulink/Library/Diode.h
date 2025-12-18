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

#ifndef SIMULINKBLOCKDATA_H
#define SIMULINKBLOCKDATA_H

#include "slxABINamespace.h"
#include "slxType.h"

SLXIO_ABI_NAMESPACE_BEGIN

class Diode {

  float32 Ron;
  float32 Lon;
  float32 Vf;
  float32 IC;
  bool UseSnubber;
  float32 Rs;
  float32 Cs;
  bool Measurements;
};

SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKBLOCKDATA_H
