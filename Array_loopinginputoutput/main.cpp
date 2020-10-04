#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    const int SIZE = 6;
    int hours[SIZE];
    int count;
    ofstream outputFile;
    ifstream inputFile;

    outputFile.open("hours.txt");
    //Inputting through each element
    for( count = 0; count < SIZE; count++)
    {
        cout<<"Please enter the value at index: "<<count<<endl;
        cin>>hours[count];
        
    }

    //Displaying the output
    for( count = 0; count < SIZE; count++)
    {
        outputFile << hours[count] <<endl;
    }
    outputFile.close();

    //for reading from file
    inputFile.open("hours.txt");

    int number;

    while(inputFile)
    {

        inputFile >> number;
        cout<<"The input is: "<<number<<endl;
    }
    inputFile.close();
    
    return 0;
}