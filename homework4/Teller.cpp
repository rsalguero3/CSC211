#include "Teller.h"

Teller::Teller(){
    this->free = true;
}
bool Teller::is_free() const{
    return this->free;
}
int Teller::get_time_next_free() const{
    return this->time_next_free;
}

int Teller::get_total_service_time() const{
    return this->total_service_time;
}

int Teller::get_total_idle_time() const{
    return this->total_idle_time;
}
  
int Teller::get_num_customers_served() const{
    return this->num_customers_served;
}
  
void Teller::start_service(int time, Customer* currentCustomer){
    this->currentCustomer = currentCustomer;
    this->currentCustomer->start_service(time);
    this->free = false;
    this->time_service_started = time;
    this->total_idle_time += (time - this->time_service_ended);
    this->num_customers_served++;
    this->time_next_free = time + currentCustomer->get_service_time();
}

void Teller::end_service(int time){
    this->free = true;
    this->time_service_ended = time;
    this->total_service_time += this->time_service_ended - this->time_service_started;
    delete this->currentCustomer;
}