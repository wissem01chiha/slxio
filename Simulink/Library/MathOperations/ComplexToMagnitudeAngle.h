// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COMPLEXTOMAGNITUDEANGLE_H
#define COMPLEXTOMAGNITUDEANGLE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ComplexToMagnitudeAngle : public IBlockParameters,
                                                public IBlockProperties
{
public:
    /** Default Constructor */
    ComplexToMagnitudeAngle();

    /** Default Destructor */
    ~ComplexToMagnitudeAngle();

    const std::string& GetOutput() const;
    void SetOutput(const std::string& value);

    const std::string& GetApproximationmethod() const;
    void SetApproximationmethod(const std::string& value);

    const std::string& GetNumberofiterations() const;
    void SetNumberofiterations(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Output;

    std::string m_Approximationmethod;

    std::string m_Numberofiterations;

    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // COMPLEXTOMAGNITUDEANGLE_H
