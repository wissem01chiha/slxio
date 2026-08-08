// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "Doctest.h"
#include "SimulinkVersion.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkVersion Year")
{
  CHECK(SimulinkVersion::Year() > 2000);
}

TEST_CASE("SimulinkVersion Release")
{
  const char release = SimulinkVersion::Release();

  CHECK(std::toupper(release) >= 'A');
  CHECK(std::toupper(release) <= 'Z');
}

TEST_CASE("SimulinkVersion ToString")
{
  const std::string version = SimulinkVersion::ToString();

  CHECK_FALSE(version.empty());
}

TEST_CASE("SimulinkVersion GetRelease")
{
  const auto release = SimulinkVersion::GetRelease();
  CHECK(static_cast<int>(release) >= 0);
}

SLXIO_ABI_NAMESPACE_END