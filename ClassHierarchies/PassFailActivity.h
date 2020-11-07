//PassFailActivity inherits GradedActivity class
#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
    protected:
            double minPassingScore;
    public:
            //default constructor
             PassFailActivity() : GradedActivity()
            {
                minPassingScore = 0.0;
            }

            //constructor
             PassFailActivity(double mps) : GradedActivity()
            {
                minPassingScore = mps;
            }

            void setMinPassingScore(double mps)
            {
                minPassingScore = mps;
            }

            double getMinPassingScore() const
            {
                return minPassingScore;
            }

            char getLetterGrade() const;

};
#endif
