#ifndef BANK_SIMULATOR_H
#define	BANK_SIMULATOR_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include "Customer.h"
#include "Teller.h"
#include "Random.h"

class Simulator
{
public:
    void run_simulation(int max, double arrival);  // start the simulation
    void output_statistics();  // print out the statistics
    void setTellers(int num);  // create number of teller
    std::vector<Teller> getTellers() const;  // return tellers vector
    
private:
    std::vector<Teller> tellers;
    std::queue<Customer*> the_customers;
};

#endif	/* BANK_SIMULATOR_H */
