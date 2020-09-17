#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string name;
    ofstream outputFile;
    outputFile.open("aparnaWorld.txt");

    cout<<"What is your full name?\n";
    cin>>name;

    outputFile << name << endl;
    outputFile.close();
    return 0;

}