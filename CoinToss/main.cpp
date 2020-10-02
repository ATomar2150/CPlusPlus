#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void randomSelection(int);

int main()
{
    int numberOfTimes;
    cout<< "How many times the coins is tossed?\n";
    cin>> numberOfTimes;

    randomSelection(numberOfTimes);

    return 0;

}

void randomSelection(int times)
{
     int value;
     srand(time(0));

    for(int i=1; i<= times; i++)
    {
        value = 1 + (rand() % 2);
        cout<<"The value at "<<i<<" toss is: "<<value<<endl;
       if (value == 1){
           cout<<"Its a Head.\n";
       }
       else {
           cout<<"Its a Tail.\n";
       }
    }
}