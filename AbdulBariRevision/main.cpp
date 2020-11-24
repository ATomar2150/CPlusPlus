#include <iostream>

using namespace std;

// 2. Defination of Structure
// struct Rectangle
// {

//     int length;
//     int breadth;
//     char x; //For machine readibilty it will take four byte for character but use only one byte.
// };

// 5. POINTER TO STRUCTURE
// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// 6. FUNCTIONS : Parameter passing three methods

//a. pass by value

// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;

//     cout<<"After Swapping: "<< x <<" "<< y <<endl;
// }

//b. pass by address

// void swap(int* x, int* y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;

// }

//c. pass by reference

// void swap(int &x, int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;

// }

//7. Structure as Parameters

//Call by value
// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle r)
// {
//     cout<< r.length <<" "<<r.breadth<<endl;
// }

//Call by address
// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle* p)
// {
//     p->length = 20;
//     cout<< p->length <<" "<<p->breadth<<endl;
// }


int main()
{
    // 1. ARRAYS
    // int A[5]={12, 13};

    // cout << sizeof(A) <<endl;
    // cout <<sizeof(A[1]) <<endl;
    // cout << A[3];
    // return 0;

    // 2. STRUCTURES
    //Variable declaration
    // struct Rectangle r1 = {10, 5}; //variable can also be declared outside main function
    // cout<< r1.length * r1.breadth <<endl;
    // cout << sizeof(r1); //int length = 4 byte, int breadth = 4 byte.

    // 3. POINTERS
    //Example using INTEGER variable
    // int a = 10;
    // int* p; //star should be used at time of declaration and de-referencing

    // p = &a; //assign address of a by using & and assigning to p
    // cout <<"The value of a is: "<<a <<endl;
    // cout <<"Address of p is: "<< p <<endl;
    // cout <<"After DE-REFRENCING The value of p is: "<< *p <<endl;

    //Example using ARRAY

    // int A[5] = {2, 3, 4, 6, 7};
    // int* ptr;
    // ptr = A; // OR ptr = &A[0]

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << A[i] <<" ";
    //     //cout<< ptr[i] << " ";
    // }

    //( Creating Array in heap)

    // int* p;

    // p = new int[5]; //Reques of memory in heap

    // p[0] = 10, p[1] = 15, p[2] = 101, p[3] = 5, p[4] = 8;

    //  for(int i = 0; i < 5; i++)
    // {
    //     cout<< p[i] << " ";
    // }

    //delete [ ] p; //delete the dynamicaly allocated memory

    // 4. REFERENCE: Useful in parameter passing for small program instead of pointers.

    // int a = 10;
    // int &r = a; //initialise it, r is alias of a

    // cout << r <<endl;
    // cout << a <<endl;
    // r++;
    // cout << r <<endl;
    // cout << a <<endl;

    // 5. POINTER TO STRUCTURE

    // Rectangle r = {10, 5};
    // //Creating a normal variable r of Rectangle.
    // cout << r.length <<" "<< r.breadth <<endl;

    // Rectangle* p = &r; //assigning the address of r to a pointer p of type Rectangle
    // cout << p->length <<endl;
    // cout << p->breadth <<endl;

    //CREATE AN OBJECT in Heap memory

    // Rectangle* p;
    // p = new Rectangle;
    // p->length = 15;
    // p->breadth = 21;

    // cout << p->length << endl;
    // cout << p->breadth << endl;

    // 6. FUNCTIONS : Parameter passing three methods

    //a. pass by value

    // int a, b;
    
    // a = 10;
    // b = 20;

    // cout<<"Before Swapping: "<< a <<" "<< b <<endl;

    // swap(a,b);

    //b. pass by address

    // int a, b;
    
    // a = 10;
    // b = 20;

    // cout<<"Before Swapping: "<< a <<" "<< b <<endl;

    // swap(&a, &b);

    // cout<<"After Swapping: "<< a <<" "<< b <<endl;

    //c. pass by reference

    // int a, b;
    
    // a = 10;
    // b = 20;

    // cout<<"Before Swapping: "<< a <<" "<< b <<endl;

    // swap(a,b); 

    // cout<<"After Swapping: "<< a <<" "<< b <<endl;

    // 7. Structure as Parameters
    //Call by value
    // Rectangle r = {10,5};

    // cout << r.length <<" "<< r.breadth <<endl;
    // fun(r);

    //Call by address
    // Rectangle r = {10,5};

    // cout << r.length <<" "<< r.breadth <<endl;
    // fun(&r);


    return 0;
}