#include "Trigger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Trigger::Trigger() {}

Trigger::~Trigger() {}

const std::string& Trigger::GetTriggertype() const { return m_Triggertype; }

void Trigger::SetTriggertype(const std::string& value)
{
    m_Triggertype = value;
}

const std::string& Trigger::GetTriggertime() const { return m_Triggertime; }

void Trigger::SetTriggertime(const std::string& value)
{
    m_Triggertime = value;
}

const std::string& Trigger::GetScheduleasaperiodic() const
{
    return m_Scheduleasaperiodic;
}

void Trigger::SetScheduleasaperiodic(const std::string& value)
{
    m_Scheduleasaperiodic = value;
}

const std::string& Trigger::GetIssimulinkfunction() const
{
    return m_Issimulinkfunction;
}

void Trigger::SetIssimulinkfunction(const std::string& value)
{
    m_Issimulinkfunction = value;
}

const std::string& Trigger::GetAsynchronousfunction() const
{
    return m_Asynchronousfunction;
}

void Trigger::SetAsynchronousfunction(const std::string& value)
{
    m_Asynchronousfunction = value;
}

const std::string& Trigger::GetFunctionname() const { return m_Functionname; }

void Trigger::SetFunctionname(const std::string& value)
{
    m_Functionname = value;
}

const std::string& Trigger::GetFunctionvisibility() const
{
    return m_Functionvisibility;
}

void Trigger::SetFunctionvisibility(const std::string& value)
{
    m_Functionvisibility = value;
}

const std::string& Trigger::GetScopename() const { return m_Scopename; }

void Trigger::SetScopename(const std::string& value) { m_Scopename = value; }

const std::string& Trigger::GetVariant() const { return m_Variant; }

void Trigger::SetVariant(const std::string& value) { m_Variant = value; }

const std::string& Trigger::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Trigger::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Trigger::GetGeneratepreprocessorconditionals() const
{
    return m_Generatepreprocessorconditionals;
}

void Trigger::SetGeneratepreprocessorconditionals(const std::string& value)
{
    m_Generatepreprocessorconditionals = value;
}

const std::string& Trigger::GetStateswhenenabling() const
{
    return m_Stateswhenenabling;
}

void Trigger::SetStateswhenenabling(const std::string& value)
{
    m_Stateswhenenabling = value;
}

const std::string& Trigger::GetPropagatevarsize() const
{
    return m_Propagatevarsize;
}

void Trigger::SetPropagatevarsize(const std::string& value)
{
    m_Propagatevarsize = value;
}

const std::string& Trigger::GetShowoutputport() const
{
    return m_Showoutputport;
}

void Trigger::SetShowoutputport(const std::string& value)
{
    m_Showoutputport = value;
}

const std::string& Trigger::GetOutputdatatype() const
{
    return m_Outputdatatype;
}

void Trigger::SetOutputdatatype(const std::string& value)
{
    m_Outputdatatype = value;
}

const std::string& Trigger::GetSampletimetype() const
{
    return m_Sampletimetype;
}

void Trigger::SetSampletimetype(const std::string& value)
{
    m_Sampletimetype = value;
}

const std::string& Trigger::GetSampletime() const { return m_Sampletime; }

void Trigger::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Trigger::GetZerocross() const { return m_Zerocross; }

void Trigger::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Trigger::GetInitialtriggersignalstate() const
{
    return m_Initialtriggersignalstate;
}

void Trigger::SetInitialtriggersignalstate(const std::string& value)
{
    m_Initialtriggersignalstate = value;
}

const std::string& Trigger::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Trigger::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Trigger::GetTriggersignalsampletime() const
{
    return m_Triggersignalsampletime;
}

void Trigger::SetTriggersignalsampletime(const std::string& value)
{
    m_Triggersignalsampletime = value;
}

const std::string& Trigger::GetOutmin() const { return m_Outmin; }

void Trigger::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Trigger::GetOutmax() const { return m_Outmax; }

void Trigger::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Trigger::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Trigger::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Trigger::GetInterpolate() const { return m_Interpolate; }

void Trigger::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Trigger::GetFunctionprototype() const
{
    return m_Functionprototype;
}

void Trigger::SetFunctionprototype(const std::string& value)
{
    m_Functionprototype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
