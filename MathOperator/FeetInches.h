#ifndef FEETINCHES_H
#define FEETINCHES_H

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
            FeetInches operator+ (const FeetInches &);
            FeetInches operator- (const FeetInches &);
            FeetInches operator++ ();
            FeetInches operator++ (int);

};

#endif