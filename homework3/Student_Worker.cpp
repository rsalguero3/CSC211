#include "Student_Worker.h"
#include <sstream>

std::string Student_Worker::to_string() const{
    std::ostringstream oss;
    oss << this->name << '\n' << p_address->to_string() << "\nMajor: " << this->student_major << " GPA: " << this->gpa \
    << " Rate: " << this->rate << " Hours: " << this->hours;
    return oss.str();
}
