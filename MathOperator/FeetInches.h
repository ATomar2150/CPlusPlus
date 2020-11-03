#ifndef FEETINCHES_H
#define FEETINCHES_H
#include <iostream>
using namespace std;

class FeetInches;

//FUNCTION PROTOTYPE OF OVERLOAD STREAM OPERATOR
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

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

            //Operator overload Function
            FeetInches operator++ (); //prefix
            FeetInches operator++ (int); //postfix

            FeetInches operator+ (const FeetInches &);
            FeetInches operator- (const FeetInches &);

            bool operator< (const FeetInches &);
            bool operator> (const FeetInches &);
            bool operator== (const FeetInches &);
            
            //FRIENDS
            friend ostream &operator << (ostream &strm, const FeetInches &obj);
            friend istream &operator >> (istream &strm, FeetInches &obj);


};

#endif