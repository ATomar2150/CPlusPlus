#include <iostream>
using namespace std;

enum Day {Sunday, Monday, Tuesday, Wednesday};

int main()
{
    const int SIZE = 4;
    double sales[SIZE];

    double total = 0.0;
    int index;

    Day workday;
    //for(int index = Sunday; index <= wednesday; index++)
    //{
    for(int workday = Sunday; workday <= Wednesday ; workday = static_cast<Day>(workday + 1))
    {
        cout<<"Enter the sales index for "<<workday<<" : ";
        cin >> sales[workday];
    }

    // for(int index = Sunday; index <= wednesday; index++)
    // {
    for(int workday = Sunday; workday <= Wednesday ; workday = static_cast<Day>(workday + 1))
    {
        total = total + sales[workday];
    }

    cout<<"The total is: "<<total<<endl;

    return 0;
}