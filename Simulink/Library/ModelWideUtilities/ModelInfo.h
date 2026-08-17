// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MODELINFO_H
#define MODELINFO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ModelInfo : public IBlockParameters,
                                  public IBlockProperties
{
public:
    /** Default Constructor */
    ModelInfo();

    /** Default Destructor */
    ~ModelInfo();

    const std::string& GetFrame() const;
    void SetFrame(const std::string& value);

    const std::string& GetDisplaystringwithtags() const;
    void SetDisplaystringwithtags(const std::string& value);

    const std::string& GetMaskdisplaystring() const;
    void SetMaskdisplaystring(const std::string& value);

    const std::string& GetHorizontaltextalignment() const;
    void SetHorizontaltextalignment(const std::string& value);

    const std::string& GetLeftalignmentvalue() const;
    void SetLeftalignmentvalue(const std::string& value);

private:
    std::string m_Frame;

    std::string m_Displaystringwithtags;

    std::string m_Maskdisplaystring;

    std::string m_Horizontaltextalignment;

    std::string m_Leftalignmentvalue;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MODELINFO_H
