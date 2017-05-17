#include "Bank_Simulator.h"
#include "Random.h"
using namespace std;
Random myrandom(10);

void Simulator::run_simulation(int max, double arrival){
    int current_time = 0;
    
    for (current_time; current_time < 1; current_time++){
        if(myrandom.next_double() < arrival){
            the_customers.push(new Customer(current_time));
        }
        
        for (size_t i = 0; i < tellers.size(); i++){
            if (tellers[i].is_free() && (!the_customers.empty())){
                Customer* nextCustomer = the_customers.front();
                the_customers.pop();
                tellers[i].start_service(current_time, nextCustomer);
            }
            
            else if(tellers[i].get_time_next_free()== current_time){
                tellers[i].end_service(current_time);
            }
           
        }
    }
}

void Simulator::output_statistics(){
    cout << "Total Customers Served: " << Customer::get_total_customers_served() << endl;
    double average_wait =
            double(Customer::get_total_delay_time()) / Customer::get_total_customers_served();
    cout << "Average Wait: " << average_wait << endl;
    cout << "Teller Total     Total    Total Average\n"
            << "       Customers Service  Idle  Idle\n"
            << "       Served    Time     Time  Time\n";
    for (size_t i = 0; i < tellers.size(); i++) {
        cout << setw(5) << i;
        cout << setw(9) << tellers[i].get_num_customers_served();
        cout << setw(7) << tellers[i].get_total_service_time();
        cout << setw(9) << tellers[i].get_total_idle_time();
        cout << setw(9) << setprecision(3)
                << double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
        cout << endl;
    }
    
    
    cout << setw(9) << tellers[0].get_num_customers_served();
    cout << setw(9) << tellers[1].get_num_customers_served();
    cout << setw(9) << tellers[2].get_num_customers_served();
    tellers.pop_back();
    cout << setw(9) << tellers[0].get_time_next_free();

    cout << setw(9) << tellers.size();
}
void Simulator::setTellers(int num){
    for (size_t i = 0; i < num; i++){
        this->tellers.push_back(Teller());
    }
    
    
}
std::vector<Teller> Simulator::getTellers() const{
    return this->tellers;
}



