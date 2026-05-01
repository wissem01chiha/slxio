// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKHARDWARE_H
#define SIMULINKHARDWARE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
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
  UInt16 ProdBitPerChar;
  UInt16 ProdBitPerShort;
  UInt16 ProdBitPeruint16;
  UInt16 ProdBitPerLong;
  UInt16 ProdBitPerLongLong;
  UInt16 ProdBitPerFloat;
  UInt16 ProdBitPerfloat64;
  UInt16 ProdBitPerPouint16er;
  UInt16 ProdBitPerSizeT;
  UInt16 ProdBitPerPtrDiffT;
  const char* ProdLargestAtomicuint16eger;
  const char* ProdLargestAtomicFloat;
  const char* Produint16DivRoundTo;
  const char* ProdEndianess;
  UInt16 ProdWordSize;
  const char* ProdShiftRightuint16Arith;
  const char* ProdLongLongMode;
  const char* ProdHWDeviceType;
  UInt16 TargetBitPerChar;
  UInt16 TargetBitPerShort;
  UInt16 TargetBitPeruint16;
  UInt16 TargetBitPerLong;
  UInt16 TargetBitPerLongLong;
  UInt16 TargetBitPerFloat;
  UInt16 TargetBitPerfloat64;
  UInt16 TargetBitPerPouint16er;
  UInt16 TargetBitPerSizeT;
  UInt16 TargetBitPerPtrDiffT;
  const char* TargetLargestAtomicuint16eger;
  const char* TargetLargestAtomicFloat;
  const char* TargetShiftRightuint16Arith;
  const char* TargetLongLongMode;
  const char* Targetuint16DivRoundTo;
  const char* TargetEndianess;
  UInt16 TargetWordSize;
  UInt16 TargetPreprocMaxBitsSuint16;
  UInt16 TargetPreprocMaxBitsUuint16;
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