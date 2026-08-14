// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CHECKDYNAMICUPPERBOUND_H
#define CHECKDYNAMICUPPERBOUND_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT CheckDynamicUpperBound : public IBlockParameters,
                                               public IBlockProperties
{
public:
    /** Default Constructor */
    CheckDynamicUpperBound();

    /** Default Destructor */
    ~CheckDynamicUpperBound();

    const std::string& GetEnabled() const;
    void SetEnabled(const std::string& value);

    const std::string& GetCallback() const;
    void SetCallback(const std::string& value);

    const std::string& GetStopwhenassertionfail() const;
    void SetStopwhenassertionfail(const std::string& value);

    const std::string& GetExport() const;
    void SetExport(const std::string& value);

    const std::string& GetIcon() const;
    void SetIcon(const std::string& value);

private:
    std::string m_Enabled;

    std::string m_Callback;

    std::string m_Stopwhenassertionfail;

    std::string m_Export;

    std::string m_Icon;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // CHECKDYNAMICUPPERBOUND_H
