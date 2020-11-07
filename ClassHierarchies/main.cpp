#include <iostream>
#include "PassFailExam.h"
using namespace std;

int main()
{
    int questions;
    int missed;
    double minPassing;

    cout<<"How many questions are on the exam? "<<endl;
    cin >> questions;

    cout<<"How many questions did the student miss? "<<endl;
    cin >> missed;

    cout<<"Enter the min passing grade?\n";
    cin >> minPassing;

    PassFailExam exam(questions, missed, minPassing);

    cout<<"Each question counts "<<exam.getPointsEach()<<" points.\n";
    cout<<"Minimum passing score is "<<exam.getMinPassingScore()<<endl;
    cout<<"Student exam score is "<<exam.getScore()<<endl;
    cout<<"Student grade is "<<exam.getLetterGrade()<<endl;

    return 0;
}