#include "StudentTestScores.h"
#include <iostream>
#include <string>
using namespace std;

//WHY COPY CONSTRUCTOR ARE PASS BY REFERENCE NOT PASS BY VALUE?
//ANSWER: https://www.youtube.com/watch?v=pBKwWl56uXc

int main()
{
    string name;
    int size;

    cout<<"Please enter the name of the student.\n";
    cin>> name;

    cout<<"Please enter the size of the memory allocated to dynamic array.\n";
    cin >> size;

    StudentTestScores stu1(name, size);
    StudentTestScores stu2 = stu1; //here the copy constructor is called as defined in StudentTestScores.cpp file. And another dynamic array is created in the heap memory.
    cout<< stu2.getStudentName()<<endl;

    for(int i = 0; i < size; i++)
    {
        cout<<stu2.getTestScores(i)<<" ";
    }
    return 0;
}