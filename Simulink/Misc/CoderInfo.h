// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CODERINFO_H
#define CODERINFO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class CoderInfo
 * @brief This class holds information about code generation for a
 * specific variable or signal.
 * @see
 * https://www.mathworks.com/help/simulink/slref/simulink.coderinfo.html?s_tid=srchtitle_support_results_1_coderinfo
 * @note StorageClass= 'Custom' not supported along with the
 * CustomAttribute
 */
class SLXIO_APIEXPORT CoderInfo final
{
public:
    CoderInfo();
    ~CoderInfo() = default;
    const char* getStorageClass() const;
    bool isTunable();
    const char* getIdentifier();
    UInt32 getAlignment();

private:
    const char* Identifier;
    UInt32 Alignment;
    const char* StorageClass;
    bool Tunable = true;
    bool ExportedGlobal = false;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // CODERINFO_H
