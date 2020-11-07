#include <iostream>
#include "CurvedActivity.h"
using namespace std;

int main()
{
    double numericScore;
    double percentage;

    CurvedActivity exam;

    cout<<"Enter the student's raw numeric score: \n";
    cin >> numericScore;

    cout<<"Enter the curve percentage for this student: \n";
    cin >>percentage;

    exam.setPercentage(percentage);
    exam.setScore(numericScore);

    cout<<"The raw score is "<<exam.getRawScore()<<endl;
    cout<<"The curved score is "<<exam.getScore()<<endl;
    cout<<"The curved grade is "<<exam.getLetterGrade()<<endl;
}