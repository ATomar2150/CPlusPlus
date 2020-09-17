#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int number;
    
    char choice;
   
    cout<<"Enter the number upto till you want the square of: "<<endl;
    cin>> number;


    for ( int i = 1; i <= number; i++)
    {
        //For testing the continue statement uncomment this piece of code. 
        //With continue statement it jumps to the next iteration in the loop and skips the code below the continue statement in the loop.
        // if((i%1)==0)
        // {
        //     cout<<"Its just a test of continue. "<<endl;
        //     continue;
        // }
        cout<<"The number is "<<number <<" & its square root with power "<<i<<" is: "<<pow( number, i );

        cout<<" Does the user want to continue? If No press q or Q. "<<endl;
        cin >> choice;
        if (choice == 'q' || choice == 'Q'){
            break;
        }
    }
    return 0;
}