// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORTTYPE_H
#define SIMULINKPORTTYPE_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementType.h"
#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Enumeration of port types found in Simulink models.
 * The SLX file uses a rather intransparent way of specifying the
 * ports of block: The parameter 'Ports' points to array that has 0-8
 * elements. Each array entry specifies the number of ports of a
 * certain type. This enumeration is meant to make this more explicit
 * and to prevent an implementation with a heavy if/then/else-density.
 * @code{.xml}
 * <P Name="Ports">[0, 0, 0, 0, 0, 1, 1]</P>
 * @endcode
 * The following list explains the port type for each index.
 * 0 : inports
 * 1 : outports
 * 2 : enable ports
 * 3 : trigger ports
 * 4 : state
 * 5 : LConn
 * 6 : RConn
 * 7 : ifaction
 */
class SimulinkPortType : public SimulinkElementType {
public:
  enum Type {
    INPORT = 0,
    OUTPORT = 1,
    ENABLE = 2,
    TRIGGER = 3,
    STATE = 4,
    LCONN = 5,
    RCONN = 6,
    IFACTION = 7,
  };
  SimulinkPortType() = default;
  bool isA(const SimulinkPortType &typeObj);
  friend bool operator==(const SimulinkPortType &lhs,
                         const SimulinkPortType &rhs);
  std::string ToString() const;
  ~SimulinkPortType() = default;

private:
  SimulinkPortType::Type type_;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKPORTTYPE_H
