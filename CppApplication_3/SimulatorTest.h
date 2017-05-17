#ifndef SIMULATORTEST_H
#define SIMULATORTEST_H

#include <cxxtest/TestSuite.h>
#include "Bank_Simulator.h"
#include "Teller.h"
#include "Customer.h"
#include "Random.h"

class SimulatorTest : public CxxTest::TestSuite {
public:
    void testMyFunction() {
        Simulator simulator;
        int num_tellers = 3;
        double arrival_rate = 30.0;
        int max_time = 200;
        int max_service_time = 5;
        simulator.setTellers(num_tellers);
        Customer::set_max_service_time(max_service_time);
        simulator.run_simulation(max_time, arrival_rate / 60.0);
        simulator.output_statistics();
        int result = Customer::get_total_customers_served();
        TS_ASSERT_EQUALS(result, 97);
        double average_wait =
            double(Customer::get_total_delay_time()) / Customer::get_total_customers_served();
        TS_ASSERT_DELTA(average_wait,0,0);

        std::vector<Teller> tellers = simulator.getTellers();
        double result1;
        for (size_t i = 0; i < tellers.size(); i++) {
            switch (i)
            {
            case 0: 
                result = tellers[i].get_num_customers_served();
                TS_ASSERT_EQUALS(result, 49);
                result = tellers[i].get_total_service_time();
                TS_ASSERT_EQUALS(result, 98);
                result = tellers[i].get_total_idle_time();
                TS_ASSERT_EQUALS(result, 100);
                result1 = double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
                TS_ASSERT_DELTA(result1,2.04 ,0.02);
                break;

            case 1:
                result = tellers[i].get_num_customers_served();
                TS_ASSERT_EQUALS(result, 33);
                result = tellers[i].get_total_service_time();
                TS_ASSERT_EQUALS(result, 57);
                result = tellers[i].get_total_idle_time();
                TS_ASSERT_EQUALS(result, 142);
                result1 = double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
                TS_ASSERT_DELTA(result1,4.3,0.2);
                break;     

            case 2:
                result = tellers[i].get_num_customers_served();
                TS_ASSERT_EQUALS(result, 15);
                result = tellers[i].get_total_service_time();
                TS_ASSERT_EQUALS(result, 31);
                result = tellers[i].get_total_idle_time();
                TS_ASSERT_EQUALS(result, 136);
                result1 = double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
                TS_ASSERT_DELTA(result1,9.07,0.2);
                break;     
            }

}

        }

    };

#endif  /* SIMULATORTEST_H */

