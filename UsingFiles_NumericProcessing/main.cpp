#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int number;
    double average;
    inputFile.open("numbers.txt");
    int count = 0;
    double totalSum = 0;

    while(inputFile >> number){
        totalSum += number;
        count++;
    }

    cout << "The total sum of numbers is: "<< totalSum <<endl;
    cout << "Number if numbers are: "<< count << endl;

    average = totalSum / count ;
    cout << "Average is: "<< average << endl;
    inputFile.close();
    return 0;


}