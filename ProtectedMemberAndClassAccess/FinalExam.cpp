#include "FinalExam.h"

void FinalExam::set(int questions, int missed)
{
    double numericScore; //to hold numeric score

    numQuestions = questions;
    numMissed = missed;

    pointsEach = 100.0 / numQuestions;
    numericScore = 100.0 - (missed * pointsEach);

    //call the inherited set score function from GradedActivity.h
    setScore(numericScore);

    //Call the adjustScore function to adjust the score
    adjustScore();

}

void FinalExam::adjustScore()
{
    double fraction = score - static_cast<int>(score);

    if(fraction >= 0.5)
    {
        score = score + (1.0 - fraction);
    }
}