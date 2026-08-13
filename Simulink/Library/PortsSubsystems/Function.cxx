#include "Function.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Function::Function() {}

Function::~Function() {}

const std::string& Function::GetTriggertype() const
{
    return m_Triggertype;
}

void Function::SetTriggertype(const std::string& value)
{
    m_Triggertype = value;
}

const std::string& Function::GetTriggertime() const
{
    return m_Triggertime;
}

void Function::SetTriggertime(const std::string& value)
{
    m_Triggertime = value;
}

const std::string& Function::GetScheduleasaperiodic() const
{
    return m_Scheduleasaperiodic;
}

void Function::SetScheduleasaperiodic(const std::string& value)
{
    m_Scheduleasaperiodic = value;
}

const std::string& Function::GetIssimulinkfunction() const
{
    return m_Issimulinkfunction;
}

void Function::SetIssimulinkfunction(const std::string& value)
{
    m_Issimulinkfunction = value;
}

const std::string& Function::GetAsynchronousfunction() const
{
    return m_Asynchronousfunction;
}

void Function::SetAsynchronousfunction(const std::string& value)
{
    m_Asynchronousfunction = value;
}

const std::string& Function::GetFunctionname() const
{
    return m_Functionname;
}

void Function::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& Function::GetFunctionvisibility() const
{
    return m_Functionvisibility;
}

void Function::SetFunctionvisibility(const std::string& value)
{
    m_Functionvisibility = value;
}

const std::string& Function::GetScopename() const
{
    return m_Scopename;
}

void Function::SetScopename(const std::string& value)
{
    m_Scopename = value;
}

const std::string& Function::GetVariant() const
{
    return m_Variant;
}

void Function::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& Function::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Function::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Function::GetGeneratepreprocessorconditionals() const
{
    return m_Generatepreprocessorconditionals;
}

void Function::SetGeneratepreprocessorconditionals(const std::string& value)
{
    m_Generatepreprocessorconditionals = value;
}

const std::string& Function::GetStateswhenenabling() const
{
    return m_Stateswhenenabling;
}

void Function::SetStateswhenenabling(const std::string& value)
{
    m_Stateswhenenabling = value;
}

const std::string& Function::GetPropagatevarsize() const
{
    return m_Propagatevarsize;
}

void Function::SetPropagatevarsize(const std::string& value)
{
    m_Propagatevarsize = value;
}

const std::string& Function::GetShowoutputport() const
{
    return m_Showoutputport;
}

void Function::SetShowoutputport(const std::string& value)
{
    m_Showoutputport = value;
}

const std::string& Function::GetOutputdatatype() const
{
    return m_Outputdatatype;
}

void Function::SetOutputdatatype(const std::string& value)
{
    m_Outputdatatype = value;
}

const std::string& Function::GetSampletimetype() const
{
    return m_Sampletimetype;
}

void Function::SetSampletimetype(const std::string& value)
{
    m_Sampletimetype = value;
}

const std::string& Function::GetSampletime() const
{
    return m_Sampletime;
}

void Function::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Function::GetZerocross() const
{
    return m_Zerocross;
}

void Function::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Function::GetInitialtriggersignalstate() const
{
    return m_Initialtriggersignalstate;
}

void Function::SetInitialtriggersignalstate(const std::string& value)
{
    m_Initialtriggersignalstate = value;
}

const std::string& Function::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Function::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Function::GetTriggersignalsampletime() const
{
    return m_Triggersignalsampletime;
}

void Function::SetTriggersignalsampletime(const std::string& value)
{
    m_Triggersignalsampletime = value;
}

const std::string& Function::GetOutmin() const
{
    return m_Outmin;
}

void Function::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Function::GetOutmax() const
{
    return m_Outmax;
}

void Function::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Function::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Function::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Function::GetInterpolate() const
{
    return m_Interpolate;
}

void Function::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Function::GetFunctionprototype() const
{
    return m_Functionprototype;
}

void Function::SetFunctionprototype(const std::string& value)
{
    m_Functionprototype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
