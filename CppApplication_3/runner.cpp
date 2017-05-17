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
#include "SimulatorTest.h"

static SimulatorTest suite_SimulatorTest;

static CxxTest::List Tests_SimulatorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SimulatorTest( "SimulatorTest.h", 10, "SimulatorTest", suite_SimulatorTest, Tests_SimulatorTest );

static class TestDescription_SimulatorTest_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_SimulatorTest_testMyFunction() : CxxTest::RealTestDescription( Tests_SimulatorTest, suiteDescription_SimulatorTest, 12, "testMyFunction" ) {}
 void runTest() { suite_SimulatorTest.testMyFunction(); }
} testDescription_SimulatorTest_testMyFunction;

#include <cxxtest/Root.cpp>
