//program reads data from file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    ifstream inputFile;

    double sales;
    int days;
    outputFile.open("FilesLoop\\Loop.txt");

    cout <<"Ask user for how many days you want to report the sales?\n";
    cin >> days;

    for ( int i = 1; i <= days; i++ ){
        cout << "The sales for "<<i<<" : "<<endl;
        cin >> sales;
        //write the sales to the file.
        outputFile << sales <<endl;
    }

    outputFile.close();
    cout << "Data is succesfully written to the File.\n";

    //READING.
    inputFile.open("FilesLoop\\Loop.txt");

    if(inputFile){

    //reading the data from already created file.
    while(inputFile >> sales)
    {
        cout <<"We are reading the values "<< sales <<endl;
    }
    inputFile.close();
    }
    else{
        cout<<"ERROR"<<endl;
    }
    return 0;


}
