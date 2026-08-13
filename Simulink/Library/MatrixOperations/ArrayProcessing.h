// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ARRAYPROCESSING_H
#define ARRAYPROCESSING_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ArrayProcessing : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ArrayProcessing();

  /** Default Destructor */
  ~ArrayProcessing();

  const std::string& GetInportneighborhood() const;
  void SetInportneighborhood(const std::string& value);

  const std::string& GetPaddingoption() const;
  void SetPaddingoption(const std::string& value);

  const std::string& GetPaddingconstant() const;
  void SetPaddingconstant(const std::string& value);

  const std::string& GetNeighborhoodsize() const;
  void SetNeighborhoodsize(const std::string& value);

  const std::string& GetStride() const;
  void SetStride(const std::string& value);

  const std::string& GetProcessingoffset() const;
  void SetProcessingoffset(const std::string& value);

  const std::string& GetProcessingwidth() const;
  void SetProcessingwidth(const std::string& value);

  const std::string& GetOutputsize() const;
  void SetOutputsize(const std::string& value);

  const std::string& GetUsagetype() const;
  void SetUsagetype(const std::string& value);

  const std::string& GetFilterspatialdimensions() const;
  void SetFilterspatialdimensions(const std::string& value);

  const std::string& GetNumberofchannels() const;
  void SetNumberofchannels(const std::string& value);

  const std::string& GetNumberoffilters() const;
  void SetNumberoffilters(const std::string& value);

  const std::string& GetActivatefastersimulation() const;
  void SetActivatefastersimulation(const std::string& value);

  const std::string& GetMathoperation() const;
  void SetMathoperation(const std::string& value);

private:

  std::string m_Inportneighborhood;

  std::string m_Paddingoption;

  std::string m_Paddingconstant;

  std::string m_Neighborhoodsize;

  std::string m_Stride;

  std::string m_Processingoffset;

  std::string m_Processingwidth;

  std::string m_Outputsize;

  std::string m_Usagetype;

  std::string m_Filterspatialdimensions;

  std::string m_Numberofchannels;

  std::string m_Numberoffilters;

  std::string m_Activatefastersimulation;

  std::string m_Mathoperation;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ARRAYPROCESSING_H
