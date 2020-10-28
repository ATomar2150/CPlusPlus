#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
    int Day;
    int Month;
    int Year;

    Date style;
    cout<<"Enter the day value.\n";
    cin >> Day;
    cout<<"Enter the month value.\n";
    cin >> Month;
    cout<<"Enter the year value.\n";
    cin >> Year;

    style.setDate(Day);
    style.setMonth(Month);
    style.setYear(Year);

    cout<<"FIRST FORMAT: ";
    cout<<style.getDate()<<"/"<<style.getMonth()<<"/"<<style.getYear()<<endl;

    cout<<"SECOND FORMAT: ";
    switch(Month)
    {
        case 1:
                cout<<"January/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 2:
                cout<<"Febuary/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 3:
                cout<<"March/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 4:
                cout<<"April/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 5:
                cout<<"May/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 6:
                cout<<"June/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 7:
                cout<<"July/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 8:
                cout<<"August/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 9:
                cout<<"September/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 10:
                cout<<"October/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 11:
                cout<<"November/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
        case 12:
                cout<<"December/"<<style.getDate()<<"/"<<style.getYear()<<endl;
                break;
                
    }

    cout<<"ThIRd FORMAT: ";
    switch(Month)
    {
        case 1:
                cout<<style.getDate()<<" "<<"January"<<" "<<style.getYear()<<endl;
                break;
        case 2:
                cout<<style.getDate()<<" "<<"Febuary"<<" "<<style.getYear()<<endl;
                break;
        case 3:
                cout<<style.getDate()<<" "<<"March"<<" "<<style.getYear()<<endl;
                break;
        case 4:
                cout<<style.getDate()<<" "<<"April"<<" "<<style.getYear()<<endl;
                break;
        case 5:
                cout<<style.getDate()<<" "<<"May"<<" "<<style.getYear()<<endl;
                break;
        case 6:
                cout<<style.getDate()<<" "<<"June"<<" "<<style.getYear()<<endl;
                break;
        case 7:
                cout<<style.getDate()<<" "<<"July"<<" "<<style.getYear()<<endl;
                break;
        case 8:
                cout<<style.getDate()<<" "<<"August"<<" "<<style.getYear()<<endl;
                break;
        case 9:
                cout<<style.getDate()<<" "<<"September"<<" "<<style.getYear()<<endl;
                break;
        case 10:
                cout<<style.getDate()<<" "<<"October"<<" "<<style.getYear()<<endl;
                break;
        case 11:
                cout<<style.getDate()<<" "<<"November"<<" "<<style.getYear()<<endl;
                break;
        case 12:
                cout<<style.getDate()<<" "<<"December"<<" "<<style.getYear()<<endl;
                break;
                
    }

    return 0;
}