#include "CFunction.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CFunction::CFunction() {}

CFunction::~CFunction() {}

const std::string& CFunction::GetOutputcode() const { return m_Outputcode; }

void CFunction::SetOutputcode(const std::string& value)
{
    m_Outputcode = value;
}

const std::string& CFunction::GetStartcode() const { return m_Startcode; }

void CFunction::SetStartcode(const std::string& value) { m_Startcode = value; }

const std::string& CFunction::GetInitializeconditionscode() const
{
    return m_Initializeconditionscode;
}

void CFunction::SetInitializeconditionscode(const std::string& value)
{
    m_Initializeconditionscode = value;
}

const std::string& CFunction::GetTerminatecode() const
{
    return m_Terminatecode;
}

void CFunction::SetTerminatecode(const std::string& value)
{
    m_Terminatecode = value;
}

const std::string& CFunction::GetCodegenusessimcustomcode() const
{
    return m_Codegenusessimcustomcode;
}

void CFunction::SetCodegenusessimcustomcode(const std::string& value)
{
    m_Codegenusessimcustomcode = value;
}

const std::string& CFunction::GetGeneratecodeasis() const
{
    return m_Generatecodeasis;
}

void CFunction::SetGeneratecodeasis(const std::string& value)
{
    m_Generatecodeasis = value;
}

const std::string& CFunction::GetCodegenoutputcode() const
{
    return m_Codegenoutputcode;
}

void CFunction::SetCodegenoutputcode(const std::string& value)
{
    m_Codegenoutputcode = value;
}

const std::string& CFunction::GetCodegenstartcode() const
{
    return m_Codegenstartcode;
}

void CFunction::SetCodegenstartcode(const std::string& value)
{
    m_Codegenstartcode = value;
}

const std::string& CFunction::GetCodegeninitializeconditionscode() const
{
    return m_Codegeninitializeconditionscode;
}

void CFunction::SetCodegeninitializeconditionscode(const std::string& value)
{
    m_Codegeninitializeconditionscode = value;
}

const std::string& CFunction::GetCodegenterminatecode() const
{
    return m_Codegenterminatecode;
}

void CFunction::SetCodegenterminatecode(const std::string& value)
{
    m_Codegenterminatecode = value;
}

const std::string& CFunction::GetPortspecwidgetparam() const
{
    return m_Portspecwidgetparam;
}

void CFunction::SetPortspecwidgetparam(const std::string& value)
{
    m_Portspecwidgetparam = value;
}

const std::string& CFunction::GetSymbolspec() const { return m_Symbolspec; }

void CFunction::SetSymbolspec(const std::string& value)
{
    m_Symbolspec = value;
}

const std::string& CFunction::GetAdditionaltypes() const
{
    return m_Additionaltypes;
}

void CFunction::SetAdditionaltypes(const std::string& value)
{
    m_Additionaltypes = value;
}

const std::string& CFunction::GetSampletime() const { return m_Sampletime; }

void CFunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& CFunction::GetSimcustomheaderfile() const
{
    return m_Simcustomheaderfile;
}

void CFunction::SetSimcustomheaderfile(const std::string& value)
{
    m_Simcustomheaderfile = value;
}

const std::string& CFunction::GetSimcustomsourcefile() const
{
    return m_Simcustomsourcefile;
}

void CFunction::SetSimcustomsourcefile(const std::string& value)
{
    m_Simcustomsourcefile = value;
}

const std::string& CFunction::GetCustomcodesettinglocation() const
{
    return m_Customcodesettinglocation;
}

void CFunction::SetCustomcodesettinglocation(const std::string& value)
{
    m_Customcodesettinglocation = value;
}

const std::string& CFunction::GetSimcustomlibraries() const
{
    return m_Simcustomlibraries;
}

void CFunction::SetSimcustomlibraries(const std::string& value)
{
    m_Simcustomlibraries = value;
}

const std::string& CFunction::GetSimcustomsearchdirectory() const
{
    return m_Simcustomsearchdirectory;
}

void CFunction::SetSimcustomsearchdirectory(const std::string& value)
{
    m_Simcustomsearchdirectory = value;
}

const std::string& CFunction::GetCustomheaderfile() const
{
    return m_Customheaderfile;
}

void CFunction::SetCustomheaderfile(const std::string& value)
{
    m_Customheaderfile = value;
}

const std::string& CFunction::GetCustomsourcefile() const
{
    return m_Customsourcefile;
}

void CFunction::SetCustomsourcefile(const std::string& value)
{
    m_Customsourcefile = value;
}

const std::string& CFunction::GetCustomlibraries() const
{
    return m_Customlibraries;
}

void CFunction::SetCustomlibraries(const std::string& value)
{
    m_Customlibraries = value;
}

const std::string& CFunction::GetCustomsearchdirectory() const
{
    return m_Customsearchdirectory;
}

void CFunction::SetCustomsearchdirectory(const std::string& value)
{
    m_Customsearchdirectory = value;
}

const std::string& CFunction::GetSimcustomdefines() const
{
    return m_Simcustomdefines;
}

void CFunction::SetSimcustomdefines(const std::string& value)
{
    m_Simcustomdefines = value;
}

const std::string& CFunction::GetSimcustomcompilerflags() const
{
    return m_Simcustomcompilerflags;
}

void CFunction::SetSimcustomcompilerflags(const std::string& value)
{
    m_Simcustomcompilerflags = value;
}

const std::string& CFunction::GetSimcustomlinkerflags() const
{
    return m_Simcustomlinkerflags;
}

void CFunction::SetSimcustomlinkerflags(const std::string& value)
{
    m_Simcustomlinkerflags = value;
}

const std::string& CFunction::GetCustomcodeismultiinstantiable() const
{
    return m_Customcodeismultiinstantiable;
}

void CFunction::SetCustomcodeismultiinstantiable(const std::string& value)
{
    m_Customcodeismultiinstantiable = value;
}

const std::string& CFunction::GetCustomdefines() const
{
    return m_Customdefines;
}

void CFunction::SetCustomdefines(const std::string& value)
{
    m_Customdefines = value;
}

const std::string& CFunction::GetCustomcompilerflags() const
{
    return m_Customcompilerflags;
}

void CFunction::SetCustomcompilerflags(const std::string& value)
{
    m_Customcompilerflags = value;
}

const std::string& CFunction::GetCustomlinkerflags() const
{
    return m_Customlinkerflags;
}

void CFunction::SetCustomlinkerflags(const std::string& value)
{
    m_Customlinkerflags = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
