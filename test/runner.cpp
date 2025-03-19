/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "Tests.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "Tests.h", 5, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testArguments : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testArguments() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 8, "testArguments" ) {}
 void runTest() { suite_MyTestSuite.testArguments(); }
} testDescription_suite_MyTestSuite_testArguments;

static class TestDescription_suite_MyTestSuite_testNegativeD : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testNegativeD() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 13, "testNegativeD" ) {}
 void runTest() { suite_MyTestSuite.testNegativeD(); }
} testDescription_suite_MyTestSuite_testNegativeD;

static class TestDescription_suite_MyTestSuite_testPositiveValues : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testPositiveValues() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 18, "testPositiveValues" ) {}
 void runTest() { suite_MyTestSuite.testPositiveValues(); }
} testDescription_suite_MyTestSuite_testPositiveValues;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
