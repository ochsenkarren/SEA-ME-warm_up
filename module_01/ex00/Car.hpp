#ifndef _CAR_HPP_
#define _CAR_HPP_
#include <string>
class Car {
	private :
	std::string name;
	int speed;

	public :
	Car(std::string name, int speed);
	Car(const Car& copy);
	~Car();
	Car& operator=(const Car& src);
	void inform();
};
#endif