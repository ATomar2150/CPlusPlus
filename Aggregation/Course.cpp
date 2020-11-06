#include "Course.h"
#include <string>
using namespace std;

//Constructor
Course(string course, string instrFirstName, string instrLastName, string textTitle, string author, string publisher)
{   
    courseName = course;

    //Assign the instructor.
    instructor.set(instrLastName, instrFirstName, instrOffice);

    //Assign the textBook.
    textbook.set(textTitle, author, publisher);
}