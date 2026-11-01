/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "CommonPCH.h"

namespace slxio
{

struct  SimulinkHardware // NOSONAR
{
    std::string DisabledProps;
    std::string Description;
    std::string Components;
    uint16_t ProdBitPerChar;
    uint16_t ProdBitPerShort;
    uint16_t ProdBitPeruint16_t;
    uint16_t ProdBitPerLong;
    uint16_t ProdBitPerLongLong;
    uint16_t ProdBitPerFloat;
    uint16_t ProdBitPerfloat64;
    uint16_t ProdBitPerPouint16_ter;
    uint16_t ProdBitPerSizeT;
    uint16_t ProdBitPerPtrDiffT;
    std::string ProdLargestAtomicuint16_teger;
    std::string ProdLargestAtomicFloat;
    std::string Produint16_tDivRoundTo;
    std::string ProdEndianess;
    uint16_t ProdWordSize;
    std::string ProdShiftRightuint16_tArith;
    std::string ProdLongLongMode;
    std::string ProdHWDeviceType;
    uint16_t TargetBitPerChar;
    uint16_t TargetBitPerShort;
    uint16_t TargetBitPeruint16_t;
    uint16_t TargetBitPerLong;
    uint16_t TargetBitPerLongLong;
    uint16_t TargetBitPerFloat;
    uint16_t TargetBitPerfloat64;
    uint16_t TargetBitPerPouint16_ter;
    uint16_t TargetBitPerSizeT;
    uint16_t TargetBitPerPtrDiffT;
    std::string TargetLargestAtomicuint16_teger;
    std::string TargetLargestAtomicFloat;
    std::string TargetShiftRightuint16_tArith;
    std::string TargetLongLongMode;
    std::string Targetuint16_tDivRoundTo;
    std::string TargetEndianess;
    uint16_t TargetWordSize;
    uint16_t TargetPreprocMaxBitsSuint16_t;
    uint16_t TargetPreprocMaxBitsUuint16_t;
    std::string TargetHWDeviceType;
    std::string TargetUnknown;
    std::string ProdEqTarget;
    std::string UseEmbeddedCoderFeatures;
    std::string UseSimulinkCoderFeatures;
    std::string HardwareBoardFeatureSet;
};

}; // namespace slxio
