#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    
    ifstream inputFile;
    int value1, value2, value3, sum;
    inputFile.open("numbers.txt");

    inputFile >> value1;
    inputFile >> value2;
    inputFile >> value3;
    
    inputFile.close();

    sum = value1 + value2 + value3;
    cout<<"Three values are: "<<value1<<" "<<value2<<" "<<value3<<endl;
    cout<<"Total sum is: "<< sum << endl;
    return 0;
}