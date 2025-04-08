/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "Tests.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "Tests.h", 6, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testLinearOneRoot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testLinearOneRoot() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 11, "testLinearOneRoot" ) {}
 void runTest() { suite_MyTestSuite.testLinearOneRoot(); }
} testDescription_suite_MyTestSuite_testLinearOneRoot;

static class TestDescription_suite_MyTestSuite_testLinearNoRoots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testLinearNoRoots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 31, "testLinearNoRoots" ) {}
 void runTest() { suite_MyTestSuite.testLinearNoRoots(); }
} testDescription_suite_MyTestSuite_testLinearNoRoots;

static class TestDescription_suite_MyTestSuite_testQuadratureNoRoots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testQuadratureNoRoots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 46, "testQuadratureNoRoots" ) {}
 void runTest() { suite_MyTestSuite.testQuadratureNoRoots(); }
} testDescription_suite_MyTestSuite_testQuadratureNoRoots;

static class TestDescription_suite_MyTestSuite_testQuadratureOneRoot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testQuadratureOneRoot() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 61, "testQuadratureOneRoot" ) {}
 void runTest() { suite_MyTestSuite.testQuadratureOneRoot(); }
} testDescription_suite_MyTestSuite_testQuadratureOneRoot;

static class TestDescription_suite_MyTestSuite_testQuadratureTwoRoots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testQuadratureTwoRoots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 81, "testQuadratureTwoRoots" ) {}
 void runTest() { suite_MyTestSuite.testQuadratureTwoRoots(); }
} testDescription_suite_MyTestSuite_testQuadratureTwoRoots;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
