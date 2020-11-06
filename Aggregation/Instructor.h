//Aggregation occurs when a class contans an instance of another class.

#ifndef INSTRUCTOR
#define INSTRUCTOR

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
            Instructor()
            {
                set("","","");
            };

            //constructor
            Instructor(string lname, string fname, string office)
            {
                set(lname, fname, office);
            };

            
            void set(string lname, string fname, string office)
            {
                    lastName = lname;
                    firstName = fname;
                    officeNumber = office;
            };
            
            //print function
            void print() const
            {
                cout<<"Last Name: "<<lastName<<endl;
                cout<<"First Name: "<<firstName<<endl;
                cout<<"Office Number: "<<officeNumber<<endl;
            };
};
 #endif