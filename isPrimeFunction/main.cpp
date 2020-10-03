#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int);

int main()
{
    ofstream outputFile;
    outputFile.open("primenumber.txt");

    int number;

    if(outputFile)
    {
        for(int number=1; number<= 100; number++)
        {
            if(isPrime(number))
            {
            cout<<"The number is: "<<number<<". It is prime\n";
            }
            else
            {
                cout<<"The number is: "<<number<<". It is non prime\n";
            }
        outputFile.close();
         }
    }
    else
    {
        cout<<"Error opening in file.\n";
    }  
 
    return 0;
    
}

bool isPrime(int number)
{
    int isPrime =0;
    for(int i=1; i<=number; i++)
    {
         if(number%i==0)
         {
             isPrime++;
         }
    }
   return isPrime == 2 ? 1 : 0;
}