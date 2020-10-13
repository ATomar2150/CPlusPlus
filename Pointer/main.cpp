#include <iostream>
using namespace std;

//============================================================
//uncomment the block of code you want to run and test.
//============================================================

// int main()
// {
//     int x = 25;
//     cout<<"The value of x: "<<x<<endl;
//     cout<<"The size of x: "<<sizeof(x)<<endl;
//     cout<<"The address of x: "<<&x<<endl;
//     return 0;
// }

// int main()
// {
//     int x = 25;
//     int *ptr;

//     ptr = &x; //strore the address of x in pointer.

//     cout<<"The value in x: "<<*ptr<<endl;
//     cout<<"The address in x: "<<ptr<<endl;

//     *ptr = 100;

//     cout<<"The value in x: "<<x<<endl;
//     cout<<"The address in x: "<<ptr<<endl;

//     return 0;
// }

// int main()
// {
//     int x = 25;
//     int y = 30;
//     int *ptr;

//     ptr = &x; //strore the address of x in pointer.
//     cout<<"The value in x: "<<*ptr<<endl;
//     cout<<"The address in x: "<<ptr<<endl;
//     ptr = &y; //Add the address of y in ptr.
//     *ptr += 100; //Add 100 to the value of y.
//     cout<<"The address in y: "<<ptr<<endl;
//     cout<<"The value in y: "<<*ptr<<endl;
//     return 0;
// }

// int main()
// {
//     const int NUM_COINS = 5;
//     double coins[NUM_COINS] = {0.5, 1, 2 , 0.4, 3};
//     double *ptr; //pointer to double
//     ptr = coins;
//     for(int i = 0; i < NUM_COINS; i++ )
//     {
//         cout<<ptr[i]<<endl;
//     }
//     cout<<"===================================="<<endl;
//=================POINTER NOTATION==============================
//     for(int i = 0; i < NUM_COINS; i++)
//     {
//         cout<<*(coins + i)<<endl;
//     }


//     return 0;
// }

// int main()
// {
//     const int SIZE = 4;
//     int number[SIZE] = {12, 14, 17, 18};
//     int *count;
//     count = number;
//     for(int i = 0; i < SIZE; i++)
//     {
//         cout<<*count<<endl; //address is moving forward.
//         count++;
//     }
//     cout<<"================================="<<endl;
//      for(int i = 0; i < SIZE; i++)
//     {
//         count--;
//         cout<<*count<<endl;      
//     }
//     return 0;
// }


/*COMPARING POINTERS*/

int main()
{
    int set[8] = {1,2,3,4,5,6,7,8};
    int *num;
    num = set;

    cout<<*num<<endl;

    while(num < &set[7])
    {
        num++;
        cout<<*num<<endl;   
    }
    cout<<"========================"<<endl;
    cout<<*num<<endl;
    
    while(num > set) //here set means set[0]
    {
        num--;
        cout<<*num<<endl;   
    }

    return 0;
}