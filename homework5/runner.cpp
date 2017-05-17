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
#include "testSorts1.h"

static testSorts1 suite_testSorts1;

static CxxTest::List Tests_testSorts1 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testSorts1( "testSorts1.h", 11, "testSorts1", suite_testSorts1, Tests_testSorts1 );

static class TestDescription_testSorts1_testSelectionSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts1_testSelectionSort() : CxxTest::RealTestDescription( Tests_testSorts1, suiteDescription_testSorts1, 13, "testSelectionSort" ) {}
 void runTest() { suite_testSorts1.testSelectionSort(); }
} testDescription_testSorts1_testSelectionSort;

#include <cxxtest/Root.cpp>
