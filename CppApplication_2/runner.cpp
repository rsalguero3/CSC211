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
#include "same_elementsTest.h"

static same_elementsTest suite_same_elementsTest;

static CxxTest::List Tests_same_elementsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_same_elementsTest( "same_elementsTest.h", 23, "same_elementsTest", suite_same_elementsTest, Tests_same_elementsTest );

static class TestDescription_same_elementsTest_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_same_elementsTest_testMyFunction() : CxxTest::RealTestDescription( Tests_same_elementsTest, suiteDescription_same_elementsTest, 29, "testMyFunction" ) {}
 void runTest() { suite_same_elementsTest.testMyFunction(); }
} testDescription_same_elementsTest_testMyFunction;

#include <cxxtest/Root.cpp>
