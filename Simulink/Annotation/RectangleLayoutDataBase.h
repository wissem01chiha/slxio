#ifndef RectangleTypeLAYOUTDATABASE_H
#define RectangleTypeLAYOUTDATABASE_H

#include "Color.h"
#include "RectangleType.h"

/**
 * @brief Encapsulates all information required for layouting
 * a rectangular element.
 */
class RectangleTypeLayoutDataBase {
public:
  RectangleTypeLayoutDataBase();
  RectangleTypeLayoutDataBase(const RectangleType &position,
                              const Color &foregroundColor,
                              const Color &backgroundColor);
  virtual ~RectangleTypeLayoutDataBase() = default;

protected:
  RectangleType position_;
  Color foregroundColor_;
  Color backgroundColor_;
};

#endif // RectangleTypeLAYOUTDATABASE_H