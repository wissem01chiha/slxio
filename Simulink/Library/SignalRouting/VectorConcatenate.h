// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VECTORCONCATENATE_H
#define VECTORCONCATENATE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT VectorConcatenate : public IBlockParameters,
                                          public IBlockProperties
{
public:
    /** Default Constructor */
    VectorConcatenate();

    /** Default Destructor */
    ~VectorConcatenate();

    const std::string& GetNuminputs() const;
    void SetNuminputs(const std::string& value);

    const std::string& GetMode() const;
    void SetMode(const std::string& value);

    const std::string& GetConcatenatedimension() const;
    void SetConcatenatedimension(const std::string& value);

private:
    std::string m_Numinputs;

    std::string m_Mode;

    std::string m_Concatenatedimension;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // VECTORCONCATENATE_H
