#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main()
{
    ContactInfo entry("Kristen Lee", "2269783786" );

    cout<<"The name of the person is: "<<entry.getName()<<endl;
    cout<<"The phone number of the person is: "<<entry.getPhone()<<endl;
    return 0;
}