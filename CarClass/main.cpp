#include <iostream>
#include "Car.h"
using namespace std;

int accelerate(int speed, Car tata);
int brake(int speed, Car tata);

int main()
{
    Car tata;
    int speed;
    tata.setMake("Nissan");
    tata.setYearModel(2012);
    cout << "Please enter the current speed.\n";
    cin >> speed;
    int netSpeed = accelerate(speed, tata);
    brake(netSpeed, tata);
    return 0;
}

int accelerate(int speed, Car tata)
{   
    cout <<"SPEED IS NOW INCREASING\n";
    cout<<"Current speed: "<<speed<<"kmhr"<<endl;
    for(int i = 0; i < 5; i++)
    {
    speed = speed + 5;
    cout<<"The speed after putting "<<(i+1)<<" acceleration is: "<<speed<<"kmhr."<<endl;
    }
    tata.setSpeed(speed);
    cout<<endl;
    return speed;
    
};

int brake(int speed, Car tata)
{
   cout <<"SPEED IS NOW DECREASING\n";
   cout<<"Current speed is: "<<speed<<"kmhr"<<endl;
   for(int i = 0; i < 5; i++)
   {
   speed = speed - 5;
   cout<<"The speed after putting "<<(i+1)<<" brake is: "<<speed<<"kmhr."<<endl;
   }
   tata.setSpeed(speed);
   return speed;

};