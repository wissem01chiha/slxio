/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "SimulinkBlockType.h"

namespace slxio
{

    std::string ToString(SimulinkBlockType type)
    {
        switch (type)
        {
        case SimulinkBlockType::BusCreator: return "BusCreator";
        case SimulinkBlockType::BusSelector: return "BusSelector";
        case SimulinkBlockType::Constant: return "Constant";
        case SimulinkBlockType::Delay: return "Delay";
        case SimulinkBlockType::Demux: return "Demux";
        case SimulinkBlockType::DiscreteTimeIntegrator: return "DiscreteTimeIntegrator";
        case SimulinkBlockType::Gain: return "Gain";
        case SimulinkBlockType::Ground: return "Ground";
        case SimulinkBlockType::In1: return "In1";
        case SimulinkBlockType::Integrator: return "Integrator";
        case SimulinkBlockType::LogicalOperator: return "LogicalOperator";
        case SimulinkBlockType::Mux: return "Mux";
        case SimulinkBlockType::Out1: return "Out1";
        case SimulinkBlockType::Product: return "Product";
        case SimulinkBlockType::RelationalOperator: return "RelationalOperator";
        case SimulinkBlockType::Saturation: return "Saturation";
        case SimulinkBlockType::Scope: return "Scope";
        case SimulinkBlockType::Subsystem: return "Subsystem";
        case SimulinkBlockType::Sum: return "Sum";
        case SimulinkBlockType::Switch: return "Switch";
        case SimulinkBlockType::Terminator: return "Terminator";
        case SimulinkBlockType::VectorConcatenate: return "VectorConcatenate";
        case SimulinkBlockType::Derivative: return "Derivative";
        case SimulinkBlockType::IntegratorLimited: return "IntegratorLimited";
        case SimulinkBlockType::IntegratorSecondOrder: return "IntegratorSecondOrder";
        case SimulinkBlockType::PidController: return "PidController";
        case SimulinkBlockType::StateSpace: return "StateSpace";
        case SimulinkBlockType::TransferFcn: return "TransferFcn";
        case SimulinkBlockType::TransportDelay: return "TransportDelay";
        case SimulinkBlockType::ZeroPole: return "ZeroPole";
        case SimulinkBlockType::Backlash: return "Backlash";
        case SimulinkBlockType::CoulombViscousFriction: return "CoulombViscousFriction";
        case SimulinkBlockType::DeadZone: return "DeadZone";
        case SimulinkBlockType::HitCrossing: return "HitCrossing";
        case SimulinkBlockType::Pwm: return "Pwm";
        case SimulinkBlockType::Quantizer: return "Quantizer";
        case SimulinkBlockType::Relay: return "Relay";
        case SimulinkBlockType::SaturationDynamic: return "SaturationDynamic";
        case SimulinkBlockType::VariablePulseGenerator: return "VariablePulseGenerator";
        case SimulinkBlockType::WrapToZero: return "WrapToZero";
        case SimulinkBlockType::DiscreteDerivative: return "DiscreteDerivative";
        case SimulinkBlockType::DiscreteFilter: return "DiscreteFilter";
        case SimulinkBlockType::DiscreteFIRFilter: return "DiscreteFIRFilter";
        case SimulinkBlockType::DiscretePIDController: return "DiscretePIDController";
        case SimulinkBlockType::DiscreteStateSpace: return "DiscreteStateSpace";
        case SimulinkBlockType::DiscreteTransferFcn: return "DiscreteTransferFcn";
        case SimulinkBlockType::DiscreteZeroPole: return "DiscreteZeroPole";
        case SimulinkBlockType::EnabledDelay: return "EnabledDelay";
        case SimulinkBlockType::Memory: return "Memory";
        case SimulinkBlockType::UnitDelay: return "UnitDelay";
        case SimulinkBlockType::ZeroOrderHold: return "ZeroOrderHold";
        case SimulinkBlockType::BitClear: return "BitClear";
        case SimulinkBlockType::BitSet: return "BitSet";
        case SimulinkBlockType::BitToIntegerConverter: return "BitToIntegerConverter";
        case SimulinkBlockType::BitwiseOperator: return "BitwiseOperator";
        case SimulinkBlockType::CombinatorialLogic: return "CombinatorialLogic";
        case SimulinkBlockType::CompareToConstant: return "CompareToConstant";
        case SimulinkBlockType::CompareToZero: return "CompareToZero";
        case SimulinkBlockType::DetectChange: return "DetectChange";
        case SimulinkBlockType::DetectIncrease: return "DetectIncrease";
        case SimulinkBlockType::ExtractBits: return "ExtractBits";
        case SimulinkBlockType::IntegerToBitConverter: return "IntegerToBitConverter";
        case SimulinkBlockType::LogicalOperatorLogic: return "LogicalOperatorLogic";
        case SimulinkBlockType::RelationalOperatorLogic: return "RelationalOperatorLogic";
        case SimulinkBlockType::ShiftArithmetic: return "ShiftArithmetic";
        case SimulinkBlockType::Cosine: return "Cosine";
        case SimulinkBlockType::D1DLookupTable: return "D1DLookupTable";
        case SimulinkBlockType::D2DLookupTable: return "D2DLookupTable";
        case SimulinkBlockType::DirectLookupTableND: return "DirectLookupTableND";
        case SimulinkBlockType::InterpolationUsingPrelookup: return "InterpolationUsingPrelookup";
        case SimulinkBlockType::LookupTableDynamic: return "LookupTableDynamic";
        case SimulinkBlockType::NDLookupTable: return "NDLookupTable";
        case SimulinkBlockType::Prelookup: return "Prelookup";
        case SimulinkBlockType::Sine: return "Sine";
        case SimulinkBlockType::Abs: return "Abs";
        case SimulinkBlockType::Add: return "Add";
        case SimulinkBlockType::AlgebraicConstraint: return "AlgebraicConstraint";
        case SimulinkBlockType::Bias: return "Bias";
        case SimulinkBlockType::ComplexToMagnitudeAngle: return "ComplexToMagnitudeAngle";
        case SimulinkBlockType::Divide: return "Divide";
        case SimulinkBlockType::DotProduct: return "DotProduct";
        case SimulinkBlockType::GainMath: return "GainMath";
        case SimulinkBlockType::Polynomial: return "Polynomial";
        case SimulinkBlockType::ProductOfElements: return "ProductOfElements";
        case SimulinkBlockType::ReciprocalSqrt: return "ReciprocalSqrt";
        case SimulinkBlockType::Reshape: return "Reshape";
        case SimulinkBlockType::RoundingFunction: return "RoundingFunction";
        case SimulinkBlockType::Sign: return "Sign";
        case SimulinkBlockType::Sqrt: return "Sqrt";
        case SimulinkBlockType::Subtract: return "Subtract";
        case SimulinkBlockType::SumOfElements: return "SumOfElements";
        case SimulinkBlockType::TrigonometricFunction: return "TrigonometricFunction";
        case SimulinkBlockType::UnaryMinus: return "UnaryMinus";
        case SimulinkBlockType::WeightedSampleTimeMath: return "WeightedSampleTimeMath";
        case SimulinkBlockType::CreateDiagonalMatrix: return "CreateDiagonalMatrix";
        case SimulinkBlockType::CrossProduct: return "CrossProduct";
        case SimulinkBlockType::ExpandScalar: return "ExpandScalar";
        case SimulinkBlockType::ExtractDiagonal: return "ExtractDiagonal";
        case SimulinkBlockType::HermitianTranspose: return "HermitianTranspose";
        case SimulinkBlockType::IdentityMatrix: return "IdentityMatrix";
        case SimulinkBlockType::IsHermitian: return "IsHermitian";
        case SimulinkBlockType::IsSymmetric: return "IsSymmetric";
        case SimulinkBlockType::IsTriangular: return "IsTriangular";
        case SimulinkBlockType::MatrixMultiply: return "MatrixMultiply";
        case SimulinkBlockType::MatrixSquare: return "MatrixSquare";
        case SimulinkBlockType::PermuteMatrix: return "PermuteMatrix";
        case SimulinkBlockType::PixelProcessingSubsystem: return "PixelProcessingSubsystem";
        case SimulinkBlockType::Submatrix: return "Submatrix";
        case SimulinkBlockType::Transpose: return "Transpose";
        case SimulinkBlockType::HitCrossingProbe: return "HitCrossingProbe";
        case SimulinkBlockType::HitScheduler: return "HitScheduler";
        case SimulinkBlockType::MessageMerge: return "MessageMerge";
        case SimulinkBlockType::MessagePollingSubsystem: return "MessagePollingSubsystem";
        case SimulinkBlockType::MessageTriggeredSubsystem: return "MessageTriggeredSubsystem";
        case SimulinkBlockType::Queue: return "Queue";
        case SimulinkBlockType::Receive: return "Receive";
        case SimulinkBlockType::Send: return "Send";
        case SimulinkBlockType::SequenceViewer: return "SequenceViewer";
        case SimulinkBlockType::Assertion: return "Assertion";
        case SimulinkBlockType::CheckDiscreteGradient: return "CheckDiscreteGradient";
        case SimulinkBlockType::CheckDynamicGap: return "CheckDynamicGap";
        case SimulinkBlockType::CheckDynamicLowerBound: return "CheckDynamicLowerBound";
        case SimulinkBlockType::CheckDynamicRange: return "CheckDynamicRange";
        case SimulinkBlockType::CheckDynamicUpperBound: return "CheckDynamicUpperBound";
        case SimulinkBlockType::CheckInputResolution: return "CheckInputResolution";
        case SimulinkBlockType::CheckStaticGap: return "CheckStaticGap";
        case SimulinkBlockType::CheckStaticLowerBound: return "CheckStaticLowerBound";
        case SimulinkBlockType::CheckStaticRange: return "CheckStaticRange";
        case SimulinkBlockType::CheckStaticUpperBound: return "CheckStaticUpperBound";
        case SimulinkBlockType::BlockSupportTable: return "BlockSupportTable";
        case SimulinkBlockType::Docblock: return "Docblock";
        case SimulinkBlockType::ModelInfo: return "ModelInfo";
        case SimulinkBlockType::TimedBasedLinearization: return "TimedBasedLinearization";
        case SimulinkBlockType::TriggerBasedLinearization: return "TriggerBasedLinearization";
        case SimulinkBlockType::AtomicSubsystem: return "AtomicSubsystem";
        case SimulinkBlockType::CodereuseSubsystem: return "CodereuseSubsystem";
        case SimulinkBlockType::Enable: return "Enable";
        case SimulinkBlockType::EnabledAndTriggeredSubsystem: return "EnabledAndTriggeredSubsystem";
        case SimulinkBlockType::EnabledSubsystem: return "EnabledSubsystem";
        case SimulinkBlockType::ForEachSubsystem: return "ForEachSubsystem";
        case SimulinkBlockType::ForIteratorSubsystem: return "ForIteratorSubsystem";
        case SimulinkBlockType::FunctionCallFeedbackLatch: return "FunctionCallFeedbackLatch";
        case SimulinkBlockType::FunctionCallGenerator: return "FunctionCallGenerator";
        case SimulinkBlockType::FunctionCallSplit: return "FunctionCallSplit";
        case SimulinkBlockType::FunctionCallSubsystem: return "FunctionCallSubsystem";
        case SimulinkBlockType::FunctionElement: return "FunctionElement";
        case SimulinkBlockType::FunctionElementCall: return "FunctionElementCall";
        case SimulinkBlockType::If: return "If";
        case SimulinkBlockType::IfActionSubsystem: return "IfActionSubsystem";
        case SimulinkBlockType::In1Ports: return "In1Ports";
        case SimulinkBlockType::InBusElement: return "InBusElement";
        case SimulinkBlockType::Model: return "Model";
        case SimulinkBlockType::Out1Ports: return "Out1Ports";
        case SimulinkBlockType::OutBusElement: return "OutBusElement";
        case SimulinkBlockType::ResettableSubsystem: return "ResettableSubsystem";
        case SimulinkBlockType::SubsystemPorts: return "SubsystemPorts";
        case SimulinkBlockType::SubsystemExamples: return "SubsystemExamples";
        case SimulinkBlockType::SubsystemReference: return "SubsystemReference";
        case SimulinkBlockType::SwitchCase: return "SwitchCase";
        case SimulinkBlockType::SwitchCaseActionSubsystem: return "SwitchCaseActionSubsystem";
        case SimulinkBlockType::Trigger: return "Trigger";
        case SimulinkBlockType::TriggeredSubsystem: return "TriggeredSubsystem";
        case SimulinkBlockType::UnitSystemConfiguration: return "UnitSystemConfiguration";
        case SimulinkBlockType::VariantAssemblySubsystem: return "VariantAssemblySubsystem";
        case SimulinkBlockType::VariantModel: return "VariantModel";
        case SimulinkBlockType::VariantSubsystem: return "VariantSubsystem";
        case SimulinkBlockType::WhileIteratorSubsystem: return "WhileIteratorSubsystem";
        case SimulinkBlockType::Accumulator: return "Accumulator";
        case SimulinkBlockType::Acos: return "Acos";
        case SimulinkBlockType::Acosh: return "Acosh";
        case SimulinkBlockType::AddConstant: return "AddConstant";
        case SimulinkBlockType::And: return "And";
        case SimulinkBlockType::Asin: return "Asin";
        case SimulinkBlockType::Asinh: return "Asinh";
        case SimulinkBlockType::Atan: return "Atan";
        case SimulinkBlockType::Atan2: return "Atan2";
        case SimulinkBlockType::Atan2Cordic: return "Atan2Cordic";
        case SimulinkBlockType::Atanh: return "Atanh";
        case SimulinkBlockType::BitwiseAnd: return "BitwiseAnd";
        case SimulinkBlockType::BitwiseNand: return "BitwiseNand";
        case SimulinkBlockType::BitwiseNor: return "BitwiseNor";
        case SimulinkBlockType::BitwiseNot: return "BitwiseNot";
        case SimulinkBlockType::BitwiseOr: return "BitwiseOr";
        case SimulinkBlockType::BitwiseXor: return "BitwiseXor";
        case SimulinkBlockType::Cast: return "Cast";
        case SimulinkBlockType::CastToBoolean: return "CastToBoolean";
        case SimulinkBlockType::CastToDouble: return "CastToDouble";
        case SimulinkBlockType::CastToSingle: return "CastToSingle";
        case SimulinkBlockType::CCCodeBlock: return "CCCodeBlock";
        default:
            return "";
        }
    }
    
}; // namespace slxio
