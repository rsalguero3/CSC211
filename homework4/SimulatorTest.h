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
        double arrival_rate = 30;
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
                TS_ASSERT_EQUALS(result, 58);
                result = tellers[i].get_total_service_time();
                TS_ASSERT_EQUALS(result, 120);
                result = tellers[i].get_total_idle_time();
                TS_ASSERT_EQUALS(result, 78);
                result1 = double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
                TS_ASSERT_DELTA(result1,1.34,0.02);
                break;

            case 1:
                result = tellers[i].get_num_customers_served();
                TS_ASSERT_EQUALS(result, 29);
                result = tellers[i].get_total_service_time();
                TS_ASSERT_EQUALS(result, 63);
                result = tellers[i].get_total_idle_time();
                TS_ASSERT_EQUALS(result, 136);
                result1 = double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
                TS_ASSERT_DELTA(result1,4.69,0.2);
                break;     

            case 2:
                result = tellers[i].get_num_customers_served();
                TS_ASSERT_EQUALS(result, 10);
                result = tellers[i].get_total_service_time();
                TS_ASSERT_EQUALS(result, 26);
                result = tellers[i].get_total_idle_time();
                TS_ASSERT_EQUALS(result, 141);
                result1 = double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
                TS_ASSERT_DELTA(result1,14.1,0.2);
                break;     
            }

}

        }

    };

#endif  /* SIMULATORTEST_H */

