#include <iostream>
#include <fstream>
using namespace std;

//when user does not know how many elements needs to enter and what should be the size of array.

int main()
{
    const int SIZE = 100;
    int array[SIZE];
    int count = 0;
    int number;
    ofstream outputFile;
    
    outputFile.open("roots.txt");
    cout<<"Please enter the number. Press -1 to quit.\n";
    cin >> number;
        while(count<SIZE && number != -1)
        {
            array[count]=number;
            cout<<"Please enter the number or Press -1 to quit.\n";
            cin >> number;
            count++;
        }

    for( int i = 0; i < count; i++){
        cout<<"The values are: "<<array[i]<<endl;
        outputFile << array[i]<<endl;       
    }
    outputFile.close();
   
    return 0;
}