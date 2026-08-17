// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MUX_H
#define MUX_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Mux : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    Mux();

    /** Default Destructor */
    ~Mux();

    const std::string& GetInputs() const;
    void SetInputs(const std::string& value);

    const std::string& GetDisplayoption() const;
    void SetDisplayoption(const std::string& value);

private:
    std::string m_Inputs;

    std::string m_Displayoption;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MUX_H
