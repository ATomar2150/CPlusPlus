#include <iostream>
#include <string>

using namespace std;

struct PayInfo
{
    string name;
    int number;
};

int main()
{
    const int SIZE = 2;
    PayInfo employeeInfo[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        cout<<"Enter name of the "<<(i+1)<<" employee is: "<<endl;
        // cin.ignore();
        cin >> employeeInfo[i].name;
        // getline(cin, employeeInfo->name);

        cout<<"Enter employee number of the "<<(i+1)<<" employee is: "<<endl;
        cin >> employeeInfo[i].number;
    }

    for(int i = 0; i < SIZE; i++)
    {
        cout<<"The name of the "<<(i+1)<<" employee is: "<<employeeInfo[i].name<<endl;

        cout<<"The number of the "<<(i+1)<<" employee is: "<<employeeInfo[i].number<<endl;
    }

    return 0;
}