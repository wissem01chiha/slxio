// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BUSASSIGNMENT_H
#define BUSASSIGNMENT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BusAssignment : public IBlockParameters,
                                      public IBlockProperties
{
public:
    /** Default Constructor */
    BusAssignment();

    /** Default Destructor */
    ~BusAssignment();

    const std::string& GetAssignedsignals() const;
    void SetAssignedsignals(const std::string& value);

    const std::string& GetInputsignals() const;
    void SetInputsignals(const std::string& value);

private:
    std::string m_Assignedsignals;

    std::string m_Inputsignals;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BUSASSIGNMENT_H
