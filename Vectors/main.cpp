#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SIZE = 2;
    vector<int> hours(SIZE);
    vector<double> payrate(SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        cout<<"Hours worked by employee "<<(i+1)<<": ";
        cin >> hours[i];
        cout<<"Payrate given to an employee "<<(i+1)<<": ";
        cin >> payrate[i];
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout<<"========================================================="<<endl;
        cout<<"****Hours worked by employee "<<(i+1)<<": "<<hours[i]<<endl;
        cout<<"****Payrate given to an employee "<<(i+1)<<": "<<payrate[i]<<endl;
    }
    return 0;
}