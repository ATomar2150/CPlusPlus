#include <iostream>
using namespace std;

//Base Class Declaration
class BaseClass
{
    public:
            BaseClass()
            {
                cout<<"This is a Base Class Constructor.\n";
            }
            ~BaseClass()
            {
                cout<<"This is a Base Class Destructor.\n";
            }

};

//derived class declaration

class DerivedClass : public BaseClass
{
    public:
            DerivedClass()
            {
                cout<<"This is Derived Class Constructor.\n";
            }
            ~DerivedClass()
            {
                cout<<"This is Derived Class Destructor.\n";
            }
};

//main function

int main()
{
    cout<<"We will now define Derived Class object.\n";

    DerivedClass object;

    cout<<"The program is now going to end.\n";

    return 0;
}