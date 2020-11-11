#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Function prototype
void doubleValue(int &);

int main()
{
    vector<int> numbers;

    vector<int>::iterator iter;

    for(int x = 0; x < 10; x++)
    {
        numbers.push_back(x);
    }

    cout<<"Displays the numbers in the vector: \n";
    for(iter = numbers.begin(); iter != numbers.end(); iter++)
    {
        cout<<*iter<<" ";
    }

    for_each(numbers.begin(), numbers.end(), doubleValue);
    cout<<endl;

    //Double the number for each vector
    for(iter = numbers.begin(); iter != numbers.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    return 0;

}

void doubleValue(int &val)
{
    val = val * 2;
}

