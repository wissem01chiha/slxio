#include "SimulinkSolverParameter.h"
#include "ConfigurationPCH.h"
#include "SimulinkSolver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

IParameterObjectBase* SimulinkSolverParameter::New()
{
    return new SimulinkSolverParameter(); // NOSONAR
}

std::string SimulinkSolverParameter::GetName() const { return "Solver"; };

DataType SimulinkSolverParameter::GetDataType() const
{
    return DataType::SLXIO_TYPE_SIMULINK_SOLVER;
}

UInt16 SimulinkSolverParameter::Size() const { return (UInt16)1; }

std::string slxio::SimulinkSolverParameter::ToString() const
{
    std::ostringstream oss;
    oss << "SimulinkSolverParameter {\n"
        << "  DisabledProps: " << m_data.DisabledProps << "\n"
        << "  Description: " << m_data.Description << "\n"
        << "  Components: " << m_data.Components << "\n"
        << "  StartTime: " << m_data.StartTime << "\n"
        << "  StopTime: " << m_data.StopTime << "\n"
        << "  AbsTol: " << m_data.AbsTol << "\n"
        << "  AutoScaleAbsTol: " << m_data.AutoScaleAbsTol << "\n"
        << "  FixedStep: " << m_data.FixedStep << "\n"
        << "  InitialStep: " << m_data.InitialStep << "\n"
        << "  MaxOrder: " << m_data.MaxOrder << "\n"
        << "  ZcThreshold: " << m_data.ZcThreshold << "\n"
        << "  ConsecutiveZCsStepRelTol: " << m_data.ConsecutiveZCsStepRelTol
        << "\n"
        << "  MaxConsecutiveZCs: " << m_data.MaxConsecutiveZCs << "\n"
        << "  ExtrapolationOrder: " << m_data.ExtrapolationOrder << "\n"
        << "  NumberNewtonIterations: " << m_data.NumberNewtonIterations << "\n"
        << "  MaxStep: " << m_data.MaxStep << "\n"
        << "  MinStep: " << m_data.MinStep << "\n"
        << "  MaxConsecutiveMinStep: " << m_data.MaxConsecutiveMinStep << "\n"
        << "  RelTol: " << m_data.RelTol << "\n"
        << "  EnableMultiTasking: " << m_data.EnableMultiTasking << "\n"
        << "  ConcurrentTasks: " << m_data.ConcurrentTasks << "\n"
        << "  Solver: " << m_data.Solver << "\n"
        << "  SolverName: " << m_data.SolverName << "\n"
        << "  SolverJacobianMethodControl: "
        << m_data.SolverJacobianMethodControl << "\n"
        << "  ShapePreserveControl: " << m_data.ShapePreserveControl << "\n"
        << "  ZeroCrossControl: " << m_data.ZeroCrossControl << "\n"
        << "  ZeroCrossAlgorithm: " << m_data.ZeroCrossAlgorithm << "\n"
        << "  AlgebraicLoopSolver: " << m_data.AlgebraicLoopSolver << "\n"
        << "  SolverInfoToggleStatus: " << m_data.SolverInfoToggleStatus << "\n"
        << "  IsAutoAppliedInSIP: " << m_data.IsAutoAppliedInSIP << "\n"
        << "  SolverResetMethod: " << m_data.SolverResetMethod << "\n"
        << "  PositivePriorityOrder: " << m_data.PositivePriorityOrder << "\n"
        << "  AutoInsertRateTranBlk: " << m_data.AutoInsertRateTranBlk << "\n"
        << "  SampleTimeConstrauint16: " << m_data.SampleTimeConstrauint16
        << "\n"
        << "  InsertRTBMode: " << m_data.InsertRTBMode << "\n"
        << "  SampleTimeProperty: " << m_data.SampleTimeProperty << "\n"
        << "  DecoupledContinuousuint16egration: "
        << m_data.DecoupledContinuousuint16egration << "\n"
        << "  MinimalZcImpactuint16egration: "
        << m_data.MinimalZcImpactuint16egration << "\n"
        << "  SolverOrder: " << m_data.SolverOrder << "\n"
        << "}";

    return oss.str();
}

SimulinkSolver& SimulinkSolverParameter::GetValue() { return m_data; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio