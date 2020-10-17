#include <iostream>
using namespace std;

int main()
{
    int days;
    double *sales;
    double average;
    double total = 0.0;
    cout << "How manu days you want to store data of?\n";
    cin >> days;

    sales = new double[days];

    for(int i = 0; i < days; i++)
    {
        cout<<"Enter the data for "<<(i+1)<<" : "<<endl;
        cin >> sales[i];
    }

    for(int i = 0; i < days; i++)
    {
        total += sales[i];
    }

   
    cout<<"The total sales is: "<<total<<endl;
    average = total / days;
    cout<<"The average is: "<<average<<endl;

    delete [] sales;
    sales = 0; 
    return 0;
}