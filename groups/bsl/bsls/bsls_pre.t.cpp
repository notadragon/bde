// bsls_pre.t.cpp                                                     -*-C++-*-

#include <bsls_pre.h>

#include <bsls_asserttest.h>
#include <bsls_bsltestutil.h>

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace BloombergLP;

//=============================================================================
//                             TEST PLAN
//-----------------------------------------------------------------------------
//
//
//-----------------------------------------------------------------------------

// ============================================================================
//                     STANDARD BDE ASSERT TEST FUNCTION
// ----------------------------------------------------------------------------

namespace {

int testStatus = 0;

void aSsErT(bool condition, const char *message, int line)
{
    if (condition) {
        std::cout << "Error " __FILE__ "(" << line << "): " << message
                  << "    (failed)" << std::endl;

        if (0 <= testStatus && testStatus <= 100) {
            ++testStatus;
        }
    }
}

}  // close unnamed namespace

// ============================================================================
//               STANDARD BDE TEST DRIVER MACRO ABBREVIATIONS
// ----------------------------------------------------------------------------

#define ASSERT       BSLS_BSLTESTUTIL_ASSERT
#define ASSERTV      BSLS_BSLTESTUTIL_ASSERTV

// ============================================================================
//                   GLOBAL TYPEDEFS/CONSTANTS FOR TESTING
// ----------------------------------------------------------------------------

// ============================================================================
//                               USAGE EXAMPLE
// ----------------------------------------------------------------------------

namespace usage_example_1 {
///Usage
///-----
// This section illustrates intended use of this component.
//
///Example 1:
///- - - - - - - - - - - - - - - - - - - - - - - - -
// Define a function with a precondition.
//```
double sqrt(double x)
    BSLS_PRE(x >= 0)
{
    BSLS_PRE_BODY(x >= 0);

    return std::sqrt(x);
}    
//```
}  // close namespace usage_example_1

// ============================================================================
//                               MAIN PROGRAM
// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    int test = argc > 1 ? atoi(argv[1]) : 0;
    int verbose = argc > 2;
    int veryVerbose = argc > 3;
    int veryVeryVerbose = argc > 4;

    (void)verbose;
    (void)veryVerbose;
    (void)veryVeryVerbose;
    
    std::cout << "TEST " << __FILE__ << " CASE " << test << std::endl;

    switch (test) { case 0:  // Zero is always the leading case.
      case 2: {
        // --------------------------------------------------------------------
        // USAGE EXAMPLE
        //   Extracted from component header file.
        //
        // Concerns:
        //: 1 The usage example provided in the component header file compiles,
        //:   links, and runs as shown.
        //
        // Plan:
        //: 1 Incorporate usage example from header into test driver, remove
        //:   leading comment characters, and replace 'assert' with 'ASSERT'.
        //:   (C-1)
        //
        // Testing:
        //   USAGE EXAMPLE
        // --------------------------------------------------------------------

        if (verbose) std::cout << std::endl
                               << "USAGE EXAMPLE" << std::endl
                               << "=============" << std::endl;

        bsls::AssertTestHandlerGuard g;
                               
        BSLS_ASSERTTEST_ASSERT_PASS( usage_example_1::sqrt(1) );
        BSLS_ASSERTTEST_ASSERT_PASS( usage_example_1::sqrt(0) );
        BSLS_ASSERTTEST_ASSERT_FAIL( usage_example_1::sqrt(-1) );
        
      } break;
      case 1: {
        // --------------------------------------------------------------------
        // BREATHING/USAGE TEST
        //
        // Concerns:
        //
        // Plan:
        //
        // Testing:
        //
        // --------------------------------------------------------------------

        if (verbose) std::cout << std::endl
                               << "BREATHING TEST" << std::endl
                               << "==============" << std::endl;

        ASSERT(true);

      } break;
      default: {
        std::cerr << "WARNING: CASE `" << test << "' NOT FOUND." << std::endl;
        testStatus = -1;
      }
    }

    if (testStatus > 0) {
        std::cerr << "Error, non-zero test status = " << testStatus << "."
                  << std::endl;
    }

    return testStatus;
}

// ----------------------------------------------------------------------------
// Copyright 2019 Bloomberg Finance L.P.
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
