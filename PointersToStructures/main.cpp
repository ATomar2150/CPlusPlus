#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int id;
    int credentials;
    double gpa;
};
void getData(Student* s);

int main()
{
    Student female;

    cout<<"Enter the following student data.\n";
    getData(&female);

    cout<<"Student name is: "<<female.name<<endl;
    cout<<"Students Credentials are: "<<female.credentials<<endl;
    cout<<"Student ID is: "<<female.id<<endl;
    cout<<"Student GPA is: "<<female.gpa<<endl;

    return 0;
}

void getData(Student* s)
{
    cout<<"Enter Student Name: ";
    getline(cin, s->name);

    cout<<"Enter Student ID: ";
    cin >> s->id;

    cout<<"Enter Student Credentials: ";
    cin >> s->credentials;

    cout<<"Enter Student GPA: ";
    cin >> s->gpa;

}