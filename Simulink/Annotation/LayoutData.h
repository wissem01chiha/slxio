// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef LAYOUTDATA_H
#define LAYOUTDATA_H

#include "ABINamespace.h"
#include "Color.h"
#include "RectangleLayoutDataBase.h"
#include "RectangleType.h"
#include "Type.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Encapsulates all information required for layouting an
 * annotation (relative to its parent's canvas).
 * class AnnotationLayoutData extends RectangleTypeLayoutDataBase
 */
class LayoutData : public RectangleTypeLayoutDataBase
{
public:
  LayoutData(const RectangleType& position, const Color& foregroundColor,
    const Color& backgroundColor, bool borderVisible)
    : RectangleTypeLayoutDataBase(position, foregroundColor, backgroundColor)
    , borderVisible_(borderVisible)
  {
  }

  bool isBorderVisible() const;

private:
  const bool borderVisible_;
};

SLXIO_ABI_NAMESPACE_END

#endif // ANNOTATIONLAYOUTDATA_H
