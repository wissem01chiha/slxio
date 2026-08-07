// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LAYOUTDATA_H
#define LAYOUTDATA_H

#include "AbiNamespaceMacro.h"
#include "Color.h"
#include "PlatformTypes.h"
#include "RectangleLayoutDataBase.h"
#include "RectangleType.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Encapsulates all information required for layouting an
 * annotation (relative to its parent's canvas).
 * class AnnotationLayoutData extends RectangleTypeLayoutDataBase
 */
class LayoutData : public RectangleTypeLayoutDataBase {
public:
  LayoutData(const RectangleType &position, const Color &foregroundColor,
             const Color &backgroundColor, bool borderVisible)
      : RectangleTypeLayoutDataBase(position, foregroundColor, backgroundColor),
        borderVisible_(borderVisible) {}

  bool isBorderVisible() const;

private:
  const bool borderVisible_;
};

SLXIO_ABI_NAMESPACE_END

#endif // ANNOTATIONLAYOUTDATA_H
