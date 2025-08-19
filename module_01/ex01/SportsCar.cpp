#include "SportsCar.hpp"
#include <iostream>
using namespace std;

SportsCar::SportsCar(int year, int make, string model, int topSpeed)
	: Car(year, make, model), topSpeed(topSpeed) {
	cout << "[SportsCar] : Constructor called\n";
}

SportsCar::SportsCar(const SportsCar& copy) : Car(copy), topSpeed(copy.topSpeed) {
	cout << "Copy Constructor called\n";
}

SportsCar::~SportsCar() {
	cout << "Destructor called\n";
}

SportsCar&	SportsCar::operator=(const SportsCar& src) {
	(Car &)*this = (Car &)src;
	this->topSpeed = src.topSpeed;
	cout << "Copy Assign operator called\n";
	return *this;
}

void SportsCar::drive() {
	Car::drive();
	cout << "Ah, top Speed is.. " << topSpeed << endl;
}


int main (void) {
	SportsCar car(1994, 1995, "jchoi", 200);
	car.drive();
}