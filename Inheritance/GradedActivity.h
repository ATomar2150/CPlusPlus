#ifndef GRADED_H
#define GRADED_H

//graded activity class declaration

class GradedActivity
{
    private:
            double score;
    public:
            //Default Constructor
            GradedActivity()
            {
                score = 0.0;
            };

            //constructor
            GradedActivity(double s)
            {
                score = s;
            }

            //Mutator Function
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