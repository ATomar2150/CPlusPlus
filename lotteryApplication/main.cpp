//This is a lottery application.

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

const int SIZE = 5;
int randNumber;
int total=0;

int main()
{
    const int SIZE = 5;
    int lottery[SIZE];
    vector<int> user;
    srand (time(NULL));


    //It generate random numbe in lottery Array.
    cout<<"The LOTTERY NUMBERS ARE: ";
    for( int i = 0; i < SIZE; i++ )
    {
        randNumber = rand() % 10;
        lottery[i] = randNumber;
        cout<<lottery[i]<<" ";
    }
    
    
    for( int i = 0; i < SIZE; i++ )
    {
        int number;

        cout<<"\nENTER THE NUMBER BY USER AT INDEX "<<i<<": "<<endl;
        cin>> number;
        while(number < 0){
            cout<<"Please enter the positive number.\n";
            cin>> number;
        }
        user.push_back(number);
    }

    for( int i = 0; i < user.size(); i++)
    {
        if(lottery[i] == user[i])
        {
            total += 1;
        }
           
    }  
    cout<<"The total matched digit is: "<<total<<endl;


    for( int i = 0; i < user.size(); i++)
    {

        if(lottery[i]!=user[i])
        {
            cout<<"USER IS NOT A GRAND WINNER AS ALL DIGITS HAS NOT MATCHED\n";
            return 0;
           
        }
           
    }
    
    cout<<"USER IS A GRAND WINNER AS ALL THE ENTREES HAS MATCHED.\n";
    return 0;
}