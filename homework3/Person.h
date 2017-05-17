
#ifndef PERSON_H
#define PERSON_H
#include "Address.h"
#include <string>


class Person {
public:
        Person(){}
        explicit Person(const std::string& the_name, Address* the_address):
        name(the_name), p_address(the_address){}
        
        Person(const Person& other): name(other.name), p_address(other.p_address->clone()){}
        
        Person& operator=(Person& other);
        
        virtual ~Person() {delete p_address;}
        
        void set_house_number(std::string new_house_number);
        
        void swap(Person& other);
        std::string to_string() const;
        std::string getName() const;
        
protected:
    std::string name;
    Address* p_address;           
};

inline void swap(Person& p1, Person& p2){
    p1.swap(p2);
}

#endif /* PERSON_H */

