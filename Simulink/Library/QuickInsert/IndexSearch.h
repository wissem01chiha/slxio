// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INDEXSEARCH_H
#define INDEXSEARCH_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IndexSearch : public IBlockParameters,
                                    public IBlockProperties
{
public:
    /** Default Constructor */
    IndexSearch();

    /** Default Destructor */
    ~IndexSearch();

    const std::string& GetBreakpointsdatasource() const;
    void SetBreakpointsdatasource(const std::string& value);

    const std::string& GetBreakpointsdata() const;
    void SetBreakpointsdata(const std::string& value);

    const std::string& GetBreakpointsspecification() const;
    void SetBreakpointsspecification(const std::string& value);

    const std::string& GetBreakpointobject() const;
    void SetBreakpointobject(const std::string& value);

    const std::string& GetBreakpointsnumpoints() const;
    void SetBreakpointsnumpoints(const std::string& value);

    const std::string& GetBreakpointsfirstpoint() const;
    void SetBreakpointsfirstpoint(const std::string& value);

    const std::string& GetBreakpointsspacing() const;
    void SetBreakpointsspacing(const std::string& value);

    const std::string& GetOutputselection() const;
    void SetOutputselection(const std::string& value);

    const std::string& GetIndexsearchmethod() const;
    void SetIndexsearchmethod(const std::string& value);

    const std::string& GetBeginindexsearchusingpreviousindexresult() const;
    void SetBeginindexsearchusingpreviousindexresult(const std::string& value);

    const std::string& GetExtrapmethod() const;
    void SetExtrapmethod(const std::string& value);

    const std::string& GetUselastbreakpoint() const;
    void SetUselastbreakpoint(const std::string& value);

    const std::string& GetRemoveprotectioninput() const;
    void SetRemoveprotectioninput(const std::string& value);

    const std::string& GetDiagnosticforoutofrangeinput() const;
    void SetDiagnosticforoutofrangeinput(const std::string& value);

    const std::string& GetBreakpointmin() const;
    void SetBreakpointmin(const std::string& value);

    const std::string& GetBreakpointmax() const;
    void SetBreakpointmax(const std::string& value);

    const std::string& GetBreakpointdatatypestr() const;
    void SetBreakpointdatatypestr(const std::string& value);

    const std::string& GetIndexdatatypestr() const;
    void SetIndexdatatypestr(const std::string& value);

    const std::string& GetFractiondatatypestr() const;
    void SetFractiondatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetOutputbusdatatypestr() const;
    void SetOutputbusdatatypestr(const std::string& value);

private:
    std::string m_Breakpointsdatasource;

    std::string m_Breakpointsdata;

    std::string m_Breakpointsspecification;

    std::string m_Breakpointobject;

    std::string m_Breakpointsnumpoints;

    std::string m_Breakpointsfirstpoint;

    std::string m_Breakpointsspacing;

    std::string m_Outputselection;

    std::string m_Indexsearchmethod;

    std::string m_Beginindexsearchusingpreviousindexresult;

    std::string m_Extrapmethod;

    std::string m_Uselastbreakpoint;

    std::string m_Removeprotectioninput;

    std::string m_Diagnosticforoutofrangeinput;

    std::string m_Breakpointmin;

    std::string m_Breakpointmax;

    std::string m_Breakpointdatatypestr;

    std::string m_Indexdatatypestr;

    std::string m_Fractiondatatypestr;

    std::string m_Lockscale;

    std::string m_Rndmeth;

    std::string m_Sampletime;

    std::string m_Outputbusdatatypestr;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INDEXSEARCH_H
