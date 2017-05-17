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


#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "same_elements.h"
#include <algorithm>
#include <iostream>

using namespace std;

class same_elementsTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        int a[] = {1, 2, 2, 3, 6, 8};
        int b[] = {1, 2, 2, 3, 6, 8};
        bool b1; 
        int z = 2;
        same_elements* ele = new same_elements();
        b1 = ele->check_elements(a, b, z);
        TS_ASSERT_EQUALS(b1, true);
    }
};

