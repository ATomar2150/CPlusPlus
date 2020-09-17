#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main ()
{
    
    ifstream inputFile;
    string name;
    inputFile.open("rupinder.txt");

    cout<<"Reading the data from the file.\n";

    //reading from the file.
    inputFile >> name;
    cout << name << endl;

    inputFile >> name;
    cout << name << endl;

    inputFile.close();
    return 0;
}