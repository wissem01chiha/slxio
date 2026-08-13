#include "F.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

F::F() {}

F::~F() {}

const std::string& F::GetTriggertype() const
{
    return m_Triggertype;
}

void F::SetTriggertype(const std::string& value)
{
    m_Triggertype = value;
}

const std::string& F::GetTriggertime() const
{
    return m_Triggertime;
}

void F::SetTriggertime(const std::string& value)
{
    m_Triggertime = value;
}

const std::string& F::GetScheduleasaperiodic() const
{
    return m_Scheduleasaperiodic;
}

void F::SetScheduleasaperiodic(const std::string& value)
{
    m_Scheduleasaperiodic = value;
}

const std::string& F::GetIssimulinkfunction() const
{
    return m_Issimulinkfunction;
}

void F::SetIssimulinkfunction(const std::string& value)
{
    m_Issimulinkfunction = value;
}

const std::string& F::GetAsynchronousfunction() const
{
    return m_Asynchronousfunction;
}

void F::SetAsynchronousfunction(const std::string& value)
{
    m_Asynchronousfunction = value;
}

const std::string& F::GetFunctionname() const
{
    return m_Functionname;
}

void F::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& F::GetFunctionvisibility() const
{
    return m_Functionvisibility;
}

void F::SetFunctionvisibility(const std::string& value)
{
    m_Functionvisibility = value;
}

const std::string& F::GetScopename() const
{
    return m_Scopename;
}

void F::SetScopename(const std::string& value)
{
    m_Scopename = value;
}

const std::string& F::GetVariant() const
{
    return m_Variant;
}

void F::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& F::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void F::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& F::GetGeneratepreprocessorconditionals() const
{
    return m_Generatepreprocessorconditionals;
}

void F::SetGeneratepreprocessorconditionals(const std::string& value)
{
    m_Generatepreprocessorconditionals = value;
}

const std::string& F::GetStateswhenenabling() const
{
    return m_Stateswhenenabling;
}

void F::SetStateswhenenabling(const std::string& value)
{
    m_Stateswhenenabling = value;
}

const std::string& F::GetPropagatevarsize() const
{
    return m_Propagatevarsize;
}

void F::SetPropagatevarsize(const std::string& value)
{
    m_Propagatevarsize = value;
}

const std::string& F::GetShowoutputport() const
{
    return m_Showoutputport;
}

void F::SetShowoutputport(const std::string& value)
{
    m_Showoutputport = value;
}

const std::string& F::GetOutputdatatype() const
{
    return m_Outputdatatype;
}

void F::SetOutputdatatype(const std::string& value)
{
    m_Outputdatatype = value;
}

const std::string& F::GetSampletimetype() const
{
    return m_Sampletimetype;
}

void F::SetSampletimetype(const std::string& value)
{
    m_Sampletimetype = value;
}

const std::string& F::GetSampletime() const
{
    return m_Sampletime;
}

void F::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& F::GetZerocross() const
{
    return m_Zerocross;
}

void F::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& F::GetInitialtriggersignalstate() const
{
    return m_Initialtriggersignalstate;
}

void F::SetInitialtriggersignalstate(const std::string& value)
{
    m_Initialtriggersignalstate = value;
}

const std::string& F::GetPortdimensions() const
{
    return m_Portdimensions;
}

void F::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& F::GetTriggersignalsampletime() const
{
    return m_Triggersignalsampletime;
}

void F::SetTriggersignalsampletime(const std::string& value)
{
    m_Triggersignalsampletime = value;
}

const std::string& F::GetOutmin() const
{
    return m_Outmin;
}

void F::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& F::GetOutmax() const
{
    return m_Outmax;
}

void F::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& F::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void F::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& F::GetInterpolate() const
{
    return m_Interpolate;
}

void F::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& F::GetFunctionprototype() const
{
    return m_Functionprototype;
}

void F::SetFunctionprototype(const std::string& value)
{
    m_Functionprototype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
