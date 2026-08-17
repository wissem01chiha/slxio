// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CODERINFO_H
#define CODERINFO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "MiscPCH.h"
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
    std::string GetStorageClass() const;
    bool IsTunable() const;
    std::string GetIdentifier() const;
    UInt32 GetAlignment() const;

private:
    std::string m_identifier;
    UInt32 m_alignment;
    std::string m_storageClass;
    bool m_tunable = true;
    bool m_exportedGlobal = false;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // CODERINFO_H
