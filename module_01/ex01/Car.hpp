#ifndef _CAR_HPP_
#define _CAR_HPP_
#include <string>
class Car {
	private :
	int year;
	int make;
	std::string model;

	public :
	Car(int year, int make, std::string name);
	Car(const Car& copy);
	~Car();
	Car& operator=(const Car& src);
	void drive();
	
	// void setYear(int year);
	// void setMake(int make);
	// void setModel(std::string model);
	
	// int getYear() const;
	// int getMake() const;
	// std::string getModel() const;
};
#endif