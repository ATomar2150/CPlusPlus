#include <iostream>
#include "personal.h"
using namespace std;

int main()
{   
    //setting the value in constructor 1
    Personal per1("Aparna", "522 Wismer", 29, 22678);
    Personal per2("Rupinder", "383 Albert Street", 31, 22697);
    Personal per3("Shekhar", "1356 Sector 5",34, 989691);

    cout<<"FIRST INSTANCE\n";
    cout<<per1.getName()<<" "<<per1.getAddress()<<" "<<per1.getAge()<<" "<<per1.getPhoneNumber()<<endl;
    cout<<"SECOND INSTANCE\n";
    cout<<per2.getName()<<" "<<per2.getAddress()<<" "<<per2.getAge()<<" "<<per2.getPhoneNumber()<<endl;
    cout<<"THIRD INSTANCE\n";
    cout<<per3.getName()<<" "<<per3.getAddress()<<" "<<per3.getAge()<<" "<<per3.getPhoneNumber()<<endl;
    return 0;
}