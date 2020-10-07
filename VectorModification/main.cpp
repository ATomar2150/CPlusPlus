#include <iostream>
#include <vector>
using namespace std;

bool checkPIN(vector<int>, vector<int>);

int main()
{
   
    vector<int> PIN1;
    PIN1.push_back(2);
    PIN1.push_back(5);
    PIN1.push_back(6);
    PIN1.push_back(7);

    vector<int> PIN2;
    PIN2.push_back(7);
    PIN2.push_back(8);
    PIN2.push_back(9);
    PIN2.push_back(0);

    if(checkPIN(PIN1, PIN2))
    {
        cout<<"PINS MATCHED\n";
    }else
    {
         cout<<"PINS NOT MATCHED\n";
    };
    
    if(checkPIN(PIN1, PIN1))
    {
         cout<<"PINS MATCHED\n";
    }else
    {
         cout<<"PINS NOT MATCHED\n";
    };
    return 0;

}
bool checkPIN(vector<int> PIN1, vector<int> PIN2)
{   
    for( int i = 0; i < PIN1.size(); i++ )
    {
         if(PIN1[i] != PIN2[i])
         {
             return false;
         }       
    }
    return true;  
}