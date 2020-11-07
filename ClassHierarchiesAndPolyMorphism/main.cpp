#include <iostream>
#include "PassFailExam.h"
using namespace std;

void displayGrade(const GradedActivity &);

int main()
{
    // int questions;
    // int missed;
    // double minPassing;

    // cout<<"How many questions are on the exam? "<<endl;
    // cin >> questions;

    // cout<<"How many questions did the student miss? "<<endl;
    // cin >> missed;

    // cout<<"Enter the min passing grade?\n";
    // cin >> minPassing;

    // PassFailExam exam(questions, missed, minPassing);

    // cout<<"Each question counts "<<exam.getPointsEach()<<" points.\n";
    // cout<<"Minimum passing score is "<<exam.getMinPassingScore()<<endl;
    // cout<<"Student exam score is "<<exam.getScore()<<endl;
    // cout<<"Student grade is "<<exam.getLetterGrade()<<endl;

    //FOR testing virtual functions
    GradedActivity test1(88.0);
    PassFailExam test2(100,50,70.0);

    //test.setScore(72);
    cout<<"Test1: "<<endl;
    displayGrade(test1);
    cout<<"Test2: "<<endl;
    displayGrade(test2);

    return 0;
}

void displayGrade(const GradedActivity &activity)
{
    cout<<"The actiity numeric score is: "<<activity.getScore()<<endl;
    cout<<"The activity's letter grade is: "<<activity.getLetterGrade()<<endl;
}