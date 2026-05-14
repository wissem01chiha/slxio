# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set(CTEST_PROJECT_NAME "slxio")
set(CTEST_NIGHTLY_START_TIME "01:00:00 UTC")
set(CTEST_OUTPUT_ON_FAILURE TRUE)

set(CTEST_DROP_METHOD "https")
set(CTEST_DROP_SITE "open.cdash.org")
set(CTEST_DROP_LOCATION "/submit.php?project=slxio")
set(CTEST_DROP_SITE_CDASH TRUE)