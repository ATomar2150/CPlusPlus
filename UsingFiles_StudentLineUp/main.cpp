#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{   
    
    ifstream inputFile;

    string student, 
           first, 
           last;
           
    int num_of_students;
    
    // 1. Open the file
    inputFile.open("rupinder.txt");

    if (inputFile)
    {
        // 2. Process the file
        inputFile >> student;

        first = last = student;
        cout<<"Initialy we are setting first, last and student to: "<<student<<" "<<first<<" "<<last<<endl;
        

        while (inputFile >> student)
        {
            if (student < first){
                cout<<"\nWhile entering the while loop STUDENT is: "<<student<<endl;
                first = student;
                cout<<"The student is iterating (student < first) and FIRST NAME is: "<<first<<endl;
                }

            if (student > last){
                cout<<"\nWhile entering the while loop STUDENT is: "<<student<<endl;
                last = student;
                cout<<"The student is iterating (student > last) and LAST NAME is: "<<last<<endl;
            }
        }

            // 3. Close File
            inputFile.close(); 
    }
    else
    {
        cout << "Error opening file." << endl;
    }
    
    cout << "First student in line = " 
         << first << endl;

    cout << "Last student in line  = " 
         << last << endl << endl;
    
    return 0;
}
