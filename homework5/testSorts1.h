#ifndef TESTSORTS1_H
#define TESTSORTS1_H

#include <cxxtest/TestSuite.h>

#include "Random.h"

extern int testSorts(int[], int[], int, int);


class testSorts1 : public CxxTest::TestSuite {
public:
    void testSelectionSort() {
        int tot_compares[7];
        int tot_exchanges[7];
        int num_sorts = 7;
        int num_items = 1000;
        int testSorts1 = testSorts(tot_compares, tot_exchanges, num_sorts, num_items);
        //Compares
        TS_ASSERT_EQUALS(tot_compares[0], 499500);
        TS_ASSERT_EQUALS(tot_compares[1], 498870);
        TS_ASSERT_EQUALS(tot_compares[2], 34935);
        TS_ASSERT_EQUALS(tot_compares[3], 5470);
        TS_ASSERT_EQUALS(tot_compares[4], 8689);
        TS_ASSERT_EQUALS(tot_compares[5], 16816);
        TS_ASSERT_EQUALS(tot_compares[6], 7281);
       
        
        //Exchanges
        TS_ASSERT_EQUALS(tot_exchanges[0], 990);
        TS_ASSERT_EQUALS(tot_exchanges[1], 238434);
        TS_ASSERT_EQUALS(tot_exchanges[2], 34935);
        TS_ASSERT_EQUALS(tot_exchanges[3], 5470);
        TS_ASSERT_EQUALS(tot_exchanges[4], 9976);
        TS_ASSERT_EQUALS(tot_exchanges[5], 2295);
        TS_ASSERT_EQUALS(tot_exchanges[6], 2427);
        }
};



#endif /* TESTSORTS1_H */

