#include <iostream>
using namespace std;

int main()
{
    int userChoice;
    int months;
    double totalCharge;
    
    const int adultMonthlyCharge = 40.0,
              childMonthlyCharge = 30.0,
              seniorMonthlyCharge = 35.0;

    do
    {
        cout<< "Please enter the type of Package you want to take.\n";
        cout<< "1. Adult\t2. Child\t3. Senior\t4. Quit"<<endl;
        cin>>userChoice;
        switch(userChoice)
        {

            case 1: 
            cout<< "This is a adult Package. For how many monthly you want to take membership?\n";
            cin>>months;
            totalCharge = months * adultMonthlyCharge;
            cout<< "The total charge would be: "<<totalCharge<<endl;
            break;

            case 2: 
            cout<< "This is a child Package. For how many monthly you want to take membership?\n";
            cin>>months;
            totalCharge = months * childMonthlyCharge;
            cout<< "The total charge would be: "<<totalCharge<<endl;
            break;

            case 3: 
            cout<< "This is a senior Package. For how many monthly you want to take membership?\n";
            cin>>months;
            totalCharge = months * seniorMonthlyCharge;
            cout<< "The total charge would be: "<<totalCharge<<endl;
            break;

            default:
            cout<< "No package selected";
            break;

        }

        cout<< "Do you want to continue again?\n";
        cout<< "If yes, press the user choice again in the range (1-3).\n";
        cout<<"Otherwise press 4 to Discontinue.\n";
        cin>>userChoice;
    } while(userChoice != 4);

    return 0;

}