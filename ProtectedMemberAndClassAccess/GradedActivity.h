#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

//Graded class declaration
/* Protected members of a base class are like private members, but they may be accessed by derived class.
The base class specificaton determines how private, public and protected base class members are accessed 
when they are inherited by derived class.
*/

class GradedActivity
{
    protected:
             //To hold the numeric score
             double score;
    public:
            //Default Constructor
            GradedActivity()
            {
                score = 0.0;
            }

            GradedActivity(double s)
            {
                score = s;
            }

            //Mutator function
            void setScore(double s)
            {
                score = s;
            }

            //Accessor function
            double getScore() const
            {
                return score;
            }

            char getLetterGrade() const;

};

#endif