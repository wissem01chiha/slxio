// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SINELOOKUP_H
#define SINELOOKUP_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SineLookup : public IBlockParameters,
                                   public IBlockProperties
{
public:
    /** Default Constructor */
    SineLookup();

    /** Default Destructor */
    ~SineLookup();

    const std::string& GetFormula() const;
    void SetFormula(const std::string& value);

    const std::string& GetNumdatapoints() const;
    void SetNumdatapoints(const std::string& value);

    const std::string& GetOutputwordlength() const;
    void SetOutputwordlength(const std::string& value);

    const std::string& GetInternalrulepriority() const;
    void SetInternalrulepriority(const std::string& value);

private:
    std::string m_Formula;

    std::string m_Numdatapoints;

    std::string m_Outputwordlength;

    std::string m_Internalrulepriority;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SINELOOKUP_H
