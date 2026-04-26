// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __RectangleLAYOUTDATABASE_H__
#define __RectangleTypeLAYOUTDATABASE_H__

#include "Color.h"
#include "RectangleType.h"

/**
 * @brief Encapsulates all information required for layouting
 * a rectangular element.
 */
class RectangleLayoutDataBase
{
public:
  RectangleLayoutDataBase();
  RectangleLayoutDataBase(const RectangleType& position,
    const Color& foregroundColor, const Color& backgroundColor);
  virtual ~RectangleLayoutDataBase() = default;

protected:
  RectangleType position_;
  Color foregroundColor_;
  Color backgroundColor_;
};

#endif // RectangleTypeLAYOUTDATABASE_H