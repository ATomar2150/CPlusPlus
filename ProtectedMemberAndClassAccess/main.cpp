//This program demonstrates the base class with protected member
#include <iostream>
#include <iomanip>
#include "FinalExam.h"

using namespace std;

int main()
{
    int questions;
    int missed;

    cout<<"How many questions are on the final exam?"<<endl;
    cin >> questions;

    cout<<"How many questions did the student miss?"<<endl;
    cin >> missed;

    FinalExam test(questions, missed);

    cout<<"Each question counts "<<test.getPointsEach()<<endl;
    cout<<"Adjusted exam score "<<test.getScore()<<endl;
    cout<<"The exam grade is "<<test.getLetterGrade()<<endl;

    return 0;
}