#include "Car.h"
using namespace std;

Car::Car()
{
    yearModel = 0;
    make = " ";
    speed = 0;
};
Car::Car(int ym, string m)
{
    yearModel = ym;
    make = m;
    speed = 0;
};
void Car::setYearModel(int ym)
{
    yearModel = ym;
};
void Car::setMake(string m)
{
    make = m;
};
void Car::setSpeed(int s)
{
    speed = s;
};
int Car::getYearModel() const
{
    return yearModel;
};
string Car::getMake() const
{
    return make;
};
int Car::getSpeed() const
{
    return speed;
}; 