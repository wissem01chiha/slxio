// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SLXPARAMETER_H
#define SLXPARAMETER_H

#include "ABINamespace.h"
#include "Type.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SlxParameter
 * @brief This class contains constants used by the Simulink model Parser.
 * These constants are section and parameter names that refer to the Slx file.
 * Section and parameters are distinguished by the prefix of the constants
 * (SECTION vs PARAM). The remainder of the constant is just like the name in
 * the slx file. We use mixed case here to express the case differences found in
 * the slx file, e.g. 'Name' vs 'name'.
 * @warning Do not include this file in a header (*.h, *.hpp, *.hxx).
 *          It is intended for use only in source files (*.cxx, *.cpp, *.c).
 * @note this file do not provide any related cxx implementation
 */
class APIEXPORT SlxParameter {
public:
  /** @brief  Color code red. */
  static inline const char *COLOR_Red = "red";

  /** @brief  Color code yellow. */
  static inline const char *COLOR_Yellow = "yellow";

  /** @brief  Color code white. */
  static inline const char *COLOR_White = "white";

  /** @brief  Color code green. */
  static inline const char *COLOR_Green = "green";

  /** @brief  Color code cyan. */
  static inline const char *COLOR_Cyan = "cyan";

  /** @brief  Color code blue. */
  static inline const char *COLOR_Blue = "blue";

  /** @brief  Color code black. */
  static inline const char *COLOR_Black = "black";

  /** @brief  Color code orange. */
  static inline const char *COLOR_Orange = "orange";

  /** @brief  Color code light blue. */
  static inline const char *COLOR_LightBlue = "lightBlue";

  /** @brief  Model section. */
  static inline const char *SECTION_Model = "Model";

  /** @brief  Model information. */
  static inline const char *SECTION_ModelInformation = "ModelInformation";

  /** @brief  Stateflow section. */
  static inline const char *SECTION_Stateflow = "Stateflow";

  /** @brief  Children section. */
  static inline const char *SECTION_Children = "Children";

  /** @brief  Library section. */
  static inline const char *SECTION_Library = "Library";

  /** @brief  Destination section in Stateflow transitions. */
  static inline const char *SECTION_dst = "dst";

  /** @brief  Source section in Stateflow transitions. */
  static inline const char *SECTION_src = "src";

  /** @brief  Transition section (Stateflow) */
  static inline const char *SECTION_transition = "transition";

  /** @brief  Junction section (Stateflow) */
  static inline const char *SECTION_junction = "junction";

  /** @brief  Event section (Stateflow) */
  static inline const char *SECTION_event = "event";

  /** @brief  Data section (Stateflow) */
  static inline const char *SECTION_data = "data";

  /** @brief  Target section (Stateflow) */
  static inline const char *SECTION_target = "target";

  /** @brief  Instance section (Stateflow) */
  static inline const char *SECTION_instance = "instance";

  /** @brief  State section (Stateflow) */
  static inline const char *SECTION_state = "state";

  /** @brief  Chart section (Stateflow) */
  static inline const char *SECTION_chart = "chart";

  /** @brief  Machine section (Stateflow) */
  static inline const char *SECTION_machine = "machine";

  /** @brief  Block parameter defaults section. */
  static inline const char *SECTION_BlockParameterDefaults =
      "BlockParameterDefaults";

  /** @brief  Block defaults section. */
  static inline const char *SECTION_BlockDefaults = "BlockDefaults";

  /** @brief  System defaults section. */
  static inline const char *SECTION_SystemDefaults = "SystemDefaults";

  /** @brief  Annotation defaults section. */
  static inline const char *SECTION_AnnotationDefaults = "AnnotationDefaults";

  /** @brief  Line defaults section. */
  static inline const char *SECTION_LineDefaults = "LineDefaults";

  /** @brief  Block section. */
  static inline const char *SECTION_Block = "Block";

  /** @brief  Array section. */
  static inline const char *SECTION_Array = "Array";

  /** @brief  SimulationSettings section. */
  static inline const char *SECTION_SimulationSettings = "SimulationSettings";

  /** @brief  Parameter section. */
  static inline const char *SECTION_Parameter = "P";

  /** @brief  System section. */
  static inline const char *SECTION_System = "System";

  /** @brief  Branch section. */
  static inline const char *SECTION_Branch = "Branch";

  /** @brief  Line section. */
  static inline const char *SECTION_Line = "Line";

  /** @brief  Annotation section. */
  static inline const char *SECTION_Annotation = "Annotation";

  /** @brief  Object section. */
  static inline const char *SECTION_Object = "Object";

  /** @brief ConfigSet section */
  static inline const char *SECTION_ConfigSet = "ConfigSet";

  /** @brief ConfigSet object class name */
  static inline const char *PARAM_ConfigSet = "Simulink.ConfigSet";

  /** @brief  Name parameter. */
  static inline const char *PARAM_Name = "Name";

  /** @brief  Ref parameter. */
  static inline const char *PARAM_Ref = "Ref";

  /** @brief  Slx model name parameter. */
  static inline const char *PARAM_SlxModelName = "model_";

  /** @brief  Class parameter. */
  static inline const char *PARAM_Class = "Class";

  /** @brief  Tree node parameter for parent relationship (Stateflow) */
  static inline const char *PARAM_treeNode = "treeNode";

  /** @brief  Link node parameter for parent relationship (Stateflow) */
  static inline const char *PARAM_linkNode = "linkNode";

  /** @brief  State label (Stateflow) */
  static inline const char *PARAM_labelchar = "labelchar*";

  /** @brief  Junction type (Stateflow) */
  static inline const char *PARAM_type = "type";

  /** @brief  Machine parameter (Stateflow) */
  static inline const char *PARAM_machine = "machine";

  /** @brief  Icon shape. */
  static inline const char *PARAM_IconShape = "IconShape";

  /** @brief  Id (Stateflow) */
  static inline const char *PARAM_id = "id";

  /** @brief  Inputs */
  static inline const char *PARAM_Inputs = "Inputs";

  /** @brief  Name (Stateflow) */
  static inline const char *PARAM_name = "name";

  /** @brief  Points (used for lines). */
  static inline const char *PARAM_Points = "Points";

  /** @brief  Intersection (used for stateflow transitions). */
  static inline const char *PARAM_intersection = "intersection";

  /** @brief  Position (of blocks). */
  static inline const char *PARAM_Position = "Position";

  /** @brief  Foreground color (of blocks) */
  static inline const char *PARAM_ForegroundColor = "ForegroundColor";

  /** @brief  Background color (of blocks) */
  static inline const char *PARAM_BackgroundColor = "BackgroundColor";

  /** @brief  Block type parameter. */
  static inline const char *PARAM_BlockType = "BlockType";

  /** @brief  SID parameter. */
  static inline const char *PARAM_SID = "SID";

  /** @brief  SSID parameter. */
  static inline const char *PARAM_SSID = "SSID";

  /** @brief  Subviewer parameter. */
  static inline const char *PARAM_subviewer = "subviewer";

  /** @brief  PropName parameter. */
  static inline const char *PARAM_PropName = "PropName";

  /** @brief  ObjectID parameter. */
  static inline const char *PARAM_ObjectID = "ObjectID";

  /** @brief  ClassName parameter. */
  static inline const char *PARAM_ClassName = "ClassName";

  /** @brief  Type parameter. */
  static inline const char *PARAM_Type = "Type";

  /** @brief  Dimension parameter. */
  static inline const char *PARAM_Dimension = "Dimension";

  /** @brief  Destination block parameter. */
  static inline const char *PARAM_DstBlock = "DstBlock";

  /** @brief  Source parameter. */
  static inline const char *PARAM_Src = "Src";

  /** @brief  Source port parameter. */
  static inline const char *PARAM_SrcPort = "SrcPort";

  /** @brief  Destination parameter. */
  static inline const char *PARAM_Dst = "Dst";

  /** @brief  Destination port parameter. */
  static inline const char *PARAM_DstPort = "DstPort";

  /** @brief  Source block parameter. */
  static inline const char *PARAM_SrcBlock = "SrcBlock";

  /** @brief  Ports parameter. */
  static inline const char *PARAM_Ports = "Ports";

  /** @brief  Port parameter. */
  static inline const char *PARAM_Port = "Port";

  /** @brief  Targetlink data parameter. */
  static inline const char *PARAM_TARGETLINK_DATA = "data";

  /** @brief  The parameter that specifies the referenced type for a reference.
   */
  static inline const char *PARAM_SourceType = "SourceType";

  /** @brief  Mask value char* parameter */
  static inline const char *PARAM_MaskValuechar = "MaskValuechar*";

  /** @brief  Model name parameter. */
  static inline const char *PARAM_ModelName = "ModelName";

  /** @brief  Model name dialog parameter. */
  static inline const char *PARAM_ModelNameDialog = "ModelNameDialog";

  /** @brief  Source block parameter. */
  static inline const char *PARAM_SourceBlock = "SourceBlock";

  /** @brief  Value parameter. */
  static inline const char *PARAM_Value = "Value";

  /** @brief  "Simulink mask parameter" parameter used in objects. */
  static inline const char *PARAM_Simulink_MaskParameter =
      "Simulink.MaskParameter";

  /** @brief  Simulink mask parameter. */
  static inline const char *PARAM_Simulink_Mask = "Simulink.Mask";

  /** @brief  Parameter storing the computed model version. */
  static inline const char *PARAM_ComputedModelVersion = "ComputedModelVersion";

  /** @brief  Parameter storing the model's version. */
  static inline const char *PARAM_Version = "Version";

  /** @brief  Parameter for whether the name is shown. */
  static inline const char *PARAM_ShowName = "ShowName";

  /** @brief  Parameter for the name of the font used. */
  static inline const char *PARAM_FontName = "FontName";

  /** @brief  Parameter for the size of the font used. */
  static inline const char *PARAM_FontSize = "FontSize";

  /** @brief  Parameter for the weight of the font (i.e. bold). */
  static inline const char *PARAM_FontWeight = "FontWeight";

  /** @brief  Parameter for the angle of the font (i.e. italic). */
  static inline const char *PARAM_FontAngle = "FontAngle";

  /** @brief  Parameter for the placement of the name label. */
  static inline const char *PARAM_NamePlacement = "NamePlacement";

  /** @brief  Parameter for the labels of a line. */
  static inline const char *PARAM_Labels = "Labels";

  /** @brief  Parameter for drop shadow. */
  static inline const char *PARAM_DropShadow = "DropShadow";

  /** @brief  Parameter for block mirroring. */
  static inline const char *PARAM_BlockMirror = "BlockMirror";

  /** @brief  Parameter for block orientation. */
  static inline const char *PARAM_Orientation = "Orientation";

  /** @brief  Parameter for block rotation. */
  static inline const char *PARAM_BlockRotation = "BlockRotation";

  /** @brief  Parameter for port label visibility. */
  static inline const char *PARAM_ShowPortLabels = "ShowPortLabels";

  /** @brief  Simulink block type 'Abs'. */
  static inline const char *TYPE_Abs = "Abs";

  /** @brief  Simulink block type 'Assertion'. */
  static inline const char *TYPE_Assertion = "Assertion";

  /** @brief  Simulink block type 'Assignment'. */
  static inline const char *TYPE_Assignment = "Assignment";

  /** @brief  Simulink block type 'Backlash'. */
  static inline const char *TYPE_Backlash = "Backlash";

  /** @brief  Simulink block type 'Bias'. */
  static inline const char *TYPE_Bias = "Bias";

  /** @brief  Simulink block type 'BusAssignment'. */
  static inline const char *TYPE_BusAssignment = "BusAssignment";

  /** @brief  Simulink block type 'BusCreator'. */
  static inline const char *TYPE_BusCreator = "BusCreator";

  /** @brief  Simulink block type 'BusSelector'. */
  static inline const char *TYPE_BusSelector = "BusSelector";

  /** @brief  Simulink block type 'Clock'. */
  static inline const char *TYPE_Clock = "Clock";

  /** @brief  Simulink block type 'CombinatorialLogic'. */
  static inline const char *TYPE_CombinatorialLogic = "CombinatorialLogic";

  /** @brief  Simulink block type 'ComplexToMagnitudeAngle'. */
  static inline const char *TYPE_ComplexToMagnitudeAngle =
      "ComplexToMagnitudeAngle";

  /** @brief  Simulink block type 'ComplexToRealImag'. */
  static inline const char *TYPE_ComplexToRealImag = "ComplexToRealImag";

  /** @brief  Simulink block type 'Constant'. */
  static inline const char *TYPE_Constant = "Constant";

  /** @brief  Simulink block type 'DataStoreMemory'. */
  static inline const char *TYPE_DataStoreMemory = "DataStoreMemory";

  /** @brief  Simulink block type 'DataStoreRead'. */
  static inline const char *TYPE_DataStoreRead = "DataStoreRead";

  /** @brief  Simulink block type 'DataStoreWrite'. */
  static inline const char *TYPE_DataStoreWrite = "DataStoreWrite";

  /** @brief  Simulink block type 'DataTypeConversion'. */
  static inline const char *TYPE_DataTypeConversion = "DataTypeConversion";

  /** @brief  Simulink block type 'DeadZone'. */
  static inline const char *TYPE_DeadZone = "DeadZone";

  /** @brief  Simulink block type 'Demux'. */
  static inline const char *TYPE_Demux = "Demux";

  /** @brief  Simulink block type 'Derivative'. */
  static inline const char *TYPE_Derivative = "Derivative";

  /** @brief  Simulink block type 'DigitalClock'. */
  static inline const char *TYPE_DigitalClock = "DigitalClock";

  /** @brief  Simulink block type 'DiscreteFilter'. */
  static inline const char *TYPE_DiscreteFilter = "DiscreteFilter";

  /** @brief  Simulink block type 'DiscreteIntegrator'. */
  static inline const char *TYPE_DiscreteIntegrator = "DiscreteIntegrator";

  /** @brief  Simulink block type 'DiscretePulseGenerator'. */
  static inline const char *TYPE_DiscretePulseGenerator =
      "DiscretePulseGenerator";

  /** @brief  Simulink block type 'DiscreteStateSpace'. */
  static inline const char *TYPE_DiscreteStateSpace = "DiscreteStateSpace";

  /** @brief  Simulink block type 'DiscreteTransferFcn'. */
  static inline const char *TYPE_DiscreteTransferFcn = "DiscreteTransferFcn";

  /** @brief  Simulink block type 'DiscreteZeroPole'. */
  static inline const char *TYPE_DiscreteZeroPole = "DiscreteZeroPole";

  /** @brief  Simulink block type 'Display'. */
  static inline const char *TYPE_Display = "Display";

  /** @brief  Simulink block type 'EnablePort'. */
  static inline const char *TYPE_EnablePort = "EnablePort";

  /** @brief  Simulink block type 'Fcn'. */
  static inline const char *TYPE_Fcn = "Fcn";

  /** @brief  Simulink block type 'From'. */
  static inline const char *TYPE_From = "From";

  /** @brief  Simulink block type 'FromFile'. */
  static inline const char *TYPE_FromFile = "FromFile";

  /** @brief  Simulink block type 'FromWorkspace'. */
  static inline const char *TYPE_FromWorkspace = "FromWorkspace";

  /** @brief  Simulink block type 'Gain'. */
  static inline const char *TYPE_Gain = "Gain";

  /** @brief  Simulink block type 'Goto'. */
  static inline const char *TYPE_Goto = "Goto";

  /** @brief  Simulink block type 'GotoTagVisibility'. */
  static inline const char *TYPE_GotoTagVisibility = "GotoTagVisibility";

  /** @brief  Simulink block type 'Ground'. */
  static inline const char *TYPE_Ground = "Ground";

  /** @brief  Simulink block type 'HitCross'. */
  static inline const char *TYPE_HitCross = "HitCross";

  /** @brief  Simulink block type 'InitialCondition'. */
  static inline const char *TYPE_InitialCondition = "InitialCondition";

  /** @brief  Simulink block type 'Inport'. */
  static inline const char *TYPE_Inport = "Inport";

  /** @brief  Simulink block type 'Integrator'. */
  static inline const char *TYPE_Integrator = "Integrator";

  /** @brief  Simulink block type 'Logic'. */
  static inline const char *TYPE_Logic = "Logic";

  /** @brief  Simulink block type 'Lookup'. */
  static inline const char *TYPE_Lookup = "Lookup";

  /** @brief  Simulink block type 'Lookup2D'. */
  static inline const char *TYPE_Lookup2D = "Lookup2D";

  /** @brief  Simulink block type 'LookupND'. */
  static inline const char *TYPE_LookupND = "Lookup_n-D";

  /** @brief  Simulink block type 'M-S-Function'. */
  static inline const char *TYPE_M_S_Function = "M-S-Function";

  /** @brief  Simulink block type 'MATLABFcn'. */
  static inline const char *TYPE_MATLABFcn = "MATLABFcn";

  /** @brief  Simulink block type 'MagnitudeAngleToComplex'. */
  static inline const char *TYPE_MagnitudeAngleToComplex =
      "MagnitudeAngleToComplex";

  /** @brief  Simulink block type 'Math'. */
  static inline const char *TYPE_Math = "Math";

  /** @brief  Simulink block type 'Memory'. */
  static inline const char *TYPE_Memory = "Memory";

  /** @brief  Simulink block type 'Merge'. */
  static inline const char *TYPE_Merge = "Merge";

  /** @brief  Simulink block type 'MinMax'. */
  static inline const char *TYPE_MinMax = "MinMax";

  /** @brief  Simulink block type 'Model'. */
  static inline const char *TYPE_Model = "Model";

  /** @brief  Simulink block type 'MultiPortSwitch'. */
  static inline const char *TYPE_MultiPortSwitch = "MultiPortSwitch";

  /** @brief  Simulink block type 'Mux'. */
  static inline const char *TYPE_Mux = "Mux";

  /** @brief  Simulink block type 'Outport'. */
  static inline const char *TYPE_Outport = "Outport";

  /** @brief  Simulink block type 'Probe'. */
  static inline const char *TYPE_Probe = "Probe";

  /** @brief  Simulink block type 'Product'. */
  static inline const char *TYPE_Product = "Product";

  /** @brief  Simulink block type 'Quantizer'. */
  static inline const char *TYPE_Quantizer = "Quantizer";

  /** @brief  Simulink block type 'RandomNumber'. */
  static inline const char *TYPE_RandomNumber = "RandomNumber";

  /** @brief  Simulink block type 'RateLimiter'. */
  static inline const char *TYPE_RateLimiter = "RateLimiter";

  /** @brief  Simulink block type 'RateTransition'. */
  static inline const char *TYPE_RateTransition = "RateTransition";

  /** @brief  Simulink block type 'RealImagToComplex'. */
  static inline const char *TYPE_RealImagToComplex = "RealImagToComplex";

  /** @brief  Simulink block type 'Reference'. */
  static inline const char *TYPE_Reference = "Reference";

  /** @brief  Simulink block type 'RelationalOperator'. */
  static inline const char *TYPE_RelationalOperator = "RelationalOperator";

  /** @brief  Simulink block type 'Relay'. */
  static inline const char *TYPE_Relay = "Relay";

  /** @brief  Simulink block type 'Rounding'. */
  static inline const char *TYPE_Rounding = "Rounding";

  /** @brief  Simulink block type 'S-Function'. */
  static inline const char *TYPE_S_Function = "S-Function";

  /** @brief  Simulink block type 'Saturate'. */
  static inline const char *TYPE_Saturate = "Saturate";

  /** @brief  Simulink block type 'Scope'. */
  static inline const char *TYPE_Scope = "Scope";

  /** @brief  Simulink block type 'Selector'. */
  static inline const char *TYPE_Selector = "Selector";

  /** @brief  Simulink block type 'SignalConversion'. */
  static inline const char *TYPE_SignalConversion = "SignalConversion";

  /** @brief  Simulink block type 'SignalGenerator'. */
  static inline const char *TYPE_SignalGenerator = "SignalGenerator";

  /** @brief  Simulink block type 'SignalSpecification'. */
  static inline const char *TYPE_SignalSpecification = "SignalSpecification";

  /** @brief  Simulink block type 'Signum'. */
  static inline const char *TYPE_Signum = "Signum";

  /** @brief  Simulink block type 'Sin'. */
  static inline const char *TYPE_Sin = "Sin";

  /** @brief  Simulink block type 'StateSpace'. */
  static inline const char *TYPE_StateSpace = "StateSpace";

  /** @brief  Simulink block type 'Step'. */
  static inline const char *TYPE_Step = "Step";

  /** @brief  Simulink block type 'Stop'. */
  static inline const char *TYPE_Stop = "Stop";

  /** @brief  Simulink block type 'SubSystem'. */
  static inline const char *TYPE_SubSystem = "SubSystem";

  /** @brief  Simulink block type 'Sum'. */
  static inline const char *TYPE_Sum = "Sum";

  /** @brief  Simulink block type 'Switch'. */
  static inline const char *TYPE_Switch = "Switch";

  /** @brief  Simulink block type 'Terminator'. */
  static inline const char *TYPE_Terminator = "Terminator";

  /** @brief  Simulink block type 'ToFile'. */
  static inline const char *TYPE_ToFile = "ToFile";

  /** @brief  Simulink block type 'ToWorkspace'. */
  static inline const char *TYPE_ToWorkspace = "ToWorkspace";

  /** @brief  Simulink block type 'TransferFcn'. */
  static inline const char *TYPE_TransferFcn = "TransferFcn";

  /** @brief  Simulink block type 'TransportDelay'. */
  static inline const char *TYPE_TransportDelay = "TransportDelay";

  /** @brief  Simulink block type 'TriggerPort'. */
  static inline const char *TYPE_TriggerPort = "TriggerPort";

  /** @brief  Simulink block type 'Trigonometry'. */
  static inline const char *TYPE_Trigonometry = "Trigonometry";

  /** @brief  Simulink block type 'UniformRandomNumber'. */
  static inline const char *TYPE_UniformRandomNumber = "UniformRandomNumber";

  /** @brief  Simulink block type 'UnitDelay'. */
  static inline const char *TYPE_UnitDelay = "UnitDelay";

  /** @brief  Simulink block type 'DotProduct'. */
  static inline const char *TYPE_DotProduct = "DotProduct";

  /** @brief  Simulink block type 'FunctionCallSplit'. */
  static inline const char *TYPE_FunctionCallSplit = "FunctionCallSplit";

  /** @brief  Simulink block type 'ManualSwitch'. */
  static inline const char *TYPE_ManualSwitch = "ManualSwitch";

  /** @brief  Simulink block type 'numInPorts'. */
  static inline const char *TYPE_numInPorts = "numInPorts";

  /** @brief  Simulink block type 'numInPorts'. */
  static inline const char *TYPE_numOutPorts = "numOutPorts";

  /** @brief  Simulink block type 'VariableTransportDelay'. */
  static inline const char *TYPE_VariableTransportDelay =
      "VariableTransportDelay";

  /** @brief  Simulink block type 'Width'. */
  static inline const char *TYPE_Width = "Width";

  /** @brief  Simulink block type 'ZeroOrderHold'. */
  static inline const char *TYPE_ZeroOrderHold = "ZeroOrderHold";

  /** @brief  Simulink block type 'ZeroPole'. */
  static inline const char *TYPE_ZeroPole = "ZeroPole";

  /** @brief  Simulink port type 'trigger'. */
  static inline const char *TYPE_Trigger = "trigger";

  /** @brief  Simulink port type 'enable'. */
  static inline const char *TYPE_Enable = "enable";

  /** @brief  Simulink port type 'ifaction'. */
  static inline const char *TYPE_Ifaction = "ifaction";

  /** @brief  Simulink port type 'in'. */
  static inline const char *TYPE_In = "in";

  /** @brief  Simulink port type 'out'. */
  static inline const char *TYPE_Out = "out";

  /** @brief  Simulink type 'ModelReference'. */
  static inline const char *TYPE_ModelReference = "ModelReference";

  /** @brief Simulink block name 'Subsystem' */
  static inline const char *NAME_Subsystem = "Subsystem";

  /** @brief  Round shape (for {@link #PARAM_IconShape}). */
  static inline const char *SHAPE_round = "round";

  /** @brief  Value for "off". */
  static inline const char *VALUE_off = "off";

  /** @brief  Value for "on". */
  static inline const char *VALUE_on = "on";

  /** @brief  Value for bold font. */
  static inline const char *VALUE_bold = "bold";

  /** @brief  Value for italic font. */
  static inline const char *VALUE_italic = "italic";

  /** @brief  Value for alternate placement. */
  static inline const char *VALUE_alternate = "alternate";

  /** @brief  Value for port label visibility "none". */
  static inline const char *VALUE_none = "none";

  /** @brief  Value for port label visibility "FromPortIcon". */
  static inline const char *VALUE_FromPortIcon = "FromPortIcon";
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXPARAMETER_H