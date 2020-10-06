#include <iostream>
#include <vector>
using namespace std;

void showValues(vector<int> vect);

int main()
{
    vector<int> values;

    for(int i = 0; i < 5; i++)
    {
        values.push_back(i*2);
    }
    showValues(values);


    values.pop_back();
    cout<<"We are going to delete the last value by using pop function.\n";
    cout<<"==============================================================="<<endl;
    showValues(values);
    cout<<"We are going to clear all th values by using clear function.\n";
    cout<<"==============================================================="<<endl;
    values.clear();
    showValues(values);
    cout<<"Values are cleared off\n";
    return 0;
    
}
void showValues(vector<int> vect)
{
    //checking if values is an empty array or not.
    if(vect.empty())
    {
        cout<<"No value\n";
    }
    else
    {
    for(int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<endl;
    }
    }
    
}