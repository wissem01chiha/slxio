// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SUBMATRIX_H
#define SUBMATRIX_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Submatrix : public IBlockParameters,
                                  public IBlockProperties
{
public:
    /** Default Constructor */
    Submatrix();

    /** Default Destructor */
    ~Submatrix();

    const std::string& GetRowspan() const;
    void SetRowspan(const std::string& value);

    const std::string& GetRowstartmode() const;
    void SetRowstartmode(const std::string& value);

    const std::string& GetRowstartindex() const;
    void SetRowstartindex(const std::string& value);

    const std::string& GetRowendmode() const;
    void SetRowendmode(const std::string& value);

    const std::string& GetRowendindex() const;
    void SetRowendindex(const std::string& value);

    const std::string& GetColspan() const;
    void SetColspan(const std::string& value);

    const std::string& GetColstartmode() const;
    void SetColstartmode(const std::string& value);

    const std::string& GetColstartindex() const;
    void SetColstartindex(const std::string& value);

    const std::string& GetColendmode() const;
    void SetColendmode(const std::string& value);

    const std::string& GetColendindex() const;
    void SetColendindex(const std::string& value);

private:
    std::string m_Rowspan;

    std::string m_Rowstartmode;

    std::string m_Rowstartindex;

    std::string m_Rowendmode;

    std::string m_Rowendindex;

    std::string m_Colspan;

    std::string m_Colstartmode;

    std::string m_Colstartindex;

    std::string m_Colendmode;

    std::string m_Colendindex;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SUBMATRIX_H
