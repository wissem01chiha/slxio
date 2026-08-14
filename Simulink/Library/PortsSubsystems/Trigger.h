// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRIGGER_H
#define TRIGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Trigger : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    Trigger();

    /** Default Destructor */
    ~Trigger();

    const std::string& GetTriggertype() const;
    void SetTriggertype(const std::string& value);

    const std::string& GetTriggertime() const;
    void SetTriggertime(const std::string& value);

    const std::string& GetScheduleasaperiodic() const;
    void SetScheduleasaperiodic(const std::string& value);

    const std::string& GetIssimulinkfunction() const;
    void SetIssimulinkfunction(const std::string& value);

    const std::string& GetAsynchronousfunction() const;
    void SetAsynchronousfunction(const std::string& value);

    const std::string& GetFunctionname() const;
    void SetFunctionname(const std::string& value);

    const std::string& GetFunctionvisibility() const;
    void SetFunctionvisibility(const std::string& value);

    const std::string& GetScopename() const;
    void SetScopename(const std::string& value);

    const std::string& GetVariant() const;
    void SetVariant(const std::string& value);

    const std::string& GetVariantcontrol() const;
    void SetVariantcontrol(const std::string& value);

    const std::string& GetGeneratepreprocessorconditionals() const;
    void SetGeneratepreprocessorconditionals(const std::string& value);

    const std::string& GetStateswhenenabling() const;
    void SetStateswhenenabling(const std::string& value);

    const std::string& GetPropagatevarsize() const;
    void SetPropagatevarsize(const std::string& value);

    const std::string& GetShowoutputport() const;
    void SetShowoutputport(const std::string& value);

    const std::string& GetOutputdatatype() const;
    void SetOutputdatatype(const std::string& value);

    const std::string& GetSampletimetype() const;
    void SetSampletimetype(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetZerocross() const;
    void SetZerocross(const std::string& value);

    const std::string& GetInitialtriggersignalstate() const;
    void SetInitialtriggersignalstate(const std::string& value);

    const std::string& GetPortdimensions() const;
    void SetPortdimensions(const std::string& value);

    const std::string& GetTriggersignalsampletime() const;
    void SetTriggersignalsampletime(const std::string& value);

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetInterpolate() const;
    void SetInterpolate(const std::string& value);

    const std::string& GetFunctionprototype() const;
    void SetFunctionprototype(const std::string& value);

private:
    std::string m_Triggertype;

    std::string m_Triggertime;

    std::string m_Scheduleasaperiodic;

    std::string m_Issimulinkfunction;

    std::string m_Asynchronousfunction;

    std::string m_Functionname;

    std::string m_Functionvisibility;

    std::string m_Scopename;

    std::string m_Variant;

    std::string m_Variantcontrol;

    std::string m_Generatepreprocessorconditionals;

    std::string m_Stateswhenenabling;

    std::string m_Propagatevarsize;

    std::string m_Showoutputport;

    std::string m_Outputdatatype;

    std::string m_Sampletimetype;

    std::string m_Sampletime;

    std::string m_Zerocross;

    std::string m_Initialtriggersignalstate;

    std::string m_Portdimensions;

    std::string m_Triggersignalsampletime;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Outdatatypestr;

    std::string m_Interpolate;

    std::string m_Functionprototype;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRIGGER_H
