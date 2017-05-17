#include "Student.h"

std::string Student::to_string() const {
    return this->name + '\n' + p_address->to_string() + "\nMajor: " + this->student_major;
}

void Student::set_house_number(std::string new_house_number){
    p_address->set_house_number(new_house_number);
}

void Student::set_gpa(double new_gpa){
    gpa = new_gpa;
}