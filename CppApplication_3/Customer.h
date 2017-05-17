#ifndef CUSTOMER_H
#define	CUSTOMER_H

#include "Random.h"

class Customer {
public:
    Customer(int the_arrival_time);
    int start_service(int time);    
    int get_delay_time() const;
    int get_arrival_time() const;
    int get_service_time() const;
    static void set_max_service_time(int the_max_service_time);
    static int get_total_delay_time();
    static int get_total_customers_served();
    
private:
    static int total_delay_time;
    static int max_service_time;
    static int total_customers_served;
    int arrival_time;
    int service_time;
    int delay_time;
   
};

#endif	/* CUSTOMER_H */
