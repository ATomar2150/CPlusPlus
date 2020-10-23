#include <iostream>
using namespace std;

int* frequentCharacter(char* array, int* ptr);
int findLength(char* ptr);
int higestIndex(int* ptr1, int);

int main()
{
    const int SIZE = 20;
    char array[SIZE];
    int ptr[SIZE];
    cout<<"Enter the sentence: "<<endl;
    cin.getline(array, SIZE);

    cout<<"The letter which appears the most: \n";
    int* ptr1 = frequentCharacter(array, ptr);

    int i = 0;
    int S = findLength(array);
    cout<<"The length of array is: "<<S<<endl;
    int index = higestIndex(ptr1, S);
    cout<< "The Most Frequent Repeated character is: "<<array[index]<<endl;
    return 0;
}

int* frequentCharacter(char* array, int* ptr)
{
    int i = 0;
    int j = 0;
    int total = 1;
    
    while(array[i] != '\0')
    {
        j = i+1;
        while(array[j] != '\0')
        {
            if(array[i] == array[j])
            {
                total = total + 1;
            }
            j++;
        }

        ptr[i] = total;
        total = 1;
        i++;
    }

    return ptr;
}

int findLength(char* ptr)
{
    int i = 0;
    while(ptr[i] != '\0')
    {
        i++;
    }
    return i;

}

int higestIndex(int* ptr1, int S) //3416
{
    int highest;
    int index;
    highest = 0; //highest = 3
    for( int i = 0; i < S; i++ )
    {
        if(ptr1[i] > highest) //4>3
        {
            highest = ptr1[i]; //highest = 4
        }
    }
    cout<<"Highest Frequency of Occurance is: "<<highest<< endl;
    for(int i = 0; i < S; i++)
    {
        if(ptr1[i] == highest)
        {
            index = i;
        }
    }
    return index;
}