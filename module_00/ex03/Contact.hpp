#ifndef _CONTACT_HPP_
#define _CONTACT_HPP_
#include <string>
class Contact {
    private :
        std::string name;
        std::string phoneNumber;
        std::string nickname;
        std::string detail;

    public :
        bool bookmarked;
        Contact();
        std::string getPhoneNumber();
        void init(std::string _name, std::string _phoneNumber, std::string _nickname, std::string _detail = "None");
        void preview();
        void entireView();

};
#endif