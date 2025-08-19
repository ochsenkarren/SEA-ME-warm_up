#ifndef _SPORTS_CAR_HPP_
#define _SPORTS_CAR_HPP_
#include "Car.hpp"
class SportsCar : public Car {
	private :
		int topSpeed;
	public :
	SportsCar(int year, int make, std::string name, int topSpeed);
	SportsCar(const SportsCar& copy);
	~SportsCar();
	SportsCar& operator=(const SportsCar& src);
	void drive();
};
#endif