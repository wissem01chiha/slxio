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

#ifndef DATATYPECONVERSION_H
#define DATATYPECONVERSION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataTypeConversion : public IBlockParameters, public IBlockProperties
{
public:
    /** Default Constructor */
    DataTypeConversion();

    /** Default Destructor */
    ~DataTypeConversion();

    const std::string& GetOutmin() const;
    void SetOutmin(const std::string& value);

    const std::string& GetOutmax() const;
    void SetOutmax(const std::string& value);

    const std::string& GetOutdatatypestr() const;
    void SetOutdatatypestr(const std::string& value);

    const std::string& GetLockscale() const;
    void SetLockscale(const std::string& value);

    const std::string& GetConvertrealworld() const;
    void SetConvertrealworld(const std::string& value);

    const std::string& GetRndmeth() const;
    void SetRndmeth(const std::string& value);

    const std::string& GetSaturateonintegeroverflow() const;
    void SetSaturateonintegeroverflow(const std::string& value);

    const std::string& GetSampletime() const;
    void SetSampletime(const std::string& value);

private:
    std::string m_Outmin;
    std::string m_Outmax;
    std::string m_Outdatatypestr;
    std::string m_Lockscale;
    std::string m_Convertrealworld;
    std::string m_Rndmeth;
    std::string m_Saturateonintegeroverflow;
    std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DATATYPECONVERSION_H
