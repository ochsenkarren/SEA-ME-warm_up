#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
using namespace std;

int main(void) {
    PhoneBook pb;

    Contact ct1; ct1.init("Jaeyoung", "01087252750", "jchoi");
    Contact ct2; ct2.init("Minju", "01022103371", "minkim3");
    Contact ct3; ct3.init("Minseo", "010aaaabbbb", "minsepar");
    Contact ct4; ct4.init("Minsoo", "010bbbbaaaa", "minsepar");
    
    pb.add(ct1);    pb.add(ct2);    pb.add(ct3); pb.add(ct4);
    // pb.listUp();
    
    // pb.detailed(1);
    // pb.detailed(0);
    // pb.detailed(2);
    
    // pb.bookmark(0);
    // pb.bookmark(1);
    
    // pb.listUp(true);

    pb.remove("01087252750");
    cout << "Ho Ho Ho Ho\n"; 
    pb.listUp();
    pb.remove("Hoyoung");
    cout << "Ho Ho Ho Ho\n"; 
    pb.listUp();
    
    pb.add(ct1);
    cout << "Ho Ho Ho Ho\n"; 
    pb.listUp();
    
    pb.remove(1);
    pb.listUp();

}