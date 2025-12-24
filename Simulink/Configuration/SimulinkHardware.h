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

#ifndef SIMULINKHARDWARE_H
#define SIMULINKHARDWARE_H

#include "ABINamespace.h"
#include "Type.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT SimulinkHardware final {
public:
  SimulinkHardware() =default;

  const char *DisabledProps;
  const char *Description;
  const char *Components;
  uint16 ProdBitPerChar;
  uint16 ProdBitPerShort;
  uint16 ProdBitPeruint16;
  uint16 ProdBitPerLong;
  uint16 ProdBitPerLongLong;
  uint16 ProdBitPerFloat;
  uint16 ProdBitPerfloat64;
  uint16 ProdBitPerPouint16er;
  uint16 ProdBitPerSizeT;
  uint16 ProdBitPerPtrDiffT;
  const char *ProdLargestAtomicuint16eger;
  const char *ProdLargestAtomicFloat;
  const char *Produint16DivRoundTo;
  const char *ProdEndianess;
  uint16 ProdWordSize;
  const char *ProdShiftRightuint16Arith;
  const char *ProdLongLongMode;
  const char *ProdHWDeviceType;
  uint16 TargetBitPerChar;
  uint16 TargetBitPerShort;
  uint16 TargetBitPeruint16;
  uint16 TargetBitPerLong;
  uint16 TargetBitPerLongLong;
  uint16 TargetBitPerFloat;
  uint16 TargetBitPerfloat64;
  uint16 TargetBitPerPouint16er;
  uint16 TargetBitPerSizeT;
  uint16 TargetBitPerPtrDiffT;
  const char *TargetLargestAtomicuint16eger;
  const char *TargetLargestAtomicFloat;
  const char *TargetShiftRightuint16Arith;
  const char *TargetLongLongMode;
  const char *Targetuint16DivRoundTo;
  const char *TargetEndianess;
  uint16 TargetWordSize;
  uint16 TargetPreprocMaxBitsSuint16;
  uint16 TargetPreprocMaxBitsUuint16;
  const char *TargetHWDeviceType;
  const char *TargetUnknown;
  const char *ProdEqTarget;
  const char *UseEmbeddedCoderFeatures;
  const char *UseSimulinkCoderFeatures;
  const char *HardwareBoardFeatureSet;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKHARDWARE_H