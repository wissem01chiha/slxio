// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PARAMETERWRITER_H
#define PARAMETERWRITER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ParameterWriter : public IBlockParameters,
                                        public IBlockProperties
{
public:
    /** Default Constructor */
    ParameterWriter();

    /** Default Destructor */
    ~ParameterWriter();

    const std::string& GetParameterownerblock() const;
    void SetParameterownerblock(const std::string& value);

    const std::string& GetParametername() const;
    void SetParametername(const std::string& value);

    const std::string& GetWorkspacevariablename() const;
    void SetWorkspacevariablename(const std::string& value);

    const std::string& GetIsparametervalidationon() const;
    void SetIsparametervalidationon(const std::string& value);

    const std::string& GetDestination() const;
    void SetDestination(const std::string& value);

private:
    std::string m_Parameterownerblock;

    std::string m_Parametername;

    std::string m_Workspacevariablename;

    std::string m_Isparametervalidationon;

    std::string m_Destination;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PARAMETERWRITER_H
