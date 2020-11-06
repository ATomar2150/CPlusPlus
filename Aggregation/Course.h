#ifndef COURSE
#define COURSE
#include <string>
#include "Instructor.h"
#include "TextBook.h"

using namespace std;

class Course
{
    private:
            string courseName;
            Instructor instructor;
            TextBook textbook;
    public:
            //Constructor
            Course(string course, string instrFirstName, string instrLastName, string textTitle, string author, string publisher);

};
#endif