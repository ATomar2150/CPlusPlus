#include "FinalExam.h"

void FinalExam::set(int questions, int missed)
{
    double numericScore;

    numQuestions = questions;
    numMissed = missed;

    //Calculate the point for each question
    pointsEach = 100.0/ numQuestions;


    //Calculate the numeric score for this exam
    numericScore = 100.0 - (missed * pointsEach);

    setScore(numericScore);
}