#ifndef SUV_H
#define SUV_H

#include "Automobile.h"
#include <string>

using namespace std;

class SUV : public Automobile
{
    private:
            int passengers;
    public:
            SUV() : Automobile()
            {
                passengers = 0;
            }
            SUV(string SUVMake, int SUVModel, int SUVMileage, double SUVPrice, int SUVpassengers) : Automobile(SUVMake, SUVModel, SUVMileage, SUVPrice)
            {
                passengers = SUVpassengers;
            }

            int getPassengers() const
            {
                return passengers;
            }
};

#endif