/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: Ricardo
 *
 * Created on June 5, 2016, 2:51 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>
#include <algorithm>
#include <iostream>
#include <ostream>

class Employee : public virtual Person{
    public:  
    Employee(){}
    
    explicit Employee(const std::string& the_name, Address* the_address,
            double the_rate) : Person(the_name, the_address), rate(the_rate),
            hours(0.0){}
    
    void set_house_number(std::string new_house_number);
    
    std::string to_string() const;
    
    protected: 
        double rate;
        double hours;
};


#endif /* EMPLOYEE_H */

