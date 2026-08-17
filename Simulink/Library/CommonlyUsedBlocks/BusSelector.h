// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BUSSELECTOR_H
#define BUSSELECTOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BusSelector : public IBlockParameters,
                                    public IBlockProperties
{
public:
    /** Default Constructor */
    BusSelector();

    /** Default Destructor */
    ~BusSelector();

    const std::string& GetOutputsignals() const;
    void SetOutputsignals(const std::string& value);

    const std::string& GetOutputasbus() const;
    void SetOutputasbus(const std::string& value);

    const std::string& GetInputsignals() const;
    void SetInputsignals(const std::string& value);

private:
    std::string m_Outputsignals;

    std::string m_Outputasbus;

    std::string m_Inputsignals;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BUSSELECTOR_H
