#include <iostream>
using namespace std;

int main(){
    int students;
    double scores;
    double marks;
    double totalOfTheScoreForStudent;
    cout<<"How many students are there? "<<endl;
    cin>> students;
    for ( int i = 1; i <= students; i++ ){
        cout << "How many test scores does "<<i<<" student has? "<<endl;
        cin>> scores;
        cout<<"We are getting the test score for Student "<<i<<endl;

        //IMPORTANT we have to initialise the accumulator inside for loop, because if we have initialised outside the for loop it will calculate the total of all the student.
        totalOfTheScoreForStudent = 0;

        for ( int y = 1; y <= scores; y++ )
        {          
            cout<<"Please enter the Test Score for test "<<y<<" for Student "<<i<<endl;
            cin>>marks;
            totalOfTheScoreForStudent = totalOfTheScoreForStudent + marks;
            
        }
        cout<<"Total Mark of Student "<<i<<": "<<totalOfTheScoreForStudent<<endl;
    }
    return 0;
}