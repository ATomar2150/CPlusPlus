#include <iostream>
#include "Widget.h"
using namespace std;

int main()
{
    const double numbersOfHoursEachDay = 16.0;
    const int numberOfWidgetsProducedEachHour = 10;
    const int numberOfWidgetsProducedEachDay = numberOfWidgetsProducedEachDay * numberOfWidgetsProducedEachHour;
    double totalNumberOfDaysTaken;

    int numberOfWidgets;
    Widget WidObj;

    cout<<"Enter the number of widget.\n";
    cin >> numberOfWidgets;

    WidObj.setWidgets(numberOfWidgets);
    cout<< "The number of widgets are: "<< WidObj.getWidgets()<<endl;

    totalNumberOfDaysTaken = WidObj.getWidgets() / numbersOfHoursEachDay;

    cout<<"Total Number of Days taken to produce "<< WidObj.getWidgets() <<" are: "<< totalNumberOfDaysTaken<<" days."<<endl;

    return 0;
}