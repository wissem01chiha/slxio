// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETETRANSFERFCN_H
#define DISCRETETRANSFERFCN_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteTransferFcn : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    DiscreteTransferFcn();

    /** Default Destructor */
    ~DiscreteTransferFcn();

    const std::string& GetNumeratorsource() const;
    void SetNumeratorsource(const std::string& value);

    const std::string& GetNumerator() const;
    void SetNumerator(const std::string& value);

    const std::string& GetDenominatorsource() const;
    void SetDenominatorsource(const std::string& value);

    const std::string& GetDenominator() const;
    void SetDenominator(const std::string& value);

    const std::string& GetInitialstatessource() const;
    void SetInitialstatessource(const std::string& value);

    const std::string& GetInitialstates() const;
    void SetInitialstates(const std::string& value);

    const std::string& GetInputprocessing() const;
    void SetInputprocessing(const std::string& value);

    const std::string& GetExternalreset() const;
    void SetExternalreset(const std::string& value);

    const std::string& GetInitialdenominatorstates() const;
    void SetInitialdenominatorstates(const std::string& value);

    const std::string& GetFilterstructure() const;
    void SetFilterstructure(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetA0equalsone() const;
    void SetA0equalsone(const std::string& value);

    const std::string& GetNumcoefmin() const;
    void SetNumcoefmin(const std::string& value);

    const std::string& GetNumcoefmax() const;
    void SetNumcoefmax(const std::string& value);

    const std::string& GetDencoefmin() const;
    void SetDencoefmin(const std::string& value);

    const std::string& GetDencoefmax() const;
    void SetDencoefmax(const std::string& value);

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetStatedatatypestr() const;
    void SetStatedatatypestr(const std::string& value);

    const std::string& GetMultiplicanddatatypestr() const;
    void SetMultiplicanddatatypestr(const std::string& value);

    const std::string& GetNumcoefdatatypestr() const;
    void SetNumcoefdatatypestr(const std::string& value);

    const std::string& GetDencoefdatatypestr() const;
    void SetDencoefdatatypestr(const std::string& value);

    const std::string& GetNumproductdatatypestr() const;
    void SetNumproductdatatypestr(const std::string& value);

    const std::string& GetDenproductdatatypestr() const;
    void SetDenproductdatatypestr(const std::string& value);

    const std::string& GetNumaccumdatatypestr() const;
    void SetNumaccumdatatypestr(const std::string& value);

    const std::string& GetDenaccumdatatypestr() const;
    void SetDenaccumdatatypestr(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetSaturateonintegeroverflow() const;
    void SetSaturateonintegeroverflow(const std::string& value);

    const std::string& GetStatename() const;
    void SetStatename(const std::string& value);

    const std::string& GetStatemustresolvetosignalobject() const;
    void SetStatemustresolvetosignalobject(const std::string& value);

    const std::string& GetStatesignalobject() const;
    void SetStatesignalobject(const std::string& value);

    const std::string& GetStatestorageclass() const;
    void SetStatestorageclass(const std::string& value);

    const std::string& GetRtwstatestoragetypequalifier() const;
    void SetRtwstatestoragetypequalifier(const std::string& value);

private:
    std::string m_Numeratorsource;

    std::string m_Numerator;

    std::string m_Denominatorsource;

    std::string m_Denominator;

    std::string m_Initialstatessource;

    std::string m_Initialstates;

    std::string m_Inputprocessing;

    std::string m_Externalreset;

    std::string m_Initialdenominatorstates;

    std::string m_Filterstructure;

    std::string m_Sampletime;

    std::string m_A0equalsone;

    std::string m_Numcoefmin;

    std::string m_Numcoefmax;

    std::string m_Dencoefmin;

    std::string m_Dencoefmax;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Statedatatypestr;

    std::string m_Multiplicanddatatypestr;

    std::string m_Numcoefdatatypestr;

    std::string m_Dencoefdatatypestr;

    std::string m_Numproductdatatypestr;

    std::string m_Denproductdatatypestr;

    std::string m_Numaccumdatatypestr;

    std::string m_Denaccumdatatypestr;

    std::string m_Outdatatypestr;

    std::string m_Lockscale;

    std::string m_Rndmeth;

    std::string m_Saturateonintegeroverflow;

    std::string m_Statename;

    std::string m_Statemustresolvetosignalobject;

    std::string m_Statesignalobject;

    std::string m_Statestorageclass;

    std::string m_Rtwstatestoragetypequalifier;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISCRETETRANSFERFCN_H
