// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETERPARSER_H
#define SIMULINKPARAMETERPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "LibXML2.h"
#include "Logger.h"
#include "SimulinkDataType.h"
#include "SimulinkParameter.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Parser for SimulinkParameter class
 * @example Definition of multiple parameter in slx file
 *  @code{.xml}
 * <P Name="LibraryLinkDisplay">disabled</P>
 * <P Name="ExtModeTrigLevel">0</P>
 * <P Name="Components" Class="double">[]</P>
 * <P Name="Extents" Class="double">[887.0, 452.0]</P>
 * <P Name="Visible" Class="logical">1</P>
 * <P Name="OverrideMode" Class="uint32">0U</P>
 * @endcode
 */
class SLXIO_APIEXPORT SimulinkParameterParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkParameter>
{
public:
  SimulinkParameterParser() = default;
  /// @note Check if the related node name attribute is empty.
  /// If so, it returns an error since a parameter cannot be built
  /// without a name.
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkParameterParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPARAMETERPARSER_H
