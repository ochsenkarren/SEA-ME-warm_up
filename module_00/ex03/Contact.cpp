#include "Contact.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Contact::Contact() {};

void Contact::init(string _name, string _phoneNumber, string _nickname, string _detail) {
    name = _name;
    phoneNumber = _phoneNumber;
    nickname = _nickname;
    detail = _detail;
    bookmarked = false;
}

void Contact::preview() {
    cout << setw(10) << name << "|" 
        << setw(15) << phoneNumber << endl;
}

void Contact::entireView() {
    cout  << setw(10) << left << "name" << "|"
        << setw(15) << "phoneNumber" << "|"
        << setw(10) << "nickname" << "|"
        << setw(20) << "detail" << "|"
        << setw(10) << "bookmarked"
        << setw(75) << setfill('-') << "\n" << setfill(' ');

    cout << right << "\n"
        << setw(10) << name << "|"
        << setw(15) << phoneNumber << "|"
        << setw(10) << nickname << "|"
        << setw(20) << detail << "|"
        << setw(10) << boolalpha << bookmarked << endl;
}

string Contact::getPhoneNumber() {
    return phoneNumber;
}

/* [for Test]
int main(void) {
    Contact ct ("Jaeyoung", "01087252750", "jchoi");
    ct.preview();
    ct.entireView();
}
*/