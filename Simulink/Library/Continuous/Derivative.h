// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Derivative : public IBlockParameters,
                                   public IBlockProperties
{
public:
    /** Default Constructor */
    Derivative();

    /** Default Destructor */
    ~Derivative();

    const std::string& GetCoefficientintfapproximation() const;
    void SetCoefficientintfapproximation(const std::string& value);

private:
    std::string m_Coefficientintfapproximation;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DERIVATIVE_H
