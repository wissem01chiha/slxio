// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKHARDWARE_H
#define SIMULINKHARDWARE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @struct SimulinkHardware
 * @brief Base Conainer for Simulink Hardware Configuration
 */
struct SLXIO_APIEXPORT SimulinkHardware final // NOSONAR
{
    std::string DisabledProps;
    std::string Description;
    std::string Components;
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
    std::string ProdLargestAtomicuint16eger;
    std::string ProdLargestAtomicFloat;
    std::string Produint16DivRoundTo;
    std::string ProdEndianess;
    UInt16 ProdWordSize;
    std::string ProdShiftRightuint16Arith;
    std::string ProdLongLongMode;
    std::string ProdHWDeviceType;
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
    std::string TargetLargestAtomicuint16eger;
    std::string TargetLargestAtomicFloat;
    std::string TargetShiftRightuint16Arith;
    std::string TargetLongLongMode;
    std::string Targetuint16DivRoundTo;
    std::string TargetEndianess;
    UInt16 TargetWordSize;
    UInt16 TargetPreprocMaxBitsSuint16;
    UInt16 TargetPreprocMaxBitsUuint16;
    std::string TargetHWDeviceType;
    std::string TargetUnknown;
    std::string ProdEqTarget;
    std::string UseEmbeddedCoderFeatures;
    std::string UseSimulinkCoderFeatures;
    std::string HardwareBoardFeatureSet;
};

bool IsValid(const SimulinkHardware* hardware);

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKHARDWARE_H
