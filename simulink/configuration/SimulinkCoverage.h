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

#pragma once

#include "CommonPCH.h"
#include "ValidationReport.h"

namespace slxio
{

struct SimulinkCoverage
{
    std::vector<double> DisabledProps{};
    std::vector<double> Components{};
    bool CovEnable = false;
    std::string CovScope = "EntireSystem";
    bool CovIncludeTopModel = true;
    bool RecordCoverage = false;
    std::string CovPath = "/";
    std::string CovSaveName = "covdata";
    std::string CovCompData{};
    std::string CovMetricSettings = "dwe";
    std::string CovFilter{};
    std::string CovHTMLOptions{};
    bool CovNameIncrementing = false;
    bool CovForceBlockReductionOff = true;
    bool CovEnableCumulative = true;
    bool CovSaveCumulativeToWorkspaceVar = false;
    bool CovSaveSingleToWorkspaceVar = false;
    std::string CovCumulativeVarName = "covCumulativeData";
    bool CovCumulativeReport = false;
    bool CovSaveOutputData = true;
    std::string CovOutputDir = "slcov_output/$ModelName$";
    std::string CovDataFileName = "$ModelName$_cvdata";
    bool CovReportOnPause = true;
    bool CovModelRefEnable = false;
    std::string CovModelRefExcluded{};
    bool CovExternalEMLEnable = true;
    bool CovSFcnEnable = true;
    double CovBoundaryAbsTol = 1e-05;
    double CovBoundaryRelTol = 0.01;
    bool CovUseTimeInterval = false;
    double CovStartTime = 0.0;
    double CovStopTime = 0.0;
    std::string CovMcdcMode = "Masking";
};

ValidationReport Validate(const SimulinkCoverage& config);

}; // namespace slxio