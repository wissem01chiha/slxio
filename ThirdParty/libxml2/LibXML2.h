// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LIBXML2_H
#define LIBXML2_H

#if USE_EXTERNAL_LIBXML2
    #include <libxml/parser.h>
    #include <libxml/tree.h>
    #include <libxml/xmlerror.h>
    #include <libxml/xpath.h>
    #include <libxml/xpathInternals.h>
    #include <libxml/xmlmemory.h>
    #include <libxml/xmlstring.h>
#else
    #include <src/include/libxml/parser.h>
    #include <src/include/libxml/tree.h>
    #include <src/include/libxml/xmlerror.h>
    #include <src/include/libxml/xpath.h>
    #include <src/include/libxml/xpathInternals.h>
    #include <src/include/libxml/xmlmemory.h>
    #include <src/include/libxml/xmlstring.h>
#endif

#endif // LIBXML2_H
