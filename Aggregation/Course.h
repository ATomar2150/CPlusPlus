#ifndef COURSE
#define COURSE
#include <string>
#include <iostream>
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
            Course(string course, string instrLastName,string instrFirstName, string instrOffice, string textTitle, string author,string publisher)
            {
                courseName = course;
                instructor.set(instrLastName, instrFirstName, instrOffice);
                textbook.set(textTitle, author, publisher);
            }

            void print() const
            {
                    cout<<"Course name: "<<courseName <<endl<<endl;
                    cout<<"Instructor Information: \n";
                    instructor.print();
                    cout<<"\nTextbook Information: \n";
                    textbook.print();
                    cout<<endl;
            }

};
#endif