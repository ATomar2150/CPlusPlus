//This program calculates the total sale in the program.
#include <iostream>
using namespace std;

int main()
{
    const int column = 3;
    const int rows = 4;
    double sales[rows][column];
    int total = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < column; k++)
        {
            cout<<"The element at "<<i<<" row and "<<k<<" column the value is: "<<endl;
            cin>> sales[i][k];
        }
    }

  for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < column; k++)
        {
           total += sales[i][k];
        }
    }
    cout<< "The total sales is: "<<total<<endl;
    return 0;
}