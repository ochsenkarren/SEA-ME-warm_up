#include "Car.hpp"
#include <iostream>
using namespace std;

Car::Car(string name, int speed) : name(name), speed(speed) {
	cout << "Default Constructor called\n";
}

Car::Car(const Car& copy) : Car(copy.name, copy.speed) {
	cout << "Copy Constructor called\n";
}

Car::~Car() {
	cout << "Destructor called\n";
}

Car&	Car::operator=(const Car& src) {
	this->name = src.name;
	this->speed = src.speed;
	
	cout << "Copy Assign operator called\n";
	return *this;
}

void Car::inform() {
	cout << "[Car Information]" << endl;
	cout << "name : " << name << endl;
	cout << "speed : " << speed << endl; 
}