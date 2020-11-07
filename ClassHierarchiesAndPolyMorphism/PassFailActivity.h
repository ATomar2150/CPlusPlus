//PassFailActivity inherits GradedActivity class
#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
    protected:
            double minPassingScore;
    public:
            //Default constructor
             PassFailActivity() : GradedActivity()
            {
                minPassingScore = 0.0;
            }

            //Constructor
             PassFailActivity(double mps) : GradedActivity()
            {
                minPassingScore = mps;
            }

            void setMinPassingScore(double mps)
            {
                minPassingScore = mps;
            }

            //Accessor
            double getMinPassingScore() const
            {
                return minPassingScore;
            }

            virtual char getLetterGrade() const;

};
#endif
