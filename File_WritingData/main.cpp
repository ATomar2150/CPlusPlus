//Writing Data to file.

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ofstream outputFile;
    outputFile.open("customer.txt");

    outputFile<< "Blast\n";
    outputFile<< "Wille\n";
    outputFile<< "Wonka\n";

    outputFile.close();
    cout<< "Done\n";
    return 0;
}

