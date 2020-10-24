#include <iostream>
using namespace std;

enum Day {Monday, Tuesday, Wednesday, Thrusday, Friday, Saturday, Sunday};

void getDay(Day d);
int main()
{
    const int NUM_DAYS = 7;
    double sales[NUM_DAYS];
    double total = 0.0;
    Day workday;

    //Get the sales for each day
    for(workday = Monday; workday <= Sunday; workday = static_cast<Day>(workday + 1))
    {
        cout<<"Enter the sales for day ";
        getDay(workday);
        cout<<" : ";
        cin >> sales[workday];
    }

    for(workday = Monday; workday <= Sunday; workday = static_cast<Day>(workday + 1))
    {
        total = total + sales[workday];
    }
    cout<<"The total sales is: "<<total<<endl;
    return 0;
}

void getDay(Day d)
{
    switch(d)
    {
        case Monday: cout <<"Monday";
                     break;
        case Tuesday: cout <<"Tuesady";
                     break;
        case Wednesday: cout <<"Wednesday";
                     break;
        case Thrusday: cout <<"Thrusday";
                     break;
        case Friday: cout <<"Friday";
                     break;
        case Saturday: cout <<"Saturday";
                     break;
        case Sunday: cout <<"Sunday";
                     break;
    }
}