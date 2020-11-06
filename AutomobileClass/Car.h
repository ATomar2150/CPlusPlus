#ifndef CAR_H
#define CAR_H

#include "Automobile.h"
#include <string>

using namespace std;

class Car : public Automobile
{
    private:
            int doors;
    public:
            Car() : Automobile()
            {
                doors = 0;
            }

            Car(string carMake, int carModel, int carMileage, double carPrice, int carDoors) : Automobile(carMake, carModel, carMileage, carPrice)
            {
                doors = carDoors;
            }

            int getDoors()
            {
                return doors;
            }
            
};

#endif
