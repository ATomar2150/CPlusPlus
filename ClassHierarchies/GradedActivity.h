#ifndef GRADED_H
#define GRADED_H

//graded activity class declaration

class GradedActivity
{
    protected:
            char letter;
            double score;
            void determineGrade();
    public:
            //Default Constructor
            GradedActivity()
            {
                letter = ' ';
                score = 0.0;
            };

            //Mutator Function
            void setScore(double s)
            {
                score = s;
                getLetterGrade();
            }

            //Accessor function
            double getScore() const
            {
                return score;
            }

            char getLetterGrade() const
            {
                char letterGrade; //to hold the letter grade

                if(score > 89)
                {
                    letterGrade = 'A';
                }
                else if (score > 79)
                {
                    letterGrade = 'B';
                }
                else if (score > 69)
                {
                    letterGrade = 'C';
                }
                else if (score > 59)
                {
                    letterGrade = 'D';
                }
                else
                {
                    letterGrade = 'F';
                }

                return letterGrade;
            };
};

#endif