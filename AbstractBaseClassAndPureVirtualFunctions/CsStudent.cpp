#include <iostream>
#include "CsStudent.h"

int CsStudent::getRemainingHours() const
{
    int reqHours;
    int remainingHours;

    reqHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;
    remainingHours = reqHours - (mathHours + csHours + genEdHours);

    return remainingHours;


}