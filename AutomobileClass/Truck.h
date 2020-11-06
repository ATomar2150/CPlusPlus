#ifndef TRUCK_H
#define TRUCK_H

#include "Automobile.h"
#include <string>
using namespace std;

class Truck : public Automobile
{
    private:
            string driverType;
    public:
            Truck() : Automobile()
            {
                driverType = " ";
            }
            Truck(string truckMake, int truckModel, int truckMileage, double truckPrice, string getDriver) : Automobile(truckMake, truckModel, truckMileage, truckPrice)
            {
                driverType = driverType;
            }

            string getDriverType() const
            {
                return driverType;
            }

};

#endif