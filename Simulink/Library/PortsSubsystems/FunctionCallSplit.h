// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FUNCTIONCALLSPLIT_H
#define FUNCTIONCALLSPLIT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FunctionCallSplit : public IBlockParameters,
                                          public IBlockProperties
{
public:
    /** Default Constructor */
    FunctionCallSplit();

    /** Default Destructor */
    ~FunctionCallSplit();

    const std::string& GetIconshape() const;
    void SetIconshape(const std::string& value);

    const std::string& GetNumoutputports() const;
    void SetNumoutputports(const std::string& value);

    const std::string& GetOutputportlayout() const;
    void SetOutputportlayout(const std::string& value);

private:
    std::string m_Iconshape;

    std::string m_Numoutputports;

    std::string m_Outputportlayout;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FUNCTIONCALLSPLIT_H
