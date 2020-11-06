//Aggregation occurs when a class contans an instance of another class.

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>

using namespace std;

class Instructor
{
    private:
            string lastName;
            string firstName;
            string officeNumber;
    public:
            //default constructor
            Instructor();

            //constructor
            Instructor(string, string, string);

            void setLastName(string);
            void setFirstName(string);
            void setOfficeNumber(string);

            string getLastName() const;
            string getFirstName() const;
            string getOfficeNumber() const;

            void set(string, string, string);

            void print() const;
};
 #endif