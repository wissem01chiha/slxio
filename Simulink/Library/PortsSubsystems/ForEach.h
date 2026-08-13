// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FOREACH_H
#define FOREACH_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ForEach : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ForEach();

  /** Default Destructor */
  ~ForEach();

  const std::string& GetIterationindexdatatype() const;
  void SetIterationindexdatatype(const std::string& value);

  const std::string& GetShowiterationindex() const;
  void SetShowiterationindex(const std::string& value);

  const std::string& GetInputpartition() const;
  void SetInputpartition(const std::string& value);

  const std::string& GetInputpartitiondimension() const;
  void SetInputpartitiondimension(const std::string& value);

  const std::string& GetInputpartitionwidth() const;
  void SetInputpartitionwidth(const std::string& value);

  const std::string& GetInputpartitionoffset() const;
  void SetInputpartitionoffset(const std::string& value);

  const std::string& GetOutputconcatenationdimension() const;
  void SetOutputconcatenationdimension(const std::string& value);

  const std::string& GetSubsysmaskparameterpartition() const;
  void SetSubsysmaskparameterpartition(const std::string& value);

  const std::string& GetSubsysmaskparameterpartitiondimension() const;
  void SetSubsysmaskparameterpartitiondimension(const std::string& value);

  const std::string& GetSubsysmaskparameterpartitionwidth() const;
  void SetSubsysmaskparameterpartitionwidth(const std::string& value);

  const std::string& GetSpecifiednumiters() const;
  void SetSpecifiednumiters(const std::string& value);

private:

  std::string m_Iterationindexdatatype;

  std::string m_Showiterationindex;

  std::string m_Inputpartition;

  std::string m_Inputpartitiondimension;

  std::string m_Inputpartitionwidth;

  std::string m_Inputpartitionoffset;

  std::string m_Outputconcatenationdimension;

  std::string m_Subsysmaskparameterpartition;

  std::string m_Subsysmaskparameterpartitiondimension;

  std::string m_Subsysmaskparameterpartitionwidth;

  std::string m_Specifiednumiters;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FOREACH_H
