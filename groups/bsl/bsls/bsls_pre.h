// bsls_pre.h                                                         -*-C++-*-
#ifndef INCLUDED_BSLS_PRE
#define INCLUDED_BSLS_PRE

#include <bsls_ident.h>
BSLS_IDENT("$Id: $")

//@PURPOSE: Provide precondition macros.
//
//@MACROS:
//  BSLS_PRE:
//  BSLS_PRE_SAFE:
//  BSLS_PRE_OPT:
//  BSLS_PRE_BODY:
//  BSLS_PRE_BODY_SAFE:
//  BSLS_PRE_BODY_OPT:
//

#include <bsls_assert.h>

                                // =============
                                // BSLS_PRE_SAFE
                                // =============

#if defined(BSLS_ASSERT_SAFE_IS_ACTIVE)
#define BSLS_PRE_SAFE(X)                                                      \
    BSLS_ASSERT_PRE_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_SAFE)
#define BSLS_PRE_BODY_SAFE(X)                                                 \
    BSLS_ASSERT_PRE_BODY_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_SAFE)
#else
#define BSLS_PRE_SAFE(X)
#define BSLS_PRE_BODY_SAFE(X)                                                 \
    BSLS_ASSERT_DISABLED_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_SAFE)
#endif

                                // ========
                                // BSLS_PRE
                                // ========

#if defined(BSLS_ASSERT_IS_ACTIVE)
#define BSLS_PRE(X)                                                           \
    BSLS_ASSERT_PRE_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_ASSERT)
#define BSLS_PRE_BODY(X)                                                      \
    BSLS_ASSERT_PRE_BODY_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_ASSERT)
#else
#define BSLS_PRE(X)
#define BSLS_PRE_BODY(X)                                                      \
    BSLS_ASSERT_DISABLED_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_ASSERT)
#endif


                                // ============
                                // BSLS_PRE_OPT
                                // ============

#if defined(BSLS_ASSERT_OPT_IS_ACTIVE)
#define BSLS_PRE_OPT(X)                                                       \
    BSLS_ASSERT_PRE_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_OPT)
#define BSLS_PRE_BODY_OPT(X)                                                  \
    BSLS_ASSERT_PRE_BODY_IMP(X,BloombergLP::bsls::Assert::k_LEVEL_OPT)
#else
#define BSLS_PRE_OPT(X)
#define BSLS_PRE_BODY_OPT(X)                                                  \
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
