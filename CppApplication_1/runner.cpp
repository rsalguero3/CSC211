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
#include "rotateTest.h"

static rotateTest suite_rotateTest;

static CxxTest::List Tests_rotateTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_rotateTest( "rotateTest.h", 23, "rotateTest", suite_rotateTest, Tests_rotateTest );

static class TestDescription_rotateTest_testRotate : public CxxTest::RealTestDescription {
public:
 TestDescription_rotateTest_testRotate() : CxxTest::RealTestDescription( Tests_rotateTest, suiteDescription_rotateTest, 25, "testRotate" ) {}
 void runTest() { suite_rotateTest.testRotate(); }
} testDescription_rotateTest_testRotate;

#include <cxxtest/Root.cpp>
