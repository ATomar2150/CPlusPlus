//A copy constructor is a special constructor that's called when an object is initialized with another object's data.

#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
#include <iostream>

using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
    private:
            string studentName;
            double* testScores; //pointer to array of test scores(PROBLEM)
            int arrSize;

            //private member function createTestScoresArray, it dynamically allocates a section of memory for testSores array, and assign default value to each of its element.
            void createTestScoresArray(int size)
            {
                arrSize = size;
                testScores = new double[size];
                for(int i = 0; i < size; i++)
                {
                    cout<<"Enter the value at elemenet: "<<(i+1)<<endl;
                    cin >> testScores[i]; //Array testScore is initiated with value = 0 in all the indexes.
                }

            }
    public:
        
            //Constructor 
            StudentTestScores(string, int);

            //Copy Constructor
            StudentTestScores(const StudentTestScores &);

            //Destructor
            ~StudentTestScores();

            void setTestScores(double, int); 
            void setStudentName(string);
            
            string getStudentName() const;
            int getNumTestScores() const;
            double getTestScores(int) const;

            StudentTestScores operator=(const StudentTestScores &right);


};
#endif