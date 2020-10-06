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
    return 0;
    
}
void showValues(vector<int> vect)
{
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i]<<endl;
    }
}