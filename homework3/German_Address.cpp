#include "German_Address.h"
#include <sstream>
//Return Address without state_or_province variable
std::string German_Address::to_string() const{
    std::ostringstream oss;
    oss << this->house_number << " " << this->street << '\n' << this->municipality << " " << this->postal_code << '\n' << "Germany";
    return oss.str();
}
