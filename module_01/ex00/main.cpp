#include "Car.hpp"
int main(void) {
    
    Car car1("jchoi", 29);
    car1.inform();
    Car car2("minju", 30);
    car2.inform();

    car2 = car1;
    car2.inform();
    return 0;    
}