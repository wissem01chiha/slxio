// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SCOPE_H
#define SCOPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Scope : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    Scope();

    /** Default Destructor */
    ~Scope();

    const std::string& GetOpenatsimulationstart() const;
    void SetOpenatsimulationstart(const std::string& value);

    const std::string& GetDisplayfullpath() const;
    void SetDisplayfullpath(const std::string& value);

    const std::string& GetNuminputports() const;
    void SetNuminputports(const std::string& value);

    const std::string& GetLayoutdimensionsstring() const;
    void SetLayoutdimensionsstring(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

    const std::string& GetFramebasedprocessingstring() const;
    void SetFramebasedprocessingstring(const std::string& value);

    const std::string& GetMaximizeaxes() const;
    void SetMaximizeaxes(const std::string& value);

    const std::string& GetAxesscaling() const;
    void SetAxesscaling(const std::string& value);

    const std::string& GetAxesscalingnumupdates() const;
    void SetAxesscalingnumupdates(const std::string& value);

    const std::string& GetTimespan() const;
    void SetTimespan(const std::string& value);

    const std::string& GetTimespanoverrunaction() const;
    void SetTimespanoverrunaction(const std::string& value);

    const std::string& GetTimeunits() const;
    void SetTimeunits(const std::string& value);

    const std::string& GetTimedisplayoffset() const;
    void SetTimedisplayoffset(const std::string& value);

    const std::string& GetTimeaxislabels() const;
    void SetTimeaxislabels(const std::string& value);

    const std::string& GetShowtimeaxislabel() const;
    void SetShowtimeaxislabel(const std::string& value);

    const std::string& GetActivedisplaystring() const;
    void SetActivedisplaystring(const std::string& value);

    const std::string& GetTitle() const;
    void SetTitle(const std::string& value);

    const std::string& GetShowlegend() const;
    void SetShowlegend(const std::string& value);

    const std::string& GetShowgrid() const;
    void SetShowgrid(const std::string& value);

    const std::string& GetPlotasmagnitudephase() const;
    void SetPlotasmagnitudephase(const std::string& value);

    const std::string& GetActivedisplayyminimum() const;
    void SetActivedisplayyminimum(const std::string& value);

    const std::string& GetActivedisplayymaximum() const;
    void SetActivedisplayymaximum(const std::string& value);

    const std::string& GetYlabel() const;
    void SetYlabel(const std::string& value);

    const std::string& GetDatalogginglimitdatapoints() const;
    void SetDatalogginglimitdatapoints(const std::string& value);

    const std::string& GetDataloggingmaxpoints() const;
    void SetDataloggingmaxpoints(const std::string& value);

    const std::string& GetDataloggingdecimatedata() const;
    void SetDataloggingdecimatedata(const std::string& value);

    const std::string& GetDataloggingdecimation() const;
    void SetDataloggingdecimation(const std::string& value);

    const std::string& GetDatalogging() const;
    void SetDatalogging(const std::string& value);

    const std::string& GetDataloggingvariablename() const;
    void SetDataloggingvariablename(const std::string& value);

    const std::string& GetDataloggingsaveformat() const;
    void SetDataloggingsaveformat(const std::string& value);

private:
    std::string m_Openatsimulationstart;

    std::string m_Displayfullpath;

    std::string m_Numinputports;

    std::string m_Layoutdimensionsstring;

    std::string m_Sampletime;

    std::string m_Framebasedprocessingstring;

    std::string m_Maximizeaxes;

    std::string m_Axesscaling;

    std::string m_Axesscalingnumupdates;

    std::string m_Timespan;

    std::string m_Timespanoverrunaction;

    std::string m_Timeunits;

    std::string m_Timedisplayoffset;

    std::string m_Timeaxislabels;

    std::string m_Showtimeaxislabel;

    std::string m_Activedisplaystring;

    std::string m_Title;

    std::string m_Showlegend;

    std::string m_Showgrid;

    std::string m_Plotasmagnitudephase;

    std::string m_Activedisplayyminimum;

    std::string m_Activedisplayymaximum;

    std::string m_Ylabel;

    std::string m_Datalogginglimitdatapoints;

    std::string m_Dataloggingmaxpoints;

    std::string m_Dataloggingdecimatedata;

    std::string m_Dataloggingdecimation;

    std::string m_Datalogging;

    std::string m_Dataloggingvariablename;

    std::string m_Dataloggingsaveformat;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SCOPE_H
