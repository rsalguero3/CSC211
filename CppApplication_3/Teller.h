#ifndef TELLER_H_
#define TELLER_H_
#include "Customer.h"

/** Class to model a teller */

class Teller
{
 public:
  Teller();
  bool is_free() const;
  int get_time_next_free() const;
  int get_total_service_time() const;
  int get_total_idle_time() const;
  int get_num_customers_served() const;
  void start_service(int time, Customer* currentCustomer);
  void end_service(int time);
  
 private:
  bool free;
  int time_next_free;
  int num_customers_served;
  int time_service_started;
  int time_service_ended;
  int total_service_time;
  int total_idle_time;
  Customer* currentCustomer;
  
};

#endif