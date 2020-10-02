#include <iostream>
using namespace std;

void primeNumber(long);

int main()
{
    long number;
    cout<< "This program tests if the number is PRIME OR NOT."<<endl;
   
    do{
        cout<<"Please enter the number,it will run once but if you want to quit then press -1.\n";  
        cin>> number;
        cout<<"The number is: "<<number<<endl;
        if(number==1 && number==2 && number==3 && number==7 && number==13){
            cout<< "The number is prime.\n";
            exit(EXIT_SUCCESS);
        }
        primeNumber(number);
        }while(number != -1);
        return 0;
}

void primeNumber(long number)
{
    if (number % 2 ==0)
    {
        cout<<"Its is not a prime number, as it is divisible by 2.\n";
    }
    else if(number % 3 == 0)
    {
        cout<<"Its is not a prime number, as it is divisible by 3.\n";
    }
     else if(number % 7 == 0)
    {
        cout<<"Its is not a prime number, as it is divisible by 7.\n";
    }
     else if(number % 11 == 0)
    {
        cout<<"Its is not a prime number, as it is divisible by 11.\n";
    }
    else if((number % 13 == 0))
    {

        cout<<"The number is not prime, as it is divisible by 13.\n";
    }
    else
    {
        cout<<"The number is prime\n";
    }
    
}

