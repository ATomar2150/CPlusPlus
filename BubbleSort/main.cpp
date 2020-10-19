#include <iostream>
using namespace std;

const int SIZE = 5;

int main()
{
    bool swap;
    int number[SIZE] = { 42, 54, 11, 9, 1 };
    do
    {
        swap = false;
            for (int i = 0; i < SIZE-1; i++ )
            {
                cout<<endl;
                cout<<"Index at (i = "<<i<<") with value : "<<number[i]<<endl;
                cout<<"Index at ((i+1) = "<<(i+1)<<") with value : "<<number[i+1]<<endl;
                cout<<"==============================================================================\n\n";
                if(number[i+1] < number[i])
                {
                    int temp = number[i];
                    number[i] = number[i+1];
                    cout<<"Program enter the loop for swapping."<<endl<<endl;
                    cout<<"The (i+1) is stored in (i) and (i) is stored in (i+1) as number being swapped. "<<endl;
                    cout<<"==============================================================================\n\n";
                    
                    number[i+1] = temp;
                    cout<<"The new index at (i = "<<i<<") with value : "<<number[i]<<endl;
                    cout<<"The new index at ((i+1) = "<<(i+1)<<") with value : "<<number[i+1]<<endl;
                    cout<<"==============================================================================\n";
                    cout<<"NEW ARRAY\n";
                    for(int j = 0; j < SIZE; j++)
                    {
                    cout<<number[j]<<" ";
                    }
                    cout<<"\n==============================================================================\n";

                    swap = true;
                }
            }
    }while(swap == true);


    return 0;
}