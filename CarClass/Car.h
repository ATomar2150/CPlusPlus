#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
    private:
            int yearModel;
            string make;
            int speed;
    public:
            Car();
            Car(int,string);
            void setYearModel(int);
            void setMake(string);
            void setSpeed(int);
            int getYearModel() const;
            string getMake() const;
            int getSpeed() const; 
};
#endif