//This program demonstrate the car, truck, and suv classes are derived from automobil class

#include <iostream>
#include "Automobile.h"
#include "Car.h"
#include "Truck.h"
#include "SUV.h"
using namespace std;

int main()
{
    Car car("BMW", 2007, 25000, 100000.0, 4);
    Truck truck("Toyota", 2006, 40000, 12000.0, "4WD");
    SUV suv("Volvo", 2005, 30000, 18000.0, 5);

    cout<<"We have the following CAR in inventory.\n";
    cout<<car.getMake()<<" "<<car.getModel()<<" "<<car.getMileage()<<" "<<car.getPrice()<<" "<<car.getDoors()<<endl;

    cout<<"We have the following TRUCK in inventory.\n";
    cout<<truck.getMake()<<" "<<truck.getModel()<<" "<<truck.getMileage()<<" "<<truck.getPrice()<<" "<<truck.getDriverType()<<endl;

    cout<<"We have the following SUV in inventory.\n";
    cout<<suv.getMake()<<" "<<suv.getModel()<<" "<<suv.getMileage()<<" "<<suv.getPrice()<<" "<<suv.getPassengers()<<endl;

    return 0;
}