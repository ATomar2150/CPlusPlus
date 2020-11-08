#ifndef DATETIME_H
#define DATETIME_H
#include <string>
#include "Date.h"
#include "Time.h"
using namespace std;

class DateTime : public Date, public Time
{
    public:
        //Default Constructor
        DateTime();

        //Constructor
        DateTime(int, int, int, int, int, int);

        void showDateTime() const;
};

#endif