#include <iostream>
using namespace std;

int main()
{
    const int NUM_FISH = 20;
    int fish[NUM_FISH];

    for(int i = 0; i < NUM_FISH; i++)
    {
        cout<<"Enter the number of fish caught by the fisherman"<<endl;
        cin>> fish[i];

    }

    for (int i = 0; i < NUM_FISH; i++)
    {
        cout<<"The " << (i+1) << "th element is " << fish[i]<<endl;
    }
    return 0;
}