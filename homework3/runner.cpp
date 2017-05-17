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
#include "Inheritance_HW_Test.h"

static Inheritance_HW_Test suite_Inheritance_HW_Test;

static CxxTest::List Tests_Inheritance_HW_Test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Inheritance_HW_Test( "Inheritance_HW_Test.h", 18, "Inheritance_HW_Test", suite_Inheritance_HW_Test, Tests_Inheritance_HW_Test );

static class TestDescription_Inheritance_HW_Test_testPerson : public CxxTest::RealTestDescription {
public:
 TestDescription_Inheritance_HW_Test_testPerson() : CxxTest::RealTestDescription( Tests_Inheritance_HW_Test, suiteDescription_Inheritance_HW_Test, 21, "testPerson" ) {}
 void runTest() { suite_Inheritance_HW_Test.testPerson(); }
} testDescription_Inheritance_HW_Test_testPerson;

static class TestDescription_Inheritance_HW_Test_testUS_Address : public CxxTest::RealTestDescription {
public:
 TestDescription_Inheritance_HW_Test_testUS_Address() : CxxTest::RealTestDescription( Tests_Inheritance_HW_Test, suiteDescription_Inheritance_HW_Test, 40, "testUS_Address" ) {}
 void runTest() { suite_Inheritance_HW_Test.testUS_Address(); }
} testDescription_Inheritance_HW_Test_testUS_Address;

static class TestDescription_Inheritance_HW_Test_testGerman_Address : public CxxTest::RealTestDescription {
public:
 TestDescription_Inheritance_HW_Test_testGerman_Address() : CxxTest::RealTestDescription( Tests_Inheritance_HW_Test, suiteDescription_Inheritance_HW_Test, 50, "testGerman_Address" ) {}
 void runTest() { suite_Inheritance_HW_Test.testGerman_Address(); }
} testDescription_Inheritance_HW_Test_testGerman_Address;

static class TestDescription_Inheritance_HW_Test_testEmployee : public CxxTest::RealTestDescription {
public:
 TestDescription_Inheritance_HW_Test_testEmployee() : CxxTest::RealTestDescription( Tests_Inheritance_HW_Test, suiteDescription_Inheritance_HW_Test, 62, "testEmployee" ) {}
 void runTest() { suite_Inheritance_HW_Test.testEmployee(); }
} testDescription_Inheritance_HW_Test_testEmployee;

static class TestDescription_Inheritance_HW_Test_testStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_Inheritance_HW_Test_testStudent() : CxxTest::RealTestDescription( Tests_Inheritance_HW_Test, suiteDescription_Inheritance_HW_Test, 78, "testStudent" ) {}
 void runTest() { suite_Inheritance_HW_Test.testStudent(); }
} testDescription_Inheritance_HW_Test_testStudent;

static class TestDescription_Inheritance_HW_Test_testStudentWorker : public CxxTest::RealTestDescription {
public:
 TestDescription_Inheritance_HW_Test_testStudentWorker() : CxxTest::RealTestDescription( Tests_Inheritance_HW_Test, suiteDescription_Inheritance_HW_Test, 94, "testStudentWorker" ) {}
 void runTest() { suite_Inheritance_HW_Test.testStudentWorker(); }
} testDescription_Inheritance_HW_Test_testStudentWorker;

#include <cxxtest/Root.cpp>
