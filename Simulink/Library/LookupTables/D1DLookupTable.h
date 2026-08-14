// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef D1DLOOKUPTABLE_H
#define D1DLOOKUPTABLE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT D1DLookupTable
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  D1DLookupTable();

  /** Default Destructor */
  ~D1DLookupTable();

  const std::string& GetNumberoftabledimensions() const;
  void SetNumberoftabledimensions(const std::string& value);

  const std::string& GetDataspecification() const;
  void SetDataspecification(const std::string& value);

  const std::string& GetLookuptableobject() const;
  void SetLookuptableobject(const std::string& value);

  const std::string& GetBreakpointsspecification() const;
  void SetBreakpointsspecification(const std::string& value);

  const std::string& GetBreakpointsfordimension1source() const;
  void SetBreakpointsfordimension1source(const std::string& value);

  const std::string& GetBreakpointsfordimension1() const;
  void SetBreakpointsfordimension1(const std::string& value);

  const std::string& GetBreakpointsfordimension2source() const;
  void SetBreakpointsfordimension2source(const std::string& value);

  const std::string& GetBreakpointsfordimension2() const;
  void SetBreakpointsfordimension2(const std::string& value);

  const std::string& GetBreakpointsfordimension3source() const;
  void SetBreakpointsfordimension3source(const std::string& value);

  const std::string& GetBreakpointsfordimension3() const;
  void SetBreakpointsfordimension3(const std::string& value);

  const std::string& GetBreakpointsfordimension4() const;
  void SetBreakpointsfordimension4(const std::string& value);

  const std::string& GetBreakpointsfordimension5() const;
  void SetBreakpointsfordimension5(const std::string& value);

  const std::string& GetBreakpointsfordimension6() const;
  void SetBreakpointsfordimension6(const std::string& value);

  const std::string& GetBreakpointsfordimension7() const;
  void SetBreakpointsfordimension7(const std::string& value);

  const std::string& GetBreakpointsfordimension8() const;
  void SetBreakpointsfordimension8(const std::string& value);

  const std::string& GetBreakpointsfordimension9() const;
  void SetBreakpointsfordimension9(const std::string& value);

  const std::string& GetBreakpointsfordimension10() const;
  void SetBreakpointsfordimension10(const std::string& value);

  const std::string& GetBreakpointsfordimension11() const;
  void SetBreakpointsfordimension11(const std::string& value);

  const std::string& GetBreakpointsfordimension12() const;
  void SetBreakpointsfordimension12(const std::string& value);

  const std::string& GetBreakpointsfordimension13() const;
  void SetBreakpointsfordimension13(const std::string& value);

  const std::string& GetBreakpointsfordimension14() const;
  void SetBreakpointsfordimension14(const std::string& value);

  const std::string& GetBreakpointsfordimension15() const;
  void SetBreakpointsfordimension15(const std::string& value);

  const std::string& GetBreakpointsfordimension16() const;
  void SetBreakpointsfordimension16(const std::string& value);

  const std::string& GetBreakpointsfordimension17() const;
  void SetBreakpointsfordimension17(const std::string& value);

  const std::string& GetBreakpointsfordimension18() const;
  void SetBreakpointsfordimension18(const std::string& value);

  const std::string& GetBreakpointsfordimension19() const;
  void SetBreakpointsfordimension19(const std::string& value);

  const std::string& GetBreakpointsfordimension20() const;
  void SetBreakpointsfordimension20(const std::string& value);

  const std::string& GetBreakpointsfordimension21() const;
  void SetBreakpointsfordimension21(const std::string& value);

  const std::string& GetBreakpointsfordimension22() const;
  void SetBreakpointsfordimension22(const std::string& value);

  const std::string& GetBreakpointsfordimension23() const;
  void SetBreakpointsfordimension23(const std::string& value);

  const std::string& GetBreakpointsfordimension24() const;
  void SetBreakpointsfordimension24(const std::string& value);

  const std::string& GetBreakpointsfordimension25() const;
  void SetBreakpointsfordimension25(const std::string& value);

  const std::string& GetBreakpointsfordimension26() const;
  void SetBreakpointsfordimension26(const std::string& value);

  const std::string& GetBreakpointsfordimension27() const;
  void SetBreakpointsfordimension27(const std::string& value);

  const std::string& GetBreakpointsfordimension28() const;
  void SetBreakpointsfordimension28(const std::string& value);

  const std::string& GetBreakpointsfordimension29() const;
  void SetBreakpointsfordimension29(const std::string& value);

  const std::string& GetBreakpointsfordimension30() const;
  void SetBreakpointsfordimension30(const std::string& value);

  const std::string& GetBreakpointsfordimension1firstpoint() const;
  void SetBreakpointsfordimension1firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension2firstpoint() const;
  void SetBreakpointsfordimension2firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension3firstpoint() const;
  void SetBreakpointsfordimension3firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension4firstpoint() const;
  void SetBreakpointsfordimension4firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension5firstpoint() const;
  void SetBreakpointsfordimension5firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension6firstpoint() const;
  void SetBreakpointsfordimension6firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension7firstpoint() const;
  void SetBreakpointsfordimension7firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension8firstpoint() const;
  void SetBreakpointsfordimension8firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension9firstpoint() const;
  void SetBreakpointsfordimension9firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension10firstpoint() const;
  void SetBreakpointsfordimension10firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension11firstpoint() const;
  void SetBreakpointsfordimension11firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension12firstpoint() const;
  void SetBreakpointsfordimension12firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension13firstpoint() const;
  void SetBreakpointsfordimension13firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension14firstpoint() const;
  void SetBreakpointsfordimension14firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension15firstpoint() const;
  void SetBreakpointsfordimension15firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension16firstpoint() const;
  void SetBreakpointsfordimension16firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension17firstpoint() const;
  void SetBreakpointsfordimension17firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension18firstpoint() const;
  void SetBreakpointsfordimension18firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension19firstpoint() const;
  void SetBreakpointsfordimension19firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension20firstpoint() const;
  void SetBreakpointsfordimension20firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension21firstpoint() const;
  void SetBreakpointsfordimension21firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension22firstpoint() const;
  void SetBreakpointsfordimension22firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension23firstpoint() const;
  void SetBreakpointsfordimension23firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension24firstpoint() const;
  void SetBreakpointsfordimension24firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension25firstpoint() const;
  void SetBreakpointsfordimension25firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension26firstpoint() const;
  void SetBreakpointsfordimension26firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension27firstpoint() const;
  void SetBreakpointsfordimension27firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension28firstpoint() const;
  void SetBreakpointsfordimension28firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension29firstpoint() const;
  void SetBreakpointsfordimension29firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension30firstpoint() const;
  void SetBreakpointsfordimension30firstpoint(const std::string& value);

  const std::string& GetBreakpointsfordimension1spacing() const;
  void SetBreakpointsfordimension1spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension2spacing() const;
  void SetBreakpointsfordimension2spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension3spacing() const;
  void SetBreakpointsfordimension3spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension4spacing() const;
  void SetBreakpointsfordimension4spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension5spacing() const;
  void SetBreakpointsfordimension5spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension6spacing() const;
  void SetBreakpointsfordimension6spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension7spacing() const;
  void SetBreakpointsfordimension7spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension8spacing() const;
  void SetBreakpointsfordimension8spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension9spacing() const;
  void SetBreakpointsfordimension9spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension10spacing() const;
  void SetBreakpointsfordimension10spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension11spacing() const;
  void SetBreakpointsfordimension11spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension12spacing() const;
  void SetBreakpointsfordimension12spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension13spacing() const;
  void SetBreakpointsfordimension13spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension14spacing() const;
  void SetBreakpointsfordimension14spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension15spacing() const;
  void SetBreakpointsfordimension15spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension16spacing() const;
  void SetBreakpointsfordimension16spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension17spacing() const;
  void SetBreakpointsfordimension17spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension18spacing() const;
  void SetBreakpointsfordimension18spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension19spacing() const;
  void SetBreakpointsfordimension19spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension20spacing() const;
  void SetBreakpointsfordimension20spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension21spacing() const;
  void SetBreakpointsfordimension21spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension22spacing() const;
  void SetBreakpointsfordimension22spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension23spacing() const;
  void SetBreakpointsfordimension23spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension24spacing() const;
  void SetBreakpointsfordimension24spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension25spacing() const;
  void SetBreakpointsfordimension25spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension26spacing() const;
  void SetBreakpointsfordimension26spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension27spacing() const;
  void SetBreakpointsfordimension27spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension28spacing() const;
  void SetBreakpointsfordimension28spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension29spacing() const;
  void SetBreakpointsfordimension29spacing(const std::string& value);

  const std::string& GetBreakpointsfordimension30spacing() const;
  void SetBreakpointsfordimension30spacing(const std::string& value);

  const std::string& GetN1() const;
  void SetN1(const std::string& value);

  const std::string& GetN2() const;
  void SetN2(const std::string& value);

  const std::string& GetN3() const;
  void SetN3(const std::string& value);

  const std::string& GetN4() const;
  void SetN4(const std::string& value);

  const std::string& GetN5() const;
  void SetN5(const std::string& value);

  const std::string& GetN6() const;
  void SetN6(const std::string& value);

  const std::string& GetN7() const;
  void SetN7(const std::string& value);

  const std::string& GetN8() const;
  void SetN8(const std::string& value);

  const std::string& GetN9() const;
  void SetN9(const std::string& value);

  const std::string& GetN10() const;
  void SetN10(const std::string& value);

  const std::string& GetN11() const;
  void SetN11(const std::string& value);

  const std::string& GetN12() const;
  void SetN12(const std::string& value);

  const std::string& GetN13() const;
  void SetN13(const std::string& value);

  const std::string& GetN14() const;
  void SetN14(const std::string& value);

  const std::string& GetN15() const;
  void SetN15(const std::string& value);

  const std::string& GetN16() const;
  void SetN16(const std::string& value);

  const std::string& GetN17() const;
  void SetN17(const std::string& value);

  const std::string& GetN18() const;
  void SetN18(const std::string& value);

  const std::string& GetN19() const;
  void SetN19(const std::string& value);

  const std::string& GetN20() const;
  void SetN20(const std::string& value);

  const std::string& GetN21() const;
  void SetN21(const std::string& value);

  const std::string& GetN22() const;
  void SetN22(const std::string& value);

  const std::string& GetN23() const;
  void SetN23(const std::string& value);

  const std::string& GetN24() const;
  void SetN24(const std::string& value);

  const std::string& GetN25() const;
  void SetN25(const std::string& value);

  const std::string& GetN26() const;
  void SetN26(const std::string& value);

  const std::string& GetN27() const;
  void SetN27(const std::string& value);

  const std::string& GetN28() const;
  void SetN28(const std::string& value);

  const std::string& GetN29() const;
  void SetN29(const std::string& value);

  const std::string& GetN30() const;
  void SetN30(const std::string& value);

  const std::string& GetBreakpointsfordimension1min() const;
  void SetBreakpointsfordimension1min(const std::string& value);

  const std::string& GetBreakpointsfordimension2min() const;
  void SetBreakpointsfordimension2min(const std::string& value);

  const std::string& GetBreakpointsfordimension3min() const;
  void SetBreakpointsfordimension3min(const std::string& value);

  const std::string& GetBreakpointsfordimension4min() const;
  void SetBreakpointsfordimension4min(const std::string& value);

  const std::string& GetBreakpointsfordimension5min() const;
  void SetBreakpointsfordimension5min(const std::string& value);

  const std::string& GetBreakpointsfordimension6min() const;
  void SetBreakpointsfordimension6min(const std::string& value);

  const std::string& GetBreakpointsfordimension7min() const;
  void SetBreakpointsfordimension7min(const std::string& value);

  const std::string& GetBreakpointsfordimension8min() const;
  void SetBreakpointsfordimension8min(const std::string& value);

  const std::string& GetBreakpointsfordimension9min() const;
  void SetBreakpointsfordimension9min(const std::string& value);

  const std::string& GetBreakpointsfordimension10min() const;
  void SetBreakpointsfordimension10min(const std::string& value);

  const std::string& GetBreakpointsfordimension11min() const;
  void SetBreakpointsfordimension11min(const std::string& value);

  const std::string& GetBreakpointsfordimension12min() const;
  void SetBreakpointsfordimension12min(const std::string& value);

  const std::string& GetBreakpointsfordimension13min() const;
  void SetBreakpointsfordimension13min(const std::string& value);

  const std::string& GetBreakpointsfordimension14min() const;
  void SetBreakpointsfordimension14min(const std::string& value);

  const std::string& GetBreakpointsfordimension15min() const;
  void SetBreakpointsfordimension15min(const std::string& value);

  const std::string& GetBreakpointsfordimension16min() const;
  void SetBreakpointsfordimension16min(const std::string& value);

  const std::string& GetBreakpointsfordimension17min() const;
  void SetBreakpointsfordimension17min(const std::string& value);

  const std::string& GetBreakpointsfordimension18min() const;
  void SetBreakpointsfordimension18min(const std::string& value);

  const std::string& GetBreakpointsfordimension19min() const;
  void SetBreakpointsfordimension19min(const std::string& value);

  const std::string& GetBreakpointsfordimension20min() const;
  void SetBreakpointsfordimension20min(const std::string& value);

  const std::string& GetBreakpointsfordimension21min() const;
  void SetBreakpointsfordimension21min(const std::string& value);

  const std::string& GetBreakpointsfordimension22min() const;
  void SetBreakpointsfordimension22min(const std::string& value);

  const std::string& GetBreakpointsfordimension23min() const;
  void SetBreakpointsfordimension23min(const std::string& value);

  const std::string& GetBreakpointsfordimension24min() const;
  void SetBreakpointsfordimension24min(const std::string& value);

  const std::string& GetBreakpointsfordimension25min() const;
  void SetBreakpointsfordimension25min(const std::string& value);

  const std::string& GetBreakpointsfordimension26min() const;
  void SetBreakpointsfordimension26min(const std::string& value);

  const std::string& GetBreakpointsfordimension27min() const;
  void SetBreakpointsfordimension27min(const std::string& value);

  const std::string& GetBreakpointsfordimension28min() const;
  void SetBreakpointsfordimension28min(const std::string& value);

  const std::string& GetBreakpointsfordimension29min() const;
  void SetBreakpointsfordimension29min(const std::string& value);

  const std::string& GetBreakpointsfordimension30min() const;
  void SetBreakpointsfordimension30min(const std::string& value);

  const std::string& GetBreakpointsfordimension1max() const;
  void SetBreakpointsfordimension1max(const std::string& value);

  const std::string& GetBreakpointsfordimension2max() const;
  void SetBreakpointsfordimension2max(const std::string& value);

  const std::string& GetBreakpointsfordimension3max() const;
  void SetBreakpointsfordimension3max(const std::string& value);

  const std::string& GetBreakpointsfordimension4max() const;
  void SetBreakpointsfordimension4max(const std::string& value);

  const std::string& GetBreakpointsfordimension5max() const;
  void SetBreakpointsfordimension5max(const std::string& value);

  const std::string& GetBreakpointsfordimension6max() const;
  void SetBreakpointsfordimension6max(const std::string& value);

  const std::string& GetBreakpointsfordimension7max() const;
  void SetBreakpointsfordimension7max(const std::string& value);

  const std::string& GetBreakpointsfordimension8max() const;
  void SetBreakpointsfordimension8max(const std::string& value);

  const std::string& GetBreakpointsfordimension9max() const;
  void SetBreakpointsfordimension9max(const std::string& value);

  const std::string& GetBreakpointsfordimension10max() const;
  void SetBreakpointsfordimension10max(const std::string& value);

  const std::string& GetBreakpointsfordimension11max() const;
  void SetBreakpointsfordimension11max(const std::string& value);

  const std::string& GetBreakpointsfordimension12max() const;
  void SetBreakpointsfordimension12max(const std::string& value);

  const std::string& GetBreakpointsfordimension13max() const;
  void SetBreakpointsfordimension13max(const std::string& value);

  const std::string& GetBreakpointsfordimension14max() const;
  void SetBreakpointsfordimension14max(const std::string& value);

  const std::string& GetBreakpointsfordimension15max() const;
  void SetBreakpointsfordimension15max(const std::string& value);

  const std::string& GetBreakpointsfordimension16max() const;
  void SetBreakpointsfordimension16max(const std::string& value);

  const std::string& GetBreakpointsfordimension17max() const;
  void SetBreakpointsfordimension17max(const std::string& value);

  const std::string& GetBreakpointsfordimension18max() const;
  void SetBreakpointsfordimension18max(const std::string& value);

  const std::string& GetBreakpointsfordimension19max() const;
  void SetBreakpointsfordimension19max(const std::string& value);

  const std::string& GetBreakpointsfordimension20max() const;
  void SetBreakpointsfordimension20max(const std::string& value);

  const std::string& GetBreakpointsfordimension21max() const;
  void SetBreakpointsfordimension21max(const std::string& value);

  const std::string& GetBreakpointsfordimension22max() const;
  void SetBreakpointsfordimension22max(const std::string& value);

  const std::string& GetBreakpointsfordimension23max() const;
  void SetBreakpointsfordimension23max(const std::string& value);

  const std::string& GetBreakpointsfordimension24max() const;
  void SetBreakpointsfordimension24max(const std::string& value);

  const std::string& GetBreakpointsfordimension25max() const;
  void SetBreakpointsfordimension25max(const std::string& value);

  const std::string& GetBreakpointsfordimension26max() const;
  void SetBreakpointsfordimension26max(const std::string& value);

  const std::string& GetBreakpointsfordimension27max() const;
  void SetBreakpointsfordimension27max(const std::string& value);

  const std::string& GetBreakpointsfordimension28max() const;
  void SetBreakpointsfordimension28max(const std::string& value);

  const std::string& GetBreakpointsfordimension29max() const;
  void SetBreakpointsfordimension29max(const std::string& value);

  const std::string& GetBreakpointsfordimension30max() const;
  void SetBreakpointsfordimension30max(const std::string& value);

  const std::string& GetBreakpointsfordimension1datatypestr() const;
  void SetBreakpointsfordimension1datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension2datatypestr() const;
  void SetBreakpointsfordimension2datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension3datatypestr() const;
  void SetBreakpointsfordimension3datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension4datatypestr() const;
  void SetBreakpointsfordimension4datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension5datatypestr() const;
  void SetBreakpointsfordimension5datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension6datatypestr() const;
  void SetBreakpointsfordimension6datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension7datatypestr() const;
  void SetBreakpointsfordimension7datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension8datatypestr() const;
  void SetBreakpointsfordimension8datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension9datatypestr() const;
  void SetBreakpointsfordimension9datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension10datatypestr() const;
  void SetBreakpointsfordimension10datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension11datatypestr() const;
  void SetBreakpointsfordimension11datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension12datatypestr() const;
  void SetBreakpointsfordimension12datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension13datatypestr() const;
  void SetBreakpointsfordimension13datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension14datatypestr() const;
  void SetBreakpointsfordimension14datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension15datatypestr() const;
  void SetBreakpointsfordimension15datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension16datatypestr() const;
  void SetBreakpointsfordimension16datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension17datatypestr() const;
  void SetBreakpointsfordimension17datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension18datatypestr() const;
  void SetBreakpointsfordimension18datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension19datatypestr() const;
  void SetBreakpointsfordimension19datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension20datatypestr() const;
  void SetBreakpointsfordimension20datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension21datatypestr() const;
  void SetBreakpointsfordimension21datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension22datatypestr() const;
  void SetBreakpointsfordimension22datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension23datatypestr() const;
  void SetBreakpointsfordimension23datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension24datatypestr() const;
  void SetBreakpointsfordimension24datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension25datatypestr() const;
  void SetBreakpointsfordimension25datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension26datatypestr() const;
  void SetBreakpointsfordimension26datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension27datatypestr() const;
  void SetBreakpointsfordimension27datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension28datatypestr() const;
  void SetBreakpointsfordimension28datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension29datatypestr() const;
  void SetBreakpointsfordimension29datatypestr(const std::string& value);

  const std::string& GetBreakpointsfordimension30datatypestr() const;
  void SetBreakpointsfordimension30datatypestr(const std::string& value);

  const std::string& GetIndexsearchmethod() const;
  void SetIndexsearchmethod(const std::string& value);

  const std::string& GetBeginindexsearchusingpreviousindexresult() const;
  void SetBeginindexsearchusingpreviousindexresult(const std::string& value);

  const std::string& GetUseoneinputportforallinputdata() const;
  void SetUseoneinputportforallinputdata(const std::string& value);

  const std::string& GetTablesource() const;
  void SetTablesource(const std::string& value);

  const std::string& GetTable() const;
  void SetTable(const std::string& value);

  const std::string& GetTablemin() const;
  void SetTablemin(const std::string& value);

  const std::string& GetTablemax() const;
  void SetTablemax(const std::string& value);

  const std::string& GetTabledatatypestr() const;
  void SetTabledatatypestr(const std::string& value);

  const std::string& GetIntermediateresultsdatatypestr() const;
  void SetIntermediateresultsdatatypestr(const std::string& value);

  const std::string& GetInterpmethod() const;
  void SetInterpmethod(const std::string& value);

  const std::string& GetExtrapmethod() const;
  void SetExtrapmethod(const std::string& value);

  const std::string& GetDiagnosticforoutofrangeinput() const;
  void SetDiagnosticforoutofrangeinput(const std::string& value);

  const std::string& GetRemoveprotectioninput() const;
  void SetRemoveprotectioninput(const std::string& value);

  const std::string& GetUselasttablevalue() const;
  void SetUselasttablevalue(const std::string& value);

  const std::string& GetApplyfullprecisionforlinearinterpolation() const;
  void SetApplyfullprecisionforlinearinterpolation(const std::string& value);

  const std::string& GetApplyaccurateefficientrounding() const;
  void SetApplyaccurateefficientrounding(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetInternalrulepriority() const;
  void SetInternalrulepriority(const std::string& value);

  const std::string& GetInputsamedt() const;
  void SetInputsamedt(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

  const std::string& GetFractiondatatypestr() const;
  void SetFractiondatatypestr(const std::string& value);

  const std::string& GetSupporttunabletablesize() const;
  void SetSupporttunabletablesize(const std::string& value);

  const std::string& GetMaximumindicesforeachdimension() const;
  void SetMaximumindicesforeachdimension(const std::string& value);

  const std::string& GetSupporttunablesize() const;
  void SetSupporttunablesize(const std::string& value);

private:
  std::string m_Numberoftabledimensions;

  std::string m_Dataspecification;

  std::string m_Lookuptableobject;

  std::string m_Breakpointsspecification;

  std::string m_Breakpointsfordimension1source;

  std::string m_Breakpointsfordimension1;

  std::string m_Breakpointsfordimension2source;

  std::string m_Breakpointsfordimension2;

  std::string m_Breakpointsfordimension3source;

  std::string m_Breakpointsfordimension3;

  std::string m_Breakpointsfordimension4;

  std::string m_Breakpointsfordimension5;

  std::string m_Breakpointsfordimension6;

  std::string m_Breakpointsfordimension7;

  std::string m_Breakpointsfordimension8;

  std::string m_Breakpointsfordimension9;

  std::string m_Breakpointsfordimension10;

  std::string m_Breakpointsfordimension11;

  std::string m_Breakpointsfordimension12;

  std::string m_Breakpointsfordimension13;

  std::string m_Breakpointsfordimension14;

  std::string m_Breakpointsfordimension15;

  std::string m_Breakpointsfordimension16;

  std::string m_Breakpointsfordimension17;

  std::string m_Breakpointsfordimension18;

  std::string m_Breakpointsfordimension19;

  std::string m_Breakpointsfordimension20;

  std::string m_Breakpointsfordimension21;

  std::string m_Breakpointsfordimension22;

  std::string m_Breakpointsfordimension23;

  std::string m_Breakpointsfordimension24;

  std::string m_Breakpointsfordimension25;

  std::string m_Breakpointsfordimension26;

  std::string m_Breakpointsfordimension27;

  std::string m_Breakpointsfordimension28;

  std::string m_Breakpointsfordimension29;

  std::string m_Breakpointsfordimension30;

  std::string m_Breakpointsfordimension1firstpoint;

  std::string m_Breakpointsfordimension2firstpoint;

  std::string m_Breakpointsfordimension3firstpoint;

  std::string m_Breakpointsfordimension4firstpoint;

  std::string m_Breakpointsfordimension5firstpoint;

  std::string m_Breakpointsfordimension6firstpoint;

  std::string m_Breakpointsfordimension7firstpoint;

  std::string m_Breakpointsfordimension8firstpoint;

  std::string m_Breakpointsfordimension9firstpoint;

  std::string m_Breakpointsfordimension10firstpoint;

  std::string m_Breakpointsfordimension11firstpoint;

  std::string m_Breakpointsfordimension12firstpoint;

  std::string m_Breakpointsfordimension13firstpoint;

  std::string m_Breakpointsfordimension14firstpoint;

  std::string m_Breakpointsfordimension15firstpoint;

  std::string m_Breakpointsfordimension16firstpoint;

  std::string m_Breakpointsfordimension17firstpoint;

  std::string m_Breakpointsfordimension18firstpoint;

  std::string m_Breakpointsfordimension19firstpoint;

  std::string m_Breakpointsfordimension20firstpoint;

  std::string m_Breakpointsfordimension21firstpoint;

  std::string m_Breakpointsfordimension22firstpoint;

  std::string m_Breakpointsfordimension23firstpoint;

  std::string m_Breakpointsfordimension24firstpoint;

  std::string m_Breakpointsfordimension25firstpoint;

  std::string m_Breakpointsfordimension26firstpoint;

  std::string m_Breakpointsfordimension27firstpoint;

  std::string m_Breakpointsfordimension28firstpoint;

  std::string m_Breakpointsfordimension29firstpoint;

  std::string m_Breakpointsfordimension30firstpoint;

  std::string m_Breakpointsfordimension1spacing;

  std::string m_Breakpointsfordimension2spacing;

  std::string m_Breakpointsfordimension3spacing;

  std::string m_Breakpointsfordimension4spacing;

  std::string m_Breakpointsfordimension5spacing;

  std::string m_Breakpointsfordimension6spacing;

  std::string m_Breakpointsfordimension7spacing;

  std::string m_Breakpointsfordimension8spacing;

  std::string m_Breakpointsfordimension9spacing;

  std::string m_Breakpointsfordimension10spacing;

  std::string m_Breakpointsfordimension11spacing;

  std::string m_Breakpointsfordimension12spacing;

  std::string m_Breakpointsfordimension13spacing;

  std::string m_Breakpointsfordimension14spacing;

  std::string m_Breakpointsfordimension15spacing;

  std::string m_Breakpointsfordimension16spacing;

  std::string m_Breakpointsfordimension17spacing;

  std::string m_Breakpointsfordimension18spacing;

  std::string m_Breakpointsfordimension19spacing;

  std::string m_Breakpointsfordimension20spacing;

  std::string m_Breakpointsfordimension21spacing;

  std::string m_Breakpointsfordimension22spacing;

  std::string m_Breakpointsfordimension23spacing;

  std::string m_Breakpointsfordimension24spacing;

  std::string m_Breakpointsfordimension25spacing;

  std::string m_Breakpointsfordimension26spacing;

  std::string m_Breakpointsfordimension27spacing;

  std::string m_Breakpointsfordimension28spacing;

  std::string m_Breakpointsfordimension29spacing;

  std::string m_Breakpointsfordimension30spacing;

  std::string m_N1;

  std::string m_N2;

  std::string m_N3;

  std::string m_N4;

  std::string m_N5;

  std::string m_N6;

  std::string m_N7;

  std::string m_N8;

  std::string m_N9;

  std::string m_N10;

  std::string m_N11;

  std::string m_N12;

  std::string m_N13;

  std::string m_N14;

  std::string m_N15;

  std::string m_N16;

  std::string m_N17;

  std::string m_N18;

  std::string m_N19;

  std::string m_N20;

  std::string m_N21;

  std::string m_N22;

  std::string m_N23;

  std::string m_N24;

  std::string m_N25;

  std::string m_N26;

  std::string m_N27;

  std::string m_N28;

  std::string m_N29;

  std::string m_N30;

  std::string m_Breakpointsfordimension1min;

  std::string m_Breakpointsfordimension2min;

  std::string m_Breakpointsfordimension3min;

  std::string m_Breakpointsfordimension4min;

  std::string m_Breakpointsfordimension5min;

  std::string m_Breakpointsfordimension6min;

  std::string m_Breakpointsfordimension7min;

  std::string m_Breakpointsfordimension8min;

  std::string m_Breakpointsfordimension9min;

  std::string m_Breakpointsfordimension10min;

  std::string m_Breakpointsfordimension11min;

  std::string m_Breakpointsfordimension12min;

  std::string m_Breakpointsfordimension13min;

  std::string m_Breakpointsfordimension14min;

  std::string m_Breakpointsfordimension15min;

  std::string m_Breakpointsfordimension16min;

  std::string m_Breakpointsfordimension17min;

  std::string m_Breakpointsfordimension18min;

  std::string m_Breakpointsfordimension19min;

  std::string m_Breakpointsfordimension20min;

  std::string m_Breakpointsfordimension21min;

  std::string m_Breakpointsfordimension22min;

  std::string m_Breakpointsfordimension23min;

  std::string m_Breakpointsfordimension24min;

  std::string m_Breakpointsfordimension25min;

  std::string m_Breakpointsfordimension26min;

  std::string m_Breakpointsfordimension27min;

  std::string m_Breakpointsfordimension28min;

  std::string m_Breakpointsfordimension29min;

  std::string m_Breakpointsfordimension30min;

  std::string m_Breakpointsfordimension1max;

  std::string m_Breakpointsfordimension2max;

  std::string m_Breakpointsfordimension3max;

  std::string m_Breakpointsfordimension4max;

  std::string m_Breakpointsfordimension5max;

  std::string m_Breakpointsfordimension6max;

  std::string m_Breakpointsfordimension7max;

  std::string m_Breakpointsfordimension8max;

  std::string m_Breakpointsfordimension9max;

  std::string m_Breakpointsfordimension10max;

  std::string m_Breakpointsfordimension11max;

  std::string m_Breakpointsfordimension12max;

  std::string m_Breakpointsfordimension13max;

  std::string m_Breakpointsfordimension14max;

  std::string m_Breakpointsfordimension15max;

  std::string m_Breakpointsfordimension16max;

  std::string m_Breakpointsfordimension17max;

  std::string m_Breakpointsfordimension18max;

  std::string m_Breakpointsfordimension19max;

  std::string m_Breakpointsfordimension20max;

  std::string m_Breakpointsfordimension21max;

  std::string m_Breakpointsfordimension22max;

  std::string m_Breakpointsfordimension23max;

  std::string m_Breakpointsfordimension24max;

  std::string m_Breakpointsfordimension25max;

  std::string m_Breakpointsfordimension26max;

  std::string m_Breakpointsfordimension27max;

  std::string m_Breakpointsfordimension28max;

  std::string m_Breakpointsfordimension29max;

  std::string m_Breakpointsfordimension30max;

  std::string m_Breakpointsfordimension1datatypestr;

  std::string m_Breakpointsfordimension2datatypestr;

  std::string m_Breakpointsfordimension3datatypestr;

  std::string m_Breakpointsfordimension4datatypestr;

  std::string m_Breakpointsfordimension5datatypestr;

  std::string m_Breakpointsfordimension6datatypestr;

  std::string m_Breakpointsfordimension7datatypestr;

  std::string m_Breakpointsfordimension8datatypestr;

  std::string m_Breakpointsfordimension9datatypestr;

  std::string m_Breakpointsfordimension10datatypestr;

  std::string m_Breakpointsfordimension11datatypestr;

  std::string m_Breakpointsfordimension12datatypestr;

  std::string m_Breakpointsfordimension13datatypestr;

  std::string m_Breakpointsfordimension14datatypestr;

  std::string m_Breakpointsfordimension15datatypestr;

  std::string m_Breakpointsfordimension16datatypestr;

  std::string m_Breakpointsfordimension17datatypestr;

  std::string m_Breakpointsfordimension18datatypestr;

  std::string m_Breakpointsfordimension19datatypestr;

  std::string m_Breakpointsfordimension20datatypestr;

  std::string m_Breakpointsfordimension21datatypestr;

  std::string m_Breakpointsfordimension22datatypestr;

  std::string m_Breakpointsfordimension23datatypestr;

  std::string m_Breakpointsfordimension24datatypestr;

  std::string m_Breakpointsfordimension25datatypestr;

  std::string m_Breakpointsfordimension26datatypestr;

  std::string m_Breakpointsfordimension27datatypestr;

  std::string m_Breakpointsfordimension28datatypestr;

  std::string m_Breakpointsfordimension29datatypestr;

  std::string m_Breakpointsfordimension30datatypestr;

  std::string m_Indexsearchmethod;

  std::string m_Beginindexsearchusingpreviousindexresult;

  std::string m_Useoneinputportforallinputdata;

  std::string m_Tablesource;

  std::string m_Table;

  std::string m_Tablemin;

  std::string m_Tablemax;

  std::string m_Tabledatatypestr;

  std::string m_Intermediateresultsdatatypestr;

  std::string m_Interpmethod;

  std::string m_Extrapmethod;

  std::string m_Diagnosticforoutofrangeinput;

  std::string m_Removeprotectioninput;

  std::string m_Uselasttablevalue;

  std::string m_Applyfullprecisionforlinearinterpolation;

  std::string m_Applyaccurateefficientrounding;

  std::string m_Sampletime;

  std::string m_Internalrulepriority;

  std::string m_Inputsamedt;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Fractiondatatypestr;

  std::string m_Supporttunabletablesize;

  std::string m_Maximumindicesforeachdimension;

  std::string m_Supporttunablesize;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // D1DLOOKUPTABLE_H
