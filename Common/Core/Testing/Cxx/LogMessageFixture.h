// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LOGMESSAGEFIXTURE_H
#define LOGMESSAGEFIXTURE_H

#include "Logger.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT LogMessage : public ILogMessage {
public:
  explicit LogMessage(const std::string &text) : m_text(text) {}

  std::string ToString() const override { return m_text; }

  bool Empty() const override { return m_text.empty(); }

  std::unique_ptr<ILogMessage>
  operator+(const ILogMessage &rhs) const override {
    return std::make_unique<LogMessage>(m_text + " " + rhs.ToString());
  }

  DataType GetDataType() const override { return DataType::SLXIO_TYPE_STRING; }

private:
  std::string m_text;
};

SLXIO_ABI_NAMESPACE_END

#endif // LOGMESSAGEFIXTURE_H