#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
};

void Date::setDate(int Day)
{
    if(Day <= 31 && Day >= 1)
    {
        day = Day; 
    } 
    else
    {
        cout<<"Please enter the range of Day between 1-31.\n";
        exit(EXIT_FAILURE);
    }
                                               
};
void Date::setMonth(int Month)
{
    if(Month <= 12 && Month >= 1)
    {
        month = Month;
    }
    else
    {
       cout<<"Please enter the range of Day between 1-12.\n";
       exit(EXIT_FAILURE);
    }
    
    
};
void Date::setYear(int Year)
{
    year = Year;
};
int Date::getDate() const
{
    return day;
};
int Date::getMonth() const
{
    return month;
};
int Date::getYear() const
{
    return year;
};