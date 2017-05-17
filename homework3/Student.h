

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"



class Student : public virtual Person {
    public:
        
        Student(){}
        
        explicit Student(const std::string& the_name, Address* the_address,
                const std::string& the_major) : Person(the_name, the_address),
                gpa(0.0), student_major(the_major) {}
        
        void set_house_number(std::string new_house_number);
        
        void set_gpa(double new_gpa);
        
        std::string to_string() const;
        
        protected:
            double gpa;
            std::string student_major;
};

#endif /* STUDENT_H */

