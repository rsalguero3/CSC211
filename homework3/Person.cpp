#include "Person.h"
#include "Address.h"
#include <sstream>

std::string Person::to_string() const {
    std::ostringstream oss;
    oss << this->name << '\n' << this->p_address->to_string();
    return oss.str();
}

std::string Person::getName() const{
    return this->name;
}

void Person::set_house_number(std::string new_house_number){
    p_address->set_house_number(new_house_number);
}

void Person::swap(Person& other){
    std::swap(name, other.name);
    std::swap(p_address, other.p_address);
}

Person& Person::operator =(Person& other){
    this->swap(other);
    return *this;
}

