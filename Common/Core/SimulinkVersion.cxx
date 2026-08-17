#include "SimulinkVersion.h"
#include "SimulinkVersionMacro.h"
#include "SimulinkVersionRelease.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

UInt16 slxio::SimulinkVersion::Year()
{
    return (UInt16)SLXIO_SIMULINK_VERSION_YEAR;
}

char SimulinkVersion::Release() { return SLXIO_SIMULINK_VERSION_RELEASE; }

std::string SimulinkVersion::ToString()
{
    return SLXIO_SIMULINK_VERSION_STRING;
}

SimulinkVersionRelease SimulinkVersion::GetRelease()
{
#if SLXIO_SIMULINK_VERSION_YEAR == 2018 && SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2018a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2018 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2018b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2019 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2019a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2019 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2019b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2020 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2020a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2020 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2020b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2021 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2021a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2021 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2021b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2022 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2022a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2022 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2022b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2023 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2023a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2023 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2023b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2024 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2024a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2024 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2024b;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2025 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'a'
    return SimulinkVersionRelease::R2025a;

#elif SLXIO_SIMULINK_VERSION_YEAR == 2025 &&                                   \
    SLXIO_SIMULINK_VERSION_RELEASE == 'b'
    return SimulinkVersionRelease::R2025b;

#else
    return SimulinkVersionRelease::Unknown;
#endif
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio