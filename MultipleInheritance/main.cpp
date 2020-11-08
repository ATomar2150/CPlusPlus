#include <iostream>
#include "DateTime.h"
using namespace std;

int main()
{
    DateTime emptyDay;

    emptyDay.showDateTime();
    cout<<endl;

    DateTime pastDay(8, 11, 2020, 5, 32, 27);

    pastDay.showDateTime();

    return 0;
}