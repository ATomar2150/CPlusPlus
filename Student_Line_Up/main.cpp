#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int numberOfStudents;
    string nameFirst;
    string nameLast;
    string student;

    cout << "Please enter number of students\n";
    cin >> numberOfStudents;

    //input validation
    if (numberOfStudents > 25 || numberOfStudents < 1)
    {
        cout<<"Invalid range of student number.\n";
        return 0;
    }
    
    cout <<"Please enter the name of student 1\n";
    cin >> student;

    nameFirst = nameLast = student;

    for (int i = 1; i <= numberOfStudents-1; i++ )
    {
        cout <<"Enter the name for the student "<< (i+1) <<endl;
        cin>> student;

        if (student > nameLast)
        {
             nameLast = student;
        }

        if(student < nameFirst)
        {
            nameFirst = student;
        }

        if(student > nameLast)
        {
            nameLast = student;
        }

    }

    cout<<"Student at front: "<<nameFirst<<endl;
    cout<<"Student at end: "<<nameLast<<endl;

    return 0;
}