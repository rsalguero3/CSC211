/* 
 * File:   %<%NAME%>%.%<%EXTENSION%>%
 * Author: %<%USER%>%
 *
 * Created on %<%DATE%>%, %<%TIME%>%
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef ROTATETEST_H
#define ROTATETEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "rotate.h"
using namespace std;
void rotate(int& x, int& y, int&z);

class rotateTest : public CxxTest::TestSuite {
public:
    void testRotate() {
      TS_ASSERT_EQUALS(rotate(x, y, z), );
};
#endif /* ROTATETEST_H */

