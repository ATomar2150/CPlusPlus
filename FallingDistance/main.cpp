#include <iostream>
#include <cmath>
using namespace std;

const double g = 9.8;

double fallingDistance(double);

int main()
{
    double dist;
    cout << "We are calculating the falling distance in a specific time period.\n";
    for(double i=1; i<=10; i++)
    {
        dist = fallingDistance(i);
        cout << "The distance from interval when t = " << i <<" is "<<dist<<endl;
    }
    return 0;
}

double fallingDistance(double time)
{
    
    return (1.0/2) * g  * pow(time,2);
    
}