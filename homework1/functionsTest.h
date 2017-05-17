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

#ifndef FUNCTIONSTEST_H
#define FUNCTIONSTEST_H

#include <cxxtest/TestSuite.h>
#include "functions.h"
using namespace std;

void rotate(int& x, int& y, int& z);

class functionsTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

        void testrotate() {
        int x = 2;
        int y = 5;
        int z = 8;
        rotate(x, y, z);
        TS_ASSERT_EQUALS(z, 5); 
        
        int a[] = {1, 2, 2, 3, 6, 8};
        int b[] = {2, 1, 2, 3, 6, 8};
        int num = sizeof(a)/ sizeof(a[0]);
        TS_ASSERT_EQUALS(same_elements(a, b, num), true);

    }
};
#endif /* FUNCTIONSTEST_H */

