#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GradedActivity.h"

class FinalExam : public GradedActivity
{
    private:
            double pointsEach;
            int numMissed;
            int numQuestions;

    public:
            //Default Constructor
            FinalExam()
            {
                pointsEach = 0.0;
                numMissed = 0;
                numQuestions = 0;
            }

            //constructor
            FinalExam(int questions, int missed)
            {
                set(questions, missed);
            }

            //Mutator function
            void set(int, int);

            //Accessor function
            double getNumQuestions() const
            {
                return numQuestions;
            }

            double getPointsEach() const
            {
                return pointsEach;
            }

            int getNumMissed() const
            {
                return numMissed;
            }
};

#endif