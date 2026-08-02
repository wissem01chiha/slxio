// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FMI_LIBRARY
#define FMI_LIBRARY

#ifdef USE_EXTERNAL_FMI_LIBRARY
    #include <fmi-library/Fmi-library.h>
#else
    #include <src/src/Import/include/FMI/fmi_import_context.h>
#endif

#endif // FMI_LIBRARY
