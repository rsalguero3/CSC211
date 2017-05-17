

#ifndef INHERITANCE_HW_TEST_H_
#define INHERITANCE_HW_TEST_H_


#include <cxxtest/TestSuite.h>
#include "Address.h"
#include "USAddress.h"
#include "German_Address.h"
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Student_Worker.h"

using std::string;    

class Inheritance_HW_Test : public CxxTest::TestSuite {
public:

    void testPerson() {
        Address* add1 = new US_Address("123", "QCC Lane", "Worcester", "MA", "01605");
        string name = "John Doe";
        Person* person1 = new Person(name, add1);
        string result1 = person1->to_string();
        string expResult1 = name + '\n' + add1->to_string();
        TS_ASSERT_EQUALS(result1, expResult1);
        person1->set_house_number("321");
        string result2 = person1->to_string();
        string expResult2 = name + '\n' + add1->to_string();
        TS_ASSERT_EQUALS(result2, expResult2);
        string result3 = person1->getName();
        string expResult3 = name;
        TS_ASSERT_EQUALS(result3, expResult3);
        
        delete person1;
    }


    void testUS_Address() {

        Address* add1 = new US_Address("123", "QCC Lane", "Worcester", "MA", "01605");
        string result1 = add1->to_string();
        string expResult1 = "123 QCC Lane\nWorcester MA 01605\nUSA";
        TS_ASSERT_EQUALS(result1, expResult1);
        
        delete add1;
    }
        
    void testGerman_Address() {

        Address* add1 = new German_Address("345", "Bahnhofstr", "Jedenstadt", "D-99999");
        string result1 = add1->to_string();
        string expResult1 = "345 Bahnhofstr\nJedenstadt D-99999\nGermany";
        TS_ASSERT_EQUALS(result1, expResult1);
        
        delete add1;
    }

        

    void testEmployee() {

        Address* add1 = new US_Address("123", "QCC Lane", "Worcester", "MA", "01605");
        string name = "John Doe";
        Employee* employee1 = new Employee(name, add1, 10.00);
        string result1 = employee1->to_string();
        string expResult1 = name + '\n' + add1->to_string() + "\nRate: " + "10";
        TS_ASSERT_EQUALS(result1, expResult1);
        employee1->set_house_number("321");
        string result2 = employee1->to_string();
        string expResult2 = name + '\n' + add1->to_string() + "\nRate: " + "10";
        TS_ASSERT_EQUALS(result2, expResult2);
        
        delete employee1;
    }

    void testStudent() {

        Address* add1 = new US_Address("123", "QCC Lane", "Worcester", "MA", "01605");
        string name = "John Doe";
        Student* student1 = new Student(name, add1, "Computer Science");
        string result1 = student1->to_string();
        string expResult1 = name + '\n' + add1->to_string() + "\nMajor: " + "Computer Science";
        TS_ASSERT_EQUALS(result1, expResult1);
        student1->set_house_number("321");
        string result2 = student1->to_string();
        string expResult2 = name + '\n' + add1->to_string() + "\nMajor: " + "Computer Science";
        TS_ASSERT_EQUALS(result2, expResult2);
        
        delete student1;
    }

    void testStudentWorker() {

        Address* add1 = new US_Address("123", "QCC Lane", "Worcester", "MA", "01605");
        string name = "John Doe";
        Student_Worker* worker1 = new Student_Worker(name, add1, 15.00, "Computer Science");
        worker1->set_gpa(3.5);
        string result1 = worker1->to_string();
        string expResult1 = name + '\n' + add1->to_string() + "\nMajor: Computer Science GPA: 3.5"
                " Rate: 15 Hours: 0";
        TS_ASSERT_EQUALS(result1, expResult1);
        
        delete worker1;
    }
};

#endif      /* INHERITANCE_HW_TEST_ */



