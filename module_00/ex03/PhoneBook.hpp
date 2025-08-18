#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_
#include "Contact.hpp"
#include <unordered_map>
class PhoneBook {
    enum {
        PB_SIZE = 5
    };
        
    std::unordered_map<std::string, int> numbers;
    Contact contacts[PB_SIZE];
    int current;
    void internalRemove(int index, std::string phoneNumber);

    public :
    PhoneBook();
    void add(Contact &contact);

    void listUp(bool bookmark = false);
    void detailed(int index);
    void bookmark(int index);
    
    void remove(int index);
    void remove(std::string phoneNumber);    

};
#endif