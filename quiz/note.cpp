#include <iostream>

using namespace std;

class Car {
private:
    string brand;
    double speed;
public:
    double accelerate(double s) {
        this -> speed = s;
        speed += 10;
        return speed;
    }
};
