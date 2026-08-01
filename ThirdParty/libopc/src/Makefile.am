# SPDX-FileCopyrightText: Copyright (c) 2010/2011, Florian Reuter
# SPDX-FileCopyrightText: Copyright (c) 2026, Wissem Chiha
# SPDX-License-Identifier: BSD-3-Clause

AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libplib.la libmce.la libopc.la

libplib_la_SOURCES = plib/plib.c

libmce_la_SOURCES = mce/helper.c \
	mce/textreader.c \
	mce/textwriter.c

libopc_la_SOURCES = opc/opc.c \
	opc/container.c \
	opc/file.c \
	opc/helper \
	opc/inputstream.c \
	opc/part.c \
	opc/properties.c \
	opc/relation.c \
	opc/xmlreader.c \
	opc/xmlwriter.c \
	opc/zip.c

include_HEADERS = plib/plib.h \
	mce/helper.h \
	mce/textreader.h \
	mce/textwriter.h  \
	opc/opc.h \
	opc/container.h \
	opc/file.h \
	opc/helper.h \
	opc/inputstream.h \
	opc/part.h \
	opc/properties.h \
	opc/relation.h \
	opc/xmlreader.h \
	opc/xmlwriter.h \
	opc/zip.h

EXTRA_DIST = README.md LICENSE.txt

AM_CFLAGS = -Wall -O2
AM_CPPFLAGS = $(LIBXML2_CFLAGS)
AM_LDADD = $(LIBXML2_LIBS)
