#ifndef GERMAN_ADDRESS_H
#define GERMAN_ADDRESS_H

#include "Address.h"

class German_Address : public Address {
    public:
        explicit German_Address(const std::string& hn, const std::string& str,
                const std::string muni, const std::string pc) : Address(hn, str, 
                        muni, "", pc){}
        std::string to_string() const;

        Address* clone(){
            return  new German_Address(*this);
        }
};

#endif /* GERMAN_ADDRESS_H */

