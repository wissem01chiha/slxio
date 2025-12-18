// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef APIEXPORT_H
#define APIEXPORT_H

#include "Option.h"
#include "Platform.h"

#ifdef PLATFORM_WINDOWS
#ifdef BUILD_SHARED_LIBS
#define APIEXPORT __declspec(dllexport)
#else
#define APIEXPORT
#endif
#else
#define APIEXPORT __attribute__((visibility("default")))
#endif

#endif // APIEXPORT_H