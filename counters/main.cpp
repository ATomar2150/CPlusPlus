//display the list of numbers and their squares.

#include <iostream>
using namespace std;

int main(){
    double number;
    double square;
    int maxNumber;
    int minNumber;

    cout<< "Please Enter the Minimum Number."<<endl;
    cin>> minNumber;
    cout<< "Please Enter the Maximum Number."<<endl;
    cin>> maxNumber;
    cout<< "Number\t\t\tNumber Squared\n";
    cout<<"-------------------------------------------"<<endl;
    while(minNumber<=maxNumber){
        square = minNumber*minNumber;
        cout<<minNumber<<"\t\t\t"<<square<<endl;
        minNumber++;
    }
    return 0;
}