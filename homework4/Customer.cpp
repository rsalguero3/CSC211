#include "Customer.h"
#include "Random.h"

extern Random myrandom;
int Customer::total_delay_time;
int Customer::max_service_time;
int Customer::total_customers_served;

Customer::Customer(int the_arrival_time){
    this->arrival_time = the_arrival_time;
    this->service_time = 1 + myrandom.next_int(Customer::max_service_time);
}

int Customer::start_service(int time){
    this->delay_time = time - this->arrival_time; 
    Customer::total_delay_time += this->delay_time;
    Customer::total_customers_served++;
}    

int Customer::get_delay_time() const{
    return delay_time;
}

int Customer::get_arrival_time() const{
    return arrival_time;
}

int Customer::get_service_time() const{
    return this->service_time;
}

int Customer::get_total_delay_time(){
    return Customer::total_delay_time;
}

int Customer::get_total_customers_served(){
    return Customer::total_customers_served;
}