
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address{
public:
    explicit Address(const std::string& hn, const std::string& str,
            const std::string muni, const std::string& stpro, 
            const std::string pc) : house_number(hn), street(str), municipality(muni),
                    state_or_provence(stpro), postal_code(pc){}
            
            virtual std::string to_string() const = 0;
            virtual Address* clone() = 0;
            virtual ~Address() {}
            void set_house_number(std::string& new_house_number){
                house_number = new_house_number;
            }
protected:
    std::string house_number;
    std::string street;
    std::string municipality;
    std::string state_or_provence;
    std::string postal_code;
    
            
};


#endif /* ADDRESS_H */

