#include <iostream>
#include <string>
using namespace std;

struct ClassRoom
{
    string name;
    int classNumber;
};

int main()
{
    ClassRoom eighth = {"Aparna", 13};

    cout<<"The name of the student is: "<<eighth.name<<endl;
    cout<<"The classNumber is: "<<eighth.classNumber<<endl;

    return 0;
}