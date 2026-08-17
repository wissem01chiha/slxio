// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTERPOLATIONUSINGPRELOOKUP_H
#define INTERPOLATIONUSINGPRELOOKUP_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT InterpolationUsingPrelookup : public IBlockParameters,
                                                    public IBlockProperties
{
public:
    /** Default Constructor */
    InterpolationUsingPrelookup();

    /** Default Destructor */
    ~InterpolationUsingPrelookup();

    const std::string& GetNumberoftabledimensions() const;
    void SetNumberoftabledimensions(const std::string& value);

    const std::string& GetTablesource() const;
    void SetTablesource(const std::string& value);

    const std::string& GetTable() const;
    void SetTable(const std::string& value);

    const std::string& GetTablespecification() const;
    void SetTablespecification(const std::string& value);

    const std::string& GetLookuptableobject() const;
    void SetLookuptableobject(const std::string& value);

    const std::string& GetInterpmethod() const;
    void SetInterpmethod(const std::string& value);

    const std::string& GetExtrapmethod() const;
    void SetExtrapmethod(const std::string& value);

    const std::string& GetDiagnosticforoutofrangeinput() const;
    void SetDiagnosticforoutofrangeinput(const std::string& value);

    const std::string& GetRequireindexfractionasbus() const;
    void SetRequireindexfractionasbus(const std::string& value);

    const std::string& GetRemoveprotectionindex() const;
    void SetRemoveprotectionindex(const std::string& value);

    const std::string& GetValidindexmayreachlast() const;
    void SetValidindexmayreachlast(const std::string& value);

    const std::string& GetNumselectiondims() const;
    void SetNumselectiondims(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetInternalrulepriority() const;
    void SetInternalrulepriority(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetSaturateonintegeroverflow() const;
    void SetSaturateonintegeroverflow(const std::string& value);

    const std::string& GetTablemin() const;
    void SetTablemin(const std::string& value);

    const std::string& GetTablemax() const;
    void SetTablemax(const std::string& value);

    const std::string& GetTabledatatypestr() const;
    void SetTabledatatypestr(const std::string& value);

    const std::string& GetIntermediateresultsdatatypestr() const;
    void SetIntermediateresultsdatatypestr(const std::string& value);

private:
    std::string m_Numberoftabledimensions;

    std::string m_Tablesource;

    std::string m_Table;

    std::string m_Tablespecification;

    std::string m_Lookuptableobject;

    std::string m_Interpmethod;

    std::string m_Extrapmethod;

    std::string m_Diagnosticforoutofrangeinput;

    std::string m_Requireindexfractionasbus;

    std::string m_Removeprotectionindex;

    std::string m_Validindexmayreachlast;

    std::string m_Numselectiondims;

    std::string m_Sampletime;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Outdatatypestr;

    std::string m_Internalrulepriority;

    std::string m_Lockscale;

    std::string m_Rndmeth;

    std::string m_Saturateonintegeroverflow;

    std::string m_Tablemin;

    std::string m_Tablemax;

    std::string m_Tabledatatypestr;

    std::string m_Intermediateresultsdatatypestr;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INTERPOLATIONUSINGPRELOOKUP_H
