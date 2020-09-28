#include <iostream>
using namespace std;

void showChoice();
void showCharges(double, int);

int main()
{
    int choice;
    int months;
    const int Adult_Choice = 1,
              Senior_Choice = 2,
              Child_Choice = 3,
              Quit_Choice = 4;
    
    const double Adult_Charges = 40,
                 Senior_Charges = 30,
                 Child_Charges = 20;


    do{

        showChoice();
        cin>>choice;

        while(choice < Adult_Choice || choice > Quit_Choice)
        {
            cout<<"Please enter your choice again.\n";
            cin>>choice;
        }

        if (choice != Quit_Choice)
        {
            do{
            cout<<"Enter the number of months.\n";
            cin>>months;
            }while(months<0  && months>12);
            
            switch(choice)
            {
                case Adult_Choice:
                    cout<<"For Adult choice ";
                    showCharges(Adult_Charges, months);
                    break;
                case Senior_Choice:
                    cout<<"For Senior choice ";
                    showCharges(Senior_Charges, months);
                    break;
                case Child_Choice:
                    cout<<"For Child choice ";
                    showCharges(Child_Charges, months);
                    break;
                
            }
        }
    }while(choice != Quit_Choice);

    return 0;

}

void showChoice(){
    cout<<"Please enter your choice.\n";
    cout<<"1. Adult Choice\n";
    cout<<"2. Senior Choice\n";
    cout<<"3. Child Choice\n";
    cout<<"4. Quit Choice\n";   
}

void showCharges(double charges, int months){
    cout<<"the charges are: "<<charges*months<<endl;
}