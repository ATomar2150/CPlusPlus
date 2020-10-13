#include <iostream>
#include<vector>

using namespace std;
void selectionSort(vector<long> &);
bool checkNum(vector<long> &, long );
void printVector(vector<long> &number);

int main()
{
    vector<long> number;
    long key;
    number.push_back(5658845);
    number.push_back(8080152);
    number.push_back(1005231);
    number.push_back(4520125);
    number.push_back(5552012);
    number.push_back(4562555);
    number.push_back(6545231);
    number.push_back(7895122);
    number.push_back(7881200);
    number.push_back(3852085);
    number.push_back(8777541);
    number.push_back(5050552);
    number.push_back(7576651);
    number.push_back(8451277);
    number.push_back(7825877);
    number.push_back(1302850);
    number.push_back(4581002);
    number.push_back(1250255);
   

    cout<< "Please enter the number you want to check.\n";
    cin>> key;

    selectionSort(number);

    printVector(number);

    bool result = checkNum(number, key);

    if(result==true)
    {
        cout<<"Number is valid";
    }
    else
    {
        cout<<"Number is not valid.";
    }
    
    return 0;

}

void selectionSort(vector<long> &number)
{
    int key;
    int temp;
    for(int i = 0; i < number.size()-1; i++)
    {
        key = i;
        for(int j = i + 1; j < number.size(); j++){
           if(number[key] > number[j])
           {
               key = j;
           }
        }
        temp = number[i];
        number[i] = number[key];
        number [key] = temp;
    }
}

void printVector(vector<long> &number){
    for(int i = 0; i < number.size(); i++)
    {
        cout<<number[i]<<endl;
    }
}

bool checkNum(vector<long> &number, long key)
{
    
    for( long i = 0; i < number.size(); i++)
    {
        if(number[i] == key)
        {
            return true;
        }
        
    }
}