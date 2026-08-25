#include "SimulinkSFSimParameter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

IParameterObjectBase* SimulinkSFSimParameter::New()
{
    return new SimulinkSFSimParameter(); // NOSONAR
}

std::string SimulinkSFSimParameter::GetName() const { return std::string(); }

DataType SimulinkSFSimParameter::GetDataType() const { return DataType(); }

UInt16 SimulinkSFSimParameter::Size() const { return UInt16(); }

std::string slxio::SimulinkSFSimParameter::ToString() const
{
    std::ostringstream oss;
    oss << "SimulinkSFSimParameter {\n"
        << "  DisabledProps: " << m_data.DisabledProps << "\n"
        << "  Description: " << m_data.Description << "\n"
        << "  Components: " << m_data.Components << "\n"
        << "  SimCustomSourceCode: " << m_data.SimCustomSourceCode << "\n"
        << "  SimCustomHeaderCode: " << m_data.SimCustomHeaderCode << "\n"
        << "  SimCustomInitializer: " << m_data.SimCustomInitializer << "\n"
        << "  SimCustomTerminator: " << m_data.SimCustomTerminator << "\n"
        << "  SimReservedNameArray: " << m_data.SimReservedNameArray << "\n"
        << "  SimUserSources: " << m_data.SimUserSources << "\n"
        << "  SimUserIncludeDirs: " << m_data.SimUserIncludeDirs << "\n"
        << "  SimUserLibraries: " << m_data.SimUserLibraries << "\n"
        << "  SimUserDefines: " << m_data.SimUserDefines << "\n"
        << "  SimCustomCompilerFlags: " << m_data.SimCustomCompilerFlags << "\n"
        << "  SimCustomLinkerFlags: " << m_data.SimCustomLinkerFlags << "\n"
        << "  SFSimEcho: " << m_data.SFSimEcho << "\n"
        << "  SimCtrlC: " << m_data.SimCtrlC << "\n"
        << "  Simuint16egrity: " << m_data.Simuint16egrity << "\n"
        << "  SimUseLocalCustomCode: " << m_data.SimUseLocalCustomCode << "\n"
        << "  SimParseCustomCode: " << m_data.SimParseCustomCode << "\n"
        << "  SimAnalyzeCustomCode: " << m_data.SimAnalyzeCustomCode << "\n"
        << "  SimBuildMode: " << m_data.SimBuildMode << "\n"
        << "  SimGenImportedTypeDefs: " << m_data.SimGenImportedTypeDefs << "\n"
        << "  ModelFunctionsGlobalVisibility: "
        << m_data.ModelFunctionsGlobalVisibility << "\n"
        << "  CompileTimeRecursionLimit: " << m_data.CompileTimeRecursionLimit
        << "\n"
        << "  EnableRuntimeRecursion: " << m_data.EnableRuntimeRecursion << "\n"
        << "  MATLABDynamicMemAlloc: " << m_data.MATLABDynamicMemAlloc << "\n"
        << "  MATLABDynamicMemAllocThreshold: "
        << m_data.MATLABDynamicMemAllocThreshold << "\n"
        << "  CustomCodeFunctionArrayLayout: "
        << m_data.CustomCodeFunctionArrayLayout << "\n"
        << "  DefaultCustomCodeFunctionArrayLayout: "
        << m_data.DefaultCustomCodeFunctionArrayLayout << "\n"
        << "}";

    return oss.str();
}

SimulinkSFSim& SimulinkSFSimParameter::GetValue() { return m_data; }

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio