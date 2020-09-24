#include <iostream>
#include<iomanip>
using namespace std;

//Function Prototype
void showFee(int, int);

//main function
int main()
{
    int choice;
    int months;

    //constants for user choices
     const int ADULT_CHOICE = 1;
     const int CHILD_CHOICE = 2;
     const int SENIOR_CHOICE = 3;
     const int QUIT_CHOICE = 4;

    //charges for user choices
     const int ADULT_CHARGE = 40;
     const int CHILD_CHARGE = 20;
     const int SENIOR_CHARGE = 30;

    cout<<"USER CHOICES OPTION ARE: "<<endl;
    cout<<"1. ADULT_CHOICE\n";
    cout<<"2. CHILD_CHOICE\n";
    cout<<"3. SENIOR_CHOICE\n";
    cout<<"4. QUIT_CHOICE\n";
    
    
    do
    {
        cout<<"PLEASE ENTER THE USER CHOICE: "<<endl; 
        cin>>choice;
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
        cout<<"Please enter the user choice again.\n";
        cin>>choice;
        }

        if(choice != QUIT_CHOICE)
        {
            cout<<"For how many months you want the membership: "<<endl;
            cin>>months;

            switch(choice)
            {
            case ADULT_CHOICE:
            showFee(ADULT_CHARGE,months);
            break;
            case CHILD_CHOICE:
            showFee(CHILD_CHARGE,months);
            break;
            case SENIOR_CHOICE:
            showFee(SENIOR_CHARGE,months);
            break;
            }
        }

    }while(choice != QUIT_CHOICE);
    return 0;
}

void showFee(int rate, int months)
{
    cout<<" The total charge is: "<<(rate * months)<<endl;
}





