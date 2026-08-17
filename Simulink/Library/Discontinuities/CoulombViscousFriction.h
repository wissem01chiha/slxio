// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COULOMBVISCOUSFRICTION_H
#define COULOMBVISCOUSFRICTION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT CoulombViscousFriction : public IBlockParameters,
                                               public IBlockProperties
{
public:
    /** Default Constructor */
    CoulombViscousFriction();

    /** Default Destructor */
    ~CoulombViscousFriction();

    const std::string& GetOffset() const;
    void SetOffset(const std::string& value);

    const std::string& GetGain() const;
    void SetGain(const std::string& value);

private:
    std::string m_Offset;

    std::string m_Gain;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // COULOMBVISCOUSFRICTION_H
