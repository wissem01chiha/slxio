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

#include "SimulinkCoverage.h"

namespace slxio
{

std::vector<Diagnostic> Validate(const SimulinkCoverage&)
{
    return {};
}

std::string ToString(const SimulinkCoverage& config)
{
    std::string result = "SimulinkCoverage:\n";
    result += "  CovEnable: " + std::string(config.CovEnable ? "true" : "false") + "\n";
    result += "  CovScope: " + config.CovScope + "\n";
    result +=
        "  CovIncludeTopModel: " + std::string(config.CovIncludeTopModel ? "true" : "false") + "\n";
    result += "  RecordCoverage: " + std::string(config.RecordCoverage ? "true" : "false") + "\n";
    result += "  CovPath: " + config.CovPath + "\n";
    result += "  CovSaveName: " + config.CovSaveName + "\n";
    result += "  CovCompData: " + config.CovCompData + "\n";
    result += "  CovMetricSettings: " + config.CovMetricSettings + "\n";
    result += "  CovFilter: " + config.CovFilter + "\n";
    result += "  CovHTMLOptions: " + config.CovHTMLOptions + "\n";
    result +=
        "  CovNameIncrementing: " + std::string(config.CovNameIncrementing ? "true" : "false") +
        "\n";
    result += "  CovForceBlockReductionOff: " +
              std::string(config.CovForceBlockReductionOff ? "true" : "false") + "\n";
    result +=
        "  CovEnableCumulative: " + std::string(config.CovEnableCumulative ? "true" : "false") +
        "\n";
    result += "  CovSaveCumulativeToWorkspaceVar: " +
              std::string(config.CovSaveCumulativeToWorkspaceVar ? "true" : "false") + "\n";
    result += "  CovSaveSingleToWorkspaceVar: " +
              std::string(config.CovSaveSingleToWorkspaceVar ? "true" : "false") + "\n";
    result += "  CovCumulativeVarName: " + config.CovCumulativeVarName + "\n";
    result +=
        "  CovCumulativeReport: " + std::string(config.CovCumulativeReport ? "true" : "false") +
        "\n";
    result +=
        "  CovSaveOutputData: " + std::string(config.CovSaveOutputData ? "true" : "false") + "\n";
    result += "  CovOutputDir: " + config.CovOutputDir + "\n";
    return result;
}

}; // namespace slxio
