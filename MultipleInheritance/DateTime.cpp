#include <iostream>
#include <string>
#include "DateTime.h"
using namespace std;

DateTime::DateTime() : Date(), Time()
{}

DateTime::DateTime(int dy, int mon, int yr, int hr, int mt, int sc) : Date(dy, mon, yr), Time(hr, mt, sc)
{}


void DateTime::showDateTime() const
{
    cout<<getMonth()<< "/" <<getDay()<<"/" <<getYear() <<" ";
    cout<<getHour()<< ":" <<getMin()<<":" <<getSec() <<" ";
}