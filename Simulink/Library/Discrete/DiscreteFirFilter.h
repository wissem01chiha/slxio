// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETEFIRFILTER_H
#define DISCRETEFIRFILTER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteFirFilter : public IBlockParameters,
                                          public IBlockProperties
{
public:
    /** Default Constructor */
    DiscreteFirFilter();

    /** Default Destructor */
    ~DiscreteFirFilter();

    const std::string& GetCoefsource() const;
    void SetCoefsource(const std::string& value);

    const std::string& GetFilterstructure() const;
    void SetFilterstructure(const std::string& value);

    const std::string& GetCoefficients() const;
    void SetCoefficients(const std::string& value);

    const std::string& GetInputprocessing() const;
    void SetInputprocessing(const std::string& value);

    const std::string& GetExternalreset() const;
    void SetExternalreset(const std::string& value);

    const std::string& GetShowenableport() const;
    void SetShowenableport(const std::string& value);

    const std::string& GetInitialstates() const;
    void SetInitialstates(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetCoefmin() const;
    void SetCoefmin(const std::string& value);

    const std::string& GetCoefmax() const;
    void SetCoefmax(const std::string& value);

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetTapsumdatatypestr() const;
    void SetTapsumdatatypestr(const std::string& value);

    const std::string& GetCoefdatatypestr() const;
    void SetCoefdatatypestr(const std::string& value);

    const std::string& GetProductdatatypestr() const;
    void SetProductdatatypestr(const std::string& value);

    const std::string& GetAccumdatatypestr() const;
    void SetAccumdatatypestr(const std::string& value);

    const std::string& GetStatedatatypestr() const;
    void SetStatedatatypestr(const std::string& value);

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
    std::string m_Coefsource;

    std::string m_Filterstructure;

    std::string m_Coefficients;

    std::string m_Inputprocessing;

    std::string m_Externalreset;

    std::string m_Showenableport;

    std::string m_Initialstates;

    std::string m_Sampletime;

    std::string m_Coefmin;

    std::string m_Coefmax;

    std::string m_Outmin;

    std::string m_Outmax;

    std::string m_Tapsumdatatypestr;

    std::string m_Coefdatatypestr;

    std::string m_Productdatatypestr;

    std::string m_Accumdatatypestr;

    std::string m_Statedatatypestr;

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

#endif // DISCRETEFIRFILTER_H
