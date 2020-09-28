#include <iostream>
using namespace std;

//show the intro of the program
//take the number of cups
//convert the number of cups fluids to ounces and display the result
//fluid in ounces = number of cups * 8

int numberOfCup();
double convertToOunces(int);

int main()
{
    cout<<"This Program takes asks the user to enter the number of cups, then it converts the cup fluid into ounces.\n";
    cout<<"RESULT IS DISPLAYED.\n";

    int numberOfCups = numberOfCup();
    double conversion = convertToOunces(numberOfCups);

    cout<<"The conversion in ounces is: "<<conversion<<endl;
}

int numberOfCup()
{
    int cups;
    cout<<"Please Enter number of cups?\n";
    cin>> cups;
    cout<<"The number of cups are: "<<cups<<endl;
    return cups;
}

double convertToOunces(int cups)
{
    int ounces = cups * 8;
    return ounces;
}
