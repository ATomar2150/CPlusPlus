#include <iostream>
using namespace std;

const int row = 3;
const int col =2;
int total = 0;

void showArray(const int arr[][col], int row);
int summing(const int arr[][col], int row);

int main()
{ 
    int array1[row][col] = {{1,2},{3,4},{5,2}};
    int array2[row][col] = {{4,5},{5,6},{8,7}};

    cout<<"The contents of table 1 are: "<<endl;
    showArray(array1, row);

    summing(array1, row);
    cout<<"The total of array 1 is: "<<total<<endl;

    cout<<"\nThe contents of table 2 are: "<<endl;
    showArray(array2, row);

    summing(array2, row);
    cout<<"The total of array 2 is: "<<total<<endl;
    return 0;
}

void showArray(const int arr[][col], int row)
{
    for(int i = 0; i < row; i++){
        for( int k = 0; k < col; k++){
            cout<<"["<<arr[i][k]<<"]";
        }
        cout<<endl;
    }
}

int summing(const int arr[][col], int row)
{
    
     for(int i = 0; i < row; i++)
     {
        for( int k = 0; k < col; k++)
        {
            total += arr[i][k];
        }
    }
    return total;
}