// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKHARDWARE_H
#define SIMULINKHARDWARE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Base Conainer for Simulink Hardware Configuration
class APIEXPORT SimulinkHardware final
{
public:
  SimulinkHardware() = default;
  ~SimulinkHardware() = default;

  const char* DisabledProps;
  const char* Description;
  const char* Components;
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
  const char* ProdLargestAtomicuint16eger;
  const char* ProdLargestAtomicFloat;
  const char* Produint16DivRoundTo;
  const char* ProdEndianess;
  uint16 ProdWordSize;
  const char* ProdShiftRightuint16Arith;
  const char* ProdLongLongMode;
  const char* ProdHWDeviceType;
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
  const char* TargetLargestAtomicuint16eger;
  const char* TargetLargestAtomicFloat;
  const char* TargetShiftRightuint16Arith;
  const char* TargetLongLongMode;
  const char* Targetuint16DivRoundTo;
  const char* TargetEndianess;
  uint16 TargetWordSize;
  uint16 TargetPreprocMaxBitsSuint16;
  uint16 TargetPreprocMaxBitsUuint16;
  const char* TargetHWDeviceType;
  const char* TargetUnknown;
  const char* ProdEqTarget;
  const char* UseEmbeddedCoderFeatures;
  const char* UseSimulinkCoderFeatures;
  const char* HardwareBoardFeatureSet;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKHARDWARE_H