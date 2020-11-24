#include <iostream>
#include <cstring>
using namespace std;

// void countEven(int* num ,int SIZE)
// {
//     for(int i = 0; i < SIZE; i++)
//     {
//         if(num[i] % 2 == 0)
//         {
//             cout << num [i] <<endl;
//         }
//     }
    
// }


int main()
{
    //Question 1:
    //    char blocks[3] = {'A','B','C'};
    //    char *ptr = &blocks[0]; //4434
    //    char temp; 

    //    temp = blocks[0]; //'A
    //    temp = *(blocks + 2); //'C'
    //    temp = *(ptr + 1); //'B'
    //    temp = *ptr; //'A'

    //    ptr = blocks + 1; //4435
    //    temp = *ptr; //'B'
    //    temp = *(ptr + 1); //'C'

    //    ptr = blocks; //4434
    //    temp = *++ptr; //'B'
    //    temp = ++*ptr; //++(*ptr) //++('B') //C
    //    temp = *ptr++; //'C'
    //    temp = *ptr; //'C'

    //Question 2:
    // int *p;
    // int i;
    // int k;
    // i = 42;
    // k = i;
    // p = &i;
    
    // //OPTIONS
    // // k = 75;
    // // *k = 75;
    // // p = 75;
    // *p = 75; //Correct Answer
    // //Two or more of the answers will change i to 75.
    // cout << i <<endl;

    //Question 3:
    // char s[10] = "abcde";
    // char* cptr;
    // int count = 0;

    // cptr = s;
    // for(int i = 0; cptr[i] != '\0'; i++)
    // {
    //     count++;
    // }
   

    // for(int i = count; i >= 0; i--)
    // {
    //     cout<< *(cptr + i) <<endl;
    // }
    

    //Question 4:
    // int SIZE = 4;
    // int number[SIZE] = {2,3,4,5};
    // countEven(number , SIZE);

    //Question 5:

    return 0;
}
