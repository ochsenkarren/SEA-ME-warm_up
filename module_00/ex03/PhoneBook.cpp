#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <unordered_map>
using namespace std;
                
PhoneBook::PhoneBook() : current(0) {};

void PhoneBook::add(Contact &contact){
    if (PB_SIZE <= current) {
        cout << "PhoneBook is Full" << endl;
        return;
    }
    string inputNumber = contact.getPhoneNumber();
    if (numbers.find(inputNumber) != numbers.end()) {
        cout << "Duplicated phoneNumber" << endl;
        return;
    }

    numbers[inputNumber] = current;
    contacts[current] = contact;
    ++current;
}
        
void PhoneBook::listUp(bool bookmark) {
    cout << left << setw(5) << "index" << "|"
        << setw(10) << "name" << "|"
        << setw(15) << "phoneNumber" << endl
        << setw(36) << setfill('-') << "-" << right << endl << setfill(' ');
    
    for (int i = 0; i < current; ++i) 
    {
        if (!bookmark || contacts[i].bookmarked) {
            cout << setw(5) << i << "|";
            contacts[i].preview();
        }
    }
}

void PhoneBook::detailed(int index) {
    if (current <= index) {
        cout << "[Invalid index : " << index << "]\n";
        return;
    }
    contacts[index].entireView();
}

void PhoneBook::bookmark(int index)
{
    if (current <= index) {
        cout << "[Invalid index : " << index << "]\n";
        return;
    }
    contacts[index].bookmarked = !contacts[index].bookmarked;
}

void PhoneBook::remove(int index) { 
    if (current <= index) {
        cout << "[Invalid Index] : " << index << "\n";
        return;
    }
    internalRemove(index, contacts[index].getPhoneNumber());
}

void PhoneBook::remove(string phoneNumber) {
    if (numbers.find(phoneNumber) == numbers.end()) {
        cout << "[Invalid PhoneNumber] : " << phoneNumber << "\n";
        return;
    }
    int index = numbers[phoneNumber];
    internalRemove(index, phoneNumber);
}

void PhoneBook::internalRemove(int index, string phoneNumber) {
    numbers.erase(phoneNumber);
    for (int idx = index + 1; idx < current; ++idx) {
        Contact &ct = contacts[idx];
        contacts[idx - 1] = contacts[idx];
        --numbers[ct.getPhoneNumber()];
    }
    --current;
}
