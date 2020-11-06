#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include <string>

using namespace std;

class Automobile
{
    private:
            string make;
            int yearModel;
            int mileage;
            double price;
    public:
            Automobile()
            {
                make = " ";
                yearModel = 0;
                mileage = 0;
                price = 0.0;
            }

            Automobile(string autoMake, int autoModel, int autoMileage, double autoPrice)
            {
                make = autoMake;
                yearModel = autoModel;
                mileage = autoMileage;
                price = autoPrice;
            }

            string getMake() const
            {
                return make;
            }

            int getModel() const
            {
                return yearModel;
            }

            int getMileage() const
            {
                return mileage;
            }

            int getPrice() const
            {
                return price;
            }
};
#endif