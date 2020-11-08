//Specification file for student class
#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student
{
    protected:
            string name;
            string idNumber;
            int yearAdmitted;

    public:
            //Default Constructor
            Student()
            {
                name = " ";
                idNumber = " ";
                yearAdmitted = 0;
            }

            Student(string n,string id, int year)
            {
                set(n, id, year);
            }

            void set(string n, string id, int year)
            {
                name = n;
                idNumber = id;
                yearAdmitted = year;
            }

            const string getName() const
            {
                return name;
            }

            const string getIdNum() const
            {
                return idNumber;
            }

            int getYearAdmitted() const
            {
                return yearAdmitted;
            }

            //Base class always have Pure Virtual Function and is denoted by =0. It has no body or defination, in the base class.
            virtual int getRemainingHours() const = 0;
};
#endif