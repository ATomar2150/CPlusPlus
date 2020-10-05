#include <iostream>
using namespace std;

int main()
{
    const int EMPLOYEES = 3;
    int hours[EMPLOYEES];
    double payRate[EMPLOYEES];

    cout<<"Enter the hours worked and payrate by "<<EMPLOYEES <<" employees.\n";
    for (int i = 0; i < EMPLOYEES; i++)
    {
        cout<<"Enter the hours for employee #"<<i<<" : "<<endl;
        cin>> hours[i];
        cout<<"Enter the payrate for employee #"<<i<<" : "<<endl;
        cin>> payRate[i];
    }

    for(int i = 0; i < EMPLOYEES; i++)
    {
         cout<<"========================================================="<<endl;
        cout<<"The hours logged by employee "<<(i+1)<<" is: "<<hours[i]<<" hours"<<endl;
        cout<<"The pay rate given to employee "<<(i+1)<<" is: $"<<payRate[i]<<endl;
        double totalPay = hours[i] * payRate[i];
        cout<<"The total pay of the employee is: "<<totalPay<<endl;
        cout<<"========================================================="<<endl;
    }
   return 0; 
}