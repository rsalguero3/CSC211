#include "USAddress.h"
#include <sstream>

std::string US_Address::to_string() const{
    std::ostringstream oss;
    oss << Address::to_string() << '\n' << "USA";
    return oss.str();
}