#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

//graded activity class declaration

class GradedActivity
{
    protected:
            //char letter;
            double score;
            //void determineGrade();
    public:
            //Default Constructor
            GradedActivity()
            {
                //letter = ' ';
                score = 0.0;
            };

            GradedActivity(double s)
            {
                score = s;
            };

            //Mutator Function
            void setScore(double s)
            {
                score = s;
                //determineGrade();
            }

            //Accessor function
            double getScore() const
            {
                return score;
            }

            virtual char getLetterGrade() const;
            // {
            //     char letterGrade; //to hold the letter grade

            //     if(score > 89)
            //     {
            //         letterGrade = 'A';
            //     }
            //     else if (score > 79)
            //     {
            //         letterGrade = 'B';
            //     }
            //     else if (score > 69)
            //     {
            //         letterGrade = 'C';
            //     }
            //     else if (score > 59)
            //     {
            //         letterGrade = 'D';
            //     }
            //     else
            //     {
            //         letterGrade = 'F';
            //     }

            //     return letterGrade;
            // };
};

#endif