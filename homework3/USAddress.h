
#ifndef US_ADDRESS_H
#define US_ADDRESS_H
#include "Address.h"

class US_Address : public Address {
    public:
        explicit US_Address(const std::string& hn, const std::string& str,
                const std::string muni, const std::string& stpro,
                const std::string pc) : Address(hn, str, muni, stpro, pc){}
                
        std::string to_string() const;
        Address* clone(){
            return new US_Address(*this);
        }              
                
};

#endif /* US_ADDRESS_H */

