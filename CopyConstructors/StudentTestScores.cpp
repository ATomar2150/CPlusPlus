#include "StudentTestScores.h"
#include <string>
using namespace std;

//constructor
StudentTestScores::StudentTestScores(string name, int arrSize)
{
    studentName = name;
    createTestScoresArray(arrSize);
}

//copy constructor (It has a reference parameter of the same classtype as object itself.)
StudentTestScores::StudentTestScores(const StudentTestScores &obj)
{
    studentName = obj.studentName;
    arrSize = obj.arrSize;
    testScores = new double[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        testScores[i] = obj.testScores[i];
    }
};

//destructor
StudentTestScores::~StudentTestScores()
{
    delete [] testScores;
}

//The setTestScore function sets a specific test score's value. 
void StudentTestScores::setTestScores(double score, int index)
{   
    testScores[index] = score;
}

//Set the student name
void StudentTestScores::setStudentName(string name)
{   
    studentName = name;
}

string StudentTestScores::getStudentName() const
{
    return studentName;
}

//Get the number of test scores
int StudentTestScores::getNumTestScores() const
{
    return arrSize;
}

//Get a specific test score
double StudentTestScores::getTestScores(int i) const
{
    return testScores[i];
}

//OVERLOAD OPERATOR
// this pointer always points to the object that is being used to call the member function.
StudentTestScores  StudentTestScores::operator=(const StudentTestScores &right)
{
    //delete[] testScores;
    studentName = right.studentName;
    arrSize = right.arrSize;
    testScores = new double[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        testScores[i] = right.testScores[i];
    }

    return *this;
}
