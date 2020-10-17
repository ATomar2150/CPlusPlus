#include <iostream>
using namespace std;

int* userDefined(int NUM);
void sortNumber(int* ptr, int NUM);
double average(int* ptr, int NUM );

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

    cout<<"The average of numbers is: "<<endl;
    cout<<average(arr, NUM);

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

double average(int* ptr, int NUM )
{
    int total = 0.0;
    double avg;
    for(int i = 0; i < NUM; i++)
    {
        total += ptr[i];
    }

    avg = total/NUM;
    return avg;
}

