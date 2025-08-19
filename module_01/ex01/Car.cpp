#include "Car.hpp"
#include <iostream>
using namespace std;

Car::Car(int year, int make, string model)
	: year(year), make(make), model(model) {
	cout << "Constructor called\n";
}

Car::Car(const Car& copy) : Car(copy.year, copy.make, copy.model) {
	cout << "Copy Constructor called\n";
}

Car::~Car() {
	cout << "Destructor called\n";
}

Car&	Car::operator=(const Car& src) {
	this->year = src.year;
	this->make = src.make;
	this->model = src.model;
	cout << "Copy Assign operator called\n";
	return *this;
}

void Car::drive() {
	cout << "[Car driving] : " << year << ".edition, made in "
		<< make << ", model : " << model << endl;
}

// void Car::setYear(int year) { this->year = year;}
// void Car::setMake(int make) { this->make = make;}
// void Car::setModel(string model) { this->model = model;}
// int Car::getYear() const { return year;}
// int Car::getMake() const { return make;}
// std::string Car::getModel() const { return model;}

// int main (void) {
// 	Car car(1994, 1995, "jchoi");
// 	Car car2(car);
// 	car.drive();
// 	car2.drive();
// }