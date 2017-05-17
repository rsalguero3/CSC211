#include "Employee.h"
#include <sstream>


std::string Employee::to_string() const{
    std::ostringstream oss;
    oss << this->name << '\n' << p_address->to_string() << "\nRate: " << this->rate;
    return oss.str();
}

void Employee::set_house_number(std::string new_house_number){
        p_address->set_house_number(new_house_number);
}