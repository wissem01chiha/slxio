// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef OBJECT_H
#define OBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Object
 * @brief Abstract base class for most SLXIO objects.
 *
 * Provides essential utilities for type access, debugging, tracking,
 * safe casting, and modification. All classes should inherit from this
 * interface, with some exceptions for enumeration classes.
 */
class SLXIO_APIEXPORT Object
{
public:
  virtual ~Object() = default;

  /** Returns the underlying object type. */
  virtual DataType GetDataType() const = 0;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // OBJECT_H