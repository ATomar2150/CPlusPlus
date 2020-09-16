#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
    double testscore1,
           testscore2,
           testscore3,
           average;
    char userInput;
//In a do while lopp user inputs 3 test scores, calculating its average and asking the user if he wants to continue or not.
    do{
        cout<<"Enter the 3 test scores: "<<endl;
        cin>>testscore1;
        cin>>testscore2;
        cin>>testscore3;
        average = testscore1 + testscore2 + testscore3 / 3;
        
        cout<<"The average of 3 testscores is: "<<average<<endl;
        cout<<"Do you wish to continue?\n";
        cin>>userInput;
    }while((userInput=='Y') || (userInput=='y'));
return 0;
}
