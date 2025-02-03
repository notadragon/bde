// bsls_post.h                                                         -*-C++-*-
#ifndef INCLUDED_BSLS_POST
#define INCLUDED_BSLS_POST

#include <bsls_ident.h>
BSLS_IDENT("$Id: $")

//@PURPOSE: Provide postcondition macros.
//
//@MACROS:
//  BSLS_POST:
//  BSLS_POST_SAFE:
//  BSLS_POST_OPT:
//  BSLS_POST_BODY:
//  BSLS_POST_BODY_SAFE:
//  BSLS_POST_BODY_OPT:
//

#include <bsls_assert.h>

                                // ==============
                                // BSLS_POST_SAFE
                                // ==============

#if defined(BSLS_ASSERT_SAFE_IS_ACTIVE)
#define BSLS_POST_SAFE(X)                                                     \
    BSLS_ASSERT_POST_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_SAFE)
#define BSLS_POST_BODY_SAFE(X)                                                \
    BSLS_ASSERT_POST_BODY_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_SAFE)
#else
#define BSLS_POST_SAFE(X)
#define BSLS_POST_BODY_SAFE(X)                                                \
    BSLS_ASSERT_DISABLED_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_SAFE)
#endif

                                // =========
                                // BSLS_POST
                                // =========

#if defined(BSLS_ASSERT_IS_ACTIVE)
#define BSLS_POST(X)                                                          \
    BSLS_ASSERT_POST_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_ASSERT)
#define BSLS_POST_BODY(X)                                                     \
    BSLS_ASSERT_POST_BODY_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_ASSERT)
#else
#define BSLS_POST(X)
#define BSLS_POST_BODY(X)                                                     \
    BSLS_ASSERT_DISABLED_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_ASSERT)
#endif


                                // =============
                                // BSLS_POST_OPT
                                // =============

#if defined(BSLS_ASSERT_OPT_IS_ACTIVE)
#define BSLS_POST_OPT(X)                                                      \
    BSLS_ASSERT_POST_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_OPT)
#define BSLS_POST_BODY_OPT(X)                                                 \
    BSLS_ASSERT_POST_BODY_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_OPT)
#else
#define BSLS_POST_OPT(X)
#define BSLS_POST_BODY_OPT(X)                                                 \
    BSLS_ASSERT_DISABLED_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_OPT)
#endif


#endif

// ----------------------------------------------------------------------------
// Copyright 2018 Bloomberg Finance L.P.
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
// ----------------------------- END-OF-FILE ----------------------------------
