/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "functionsTest.h"

static functionsTest suite_functionsTest;

static CxxTest::List Tests_functionsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_functionsTest( "functionsTest.h", 23, "functionsTest", suite_functionsTest, Tests_functionsTest );

static class TestDescription_functionsTest_testrotate : public CxxTest::RealTestDescription {
public:
 TestDescription_functionsTest_testrotate() : CxxTest::RealTestDescription( Tests_functionsTest, suiteDescription_functionsTest, 29, "testrotate" ) {}
 void runTest() { suite_functionsTest.testrotate(); }
} testDescription_functionsTest_testrotate;

#include <cxxtest/Root.cpp>
