// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ALGEBRAICCONSTRAINT_H
#define ALGEBRAICCONSTRAINT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT AlgebraicConstraint : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    AlgebraicConstraint();

    /** Default Destructor */
    ~AlgebraicConstraint();

    const std::string& GetConstraint() const;
    void SetConstraint(const std::string& value);

    const std::string& GetSolver() const;
    void SetSolver(const std::string& value);

    const std::string& GetTolerance() const;
    void SetTolerance(const std::string& value);

    const std::string& GetInitialguess() const;
    void SetInitialguess(const std::string& value);

private:
    std::string m_Constraint;

    std::string m_Solver;

    std::string m_Tolerance;

    std::string m_Initialguess;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ALGEBRAICCONSTRAINT_H
