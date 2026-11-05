/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Doctest.h"
#include "ErrorCode.h"
#include "ErrorCategory.h"

namespace slxio
{

TEST_CASE("Error codes use the category and messages")
{
    const std::error_code error = make_error_code(ErrorCode::InvalidArgument);

    CHECK(error.value() == static_cast<int>(ErrorCode::InvalidArgument));
    CHECK(error.category().name() == std::string("slxio"));
    CHECK(error.message() == "Invalid argument");
    CHECK(make_error_code(ErrorCode::Ok).message() == "Success");
    CHECK(ErrCategory().message(-1) == "Unknown error");
}

} // namespace slxio