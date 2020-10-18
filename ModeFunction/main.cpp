#include <iostream>
using namespace std;

const int SIZE = 5;
int modeFunction(int* ,int*, int);

int main()
{
    int* arr = new int[SIZE];
    int* freq = new int[SIZE];
    for( int i = 0; i < SIZE; i++ )
    {
      cout<<"Please enter the element at array index "<<i<<" : ";
      cin>> arr[i];
    }
    
    int result = modeFunction(arr, freq, SIZE);

    if(result == -1)
    {
        cout<<"There is no mode for these numbers\n";
    }
    else
    {
        cout<<"The mode for these numbers is: "<<result<<endl;
    }
    return 0;
}

int modeFunction(int* ptr, int* freq, int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        freq[i] = 0;
        for( int j = 0; j < SIZE; j++ )
        {
            if(ptr[i] == ptr[j])
            {
                freq[i]++;
            }

        }
       
    }
int maxFrequency = freq[0];
int mode;

    for(int y = 1; y < SIZE; y++)
    {
        if(freq[y] >= maxFrequency)
        {
            maxFrequency = freq[y];
            mode = ptr[y];
        
        }
    
    }
if(maxFrequency == 1)
{
    mode = -1;
}
return mode;
}