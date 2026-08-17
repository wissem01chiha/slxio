// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MESSAGEMERGE_H
#define MESSAGEMERGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT MessageMerge : public IBlockParameters,
                                     public IBlockProperties
{
public:
    /** Default Constructor */
    MessageMerge();

    /** Default Destructor */
    ~MessageMerge();

    const std::string& GetNumberinputports() const;
    void SetNumberinputports(const std::string& value);

private:
    std::string m_Numberinputports;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MESSAGEMERGE_H
