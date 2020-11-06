#include <iostream>
#include <iomanip>
#include "FinalExam.h"
using namespace std;

int main()
{
    // double testScore;

    // GradedActivity test;

    // cout<<"Enter the numeric test score: ";
    // cin >> testScore;

    // test.setScore(testScore);

    // cout<<"The grade for the test is: "<<test.getLetterGrade()<<endl;

    // return 0;

    int questions;
    int missed;

    cout<<"How many questions are in the final exam? ";
    cin >> questions;

    cout<<"How many questions did the student miss? ";
    cin >> missed;

    FinalExam test(questions, missed);

    cout<<"Each question counts "<<test.getPointsEach()<<" points.\n";
    cout<<"The exam score is "<<test.getLetterGrade()<<endl;
    cout<<"The exam grade is "<<test.getLetterGrade()<<endl;

    return 0;

}