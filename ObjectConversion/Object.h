#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
using namespace std;

class FeetInches;

class FeetInches
{
    private:
            int feet;
            int inches;
            
            void simplify();
            
    public:
            //Default Constructor
            FeetInches();
            FeetInches(int, int);

            void setFeet(int);
            void setInches(int);
            int getFeet() const;
            int getInches() const;
            
            operator double();
            operator int();

            friend ostream &operator << (ostream &strm, const FeetInches &obj);
            friend istream &operator >> (istream &strm, FeetInches &obj);

};

#endif