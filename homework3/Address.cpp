#include "Address.h"

std::string Address::to_string() const{
    return this->house_number + " " + this->street + '\n' + this->municipality + " " + this->state_or_provence \
+ " " + this->postal_code;
}
