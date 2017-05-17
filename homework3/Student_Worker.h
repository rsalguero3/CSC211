/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student_Worker.h
 * Author: Ricardo
 *
 * Created on June 5, 2016, 6:59 PM
 */

#ifndef STUDENT_WORKER_H
#define STUDENT_WORKER_H

#include "Person.h"
#include "Employee.h"
#include "Student.h"

class Student_Worker : public Employee, public Student{
    public:
        Student_Worker(const std::string& the_name, Address* the_address, double the_rate,
                const std::string& the_major) : Person(the_name, the_address), Employee(the_name,
                        the_address, the_rate), Student(the_name, the_address, the_major){}
                
                std::string to_string() const;
};


#endif /* STUDENT_WORKER_H */

