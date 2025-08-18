#include "Car.hpp"
#include <iostream>

using namespace std;

Car::Car(string name, int speed) : name(name), speed(speed) {
	cout << "Default Constructor called\n";
}

Car::Car(const Car& copy) {
	cout << "Copy Constructor called\n";
}



void Car::inform() {
	cout << "[Car Information]" << endl;
	cout << "name : " << name << endl;
	cout << "speed : " << speed << endl; 
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