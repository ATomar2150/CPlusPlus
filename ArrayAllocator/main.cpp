#include <iostream>
using namespace std;

int* showElement(int NUM);

int main()
{
  
   int* arr = showElement(5);
   cout<<"Enter the 5 elements of array.\n";
   for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
   cout<<"=======================\n";
   for(int i = 0; i < 5; i++)
    {
        cout << arr[i]<<endl;
    }

   return 0;
}

int* showElement(int NUM)
{   
   int* ptr = new int[NUM];
   return ptr;
}