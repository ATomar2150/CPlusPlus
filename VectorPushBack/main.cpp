#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int employees;
    vector<int> hours;
    vector<double> pay;


    cout<<"How many employees do you have?"<<endl;
    cin>> employees;

    for(int i = 0; i < employees; i++)
    {
        int tempHours;
        cout<<"Hours worked by employees #"<<(i+1)<<" : ";
        cin>>tempHours;
        hours.push_back(tempHours);

        double payrate;
        cout<<"Payrate earned by employees #"<<(i+1)<<" : ";
        cin>>payrate;
        pay.push_back(payrate);
    }

        for(int i = 0; i < employees; i++)
        {
            double grosspay = hours[i] * pay[i];
            cout<<"The total pay of the candidates are: "<<grosspay<<endl;
        }


    return 0;
}