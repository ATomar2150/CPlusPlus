#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int number;
    int userGuess;
    srand((unsigned) time(0));
    number = (rand() % 100);
    cout << "Max: " << RAND_MAX << endl;
    cout<<"\nUser please enter your guess?\n";
    cin>> userGuess;

    
    do{
        if(userGuess > number){
            cout<<"Guess is too high"<<endl;
            cout<<"Please enter your number again"<<endl;
            cin>>userGuess;
        } 
        else
        {
            cout<<"Guess is too low"<<endl;
            cout<<"Please enter your number again"<<endl;
            cin>>userGuess;
        }
    }while(userGuess!=number);

    cout<<"The random number & user guess is matched and the number is: "<<number<<endl;


return 0;

}