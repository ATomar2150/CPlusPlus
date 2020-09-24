#include <iostream>
using namespace std;

//Function prototype
void displayMessage();

//Function prototype and in this we are sending data into the function, only data type is required that is int but we put variable name for our convinence.
void displayValue(int num);

//Function prototype for multiple parameters
void multipleParameters(int val1, int val2, int val3);

int main(){
    int value1, value2, value3;
    cout<<"Please print the following message.\n";
    for( int i=0; i<5; i++ ){
        displayMessage();
    }
    //Passing the argument 5, if the varaible name is listed then it is called as passing the variable as argument. No data type is required in function call.
    displayValue(5);

    cout <<"For Multiple Variable function enter the values. \n";
    cout<< "Value 1: ";
    cin>>value1;
    cout<< " Value 2: ";
    cin>>value2;
    cout<< " Value 3: ";
    cin>>value3;

    //call the function
    multipleParameters(value1, value2, value3);
    cout<<"I am back in Main function again.\n";
    return 0;
}


//Defination of function.
void displayMessage(){
    cout<< "I am executing from from function call.\n";
}

//Here parameter num is passed.
void displayValue(int num){
    cout<<"The value is for displayValue function is: "<< num <<endl;
}

void multipleParameters(int val1, int val2, int val3){
    cout<< "Values are: "<<val1<<" "<<val2<<" "<<val3<<endl;
}
