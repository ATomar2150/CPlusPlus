#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX_SPEED_KM_PER_HOUR = 130;
    const int MIN_SPEED_KM_PER_HOUR = 60;
    double Speed_Miles_Per_Hour;
    cout<<"KPH\t\t\tMPH"<<endl;
    cout<<"---------------------------------------"<<endl;
    for ( int KPH = MIN_SPEED_KM_PER_HOUR; KPH <= MAX_SPEED_KM_PER_HOUR; KPH += 10 )
    {
        
        Speed_Miles_Per_Hour = KPH * 0.6214;
        cout<<setprecision(1)<<fixed;
        cout<<KPH<<"\t\t\t"<<Speed_Miles_Per_Hour<<endl;;
    }
    return 0;

}