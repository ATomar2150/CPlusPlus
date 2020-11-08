#include <iostream>
#include "CsStudent.h"

using namespace std;

int main()
{
    CsStudent student("Jennifer", "143", 2006);

    student.setMathHours(12);
    student.setCsHours(20);
    student.setGenHours(40);

    cout<<"The student "<<student.getName()<<" need to take "<< student.getRemainingHours()<<" more hours to graduate.\n";

    return 0;
}