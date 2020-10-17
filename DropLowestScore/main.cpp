#include <iostream>
using namespace std;

int* userDefined(int NUM);
void sortNumber(int* ptr, int NUM);
int lowestScore(int* ptr, int NUM);
double average(int* ptr, int NUM, int low);

int main()
{
    int NUM;
    cout<<"Enter the size of Test Scores\n";
    cin >> NUM;
   
    int* arr = userDefined(NUM);
    sortNumber(arr, NUM);
    cout<<"The sorted array is: "<<endl;

    for(int i = 0; i < NUM; i++)
    {
        cout<< *(arr + i)<<endl;
    }

    int low = lowestScore(arr, NUM);
   
    cout<<average(arr, NUM, low);

    return 0;
}

int* userDefined(int NUM)
{
   int* ptr = new int[NUM];
   cout<<"Enter "<<NUM<<" numbers: "<<endl;

    for(int i = 0; i < NUM; i++)
    {
        cin >> *(ptr + i);
    }

    return ptr;
}

void sortNumber(int* ptr, int NUM)
{
    int i;
    int key;
    int val;
    for (int i = 0; i < NUM -1; i++)
    {
       key = i;
       
        for (int j = i + 1; j < NUM; j++)
        {
            if(ptr[key] > ptr[j])
            {
                key = j;
            }
            
        }
        val = ptr[key];
        ptr[key] = ptr[i];
        ptr[i] = val;

    }
}

int lowestScore(int* ptr, int NUM)
{
    int lowest = ptr[0];
    for(int i = 1; i < NUM; i++)
    {
        if(lowest > ptr[i])
        {
            lowest = ptr[i];
        }
    }
    return lowest;
}

double average(int* ptr, int NUM, int low )
{
    int total = 0.0;
    double avg;
    for(int i = 0; i < NUM; i++)
    {
        total += ptr[i];
    }
    cout<<"The lowest number is: "<<low<<endl;
    total = total - low;
    avg = total/(NUM-1);
    cout<<"The average of numbers is: ";
    return avg;
}

