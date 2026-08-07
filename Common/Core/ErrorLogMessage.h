// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORLOGMESSAGE_H
#define ERRORLOGMESSAGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataType.h"
#include "ILogMessage.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ErrorLogMessage
 * @brief ILogMessage implementation for one or more HError status codes.
 *
 * ErrorLogMessage stores a collection of HError values representing
 * a sequence of related errors. This allows multiple errors generated
 * during an operation to be propagated and logged as a single message.
 */
class SLXIO_APIEXPORT ErrorLogMessage : public ILogMessage
{
public:
  /* Construct a message containing a single error code.*/
  explicit ErrorLogMessage(HError error);

  /* Serialize the message to a string for logging */
  std::string ToString() const override;

  /* Returns SLXIO_TYPE_ERRORLOGMESSAGE type index */
  DataType GetDataType() const override;

  /** Returns true when no errors are stored. */
  bool Empty() const override;

  /**
   * Concatenating two ErrorLogMessage objects produces a new
   * ErrorLogMessage containing the errors from both operands in
   * insertion order.
   */
  std::unique_ptr<ILogMessage> operator+(const ILogMessage& rhs) const override;
  ~ErrorLogMessage() = default;

private:
  std::vector<HError> m_data;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ERRORLOGMESSAGE_H