#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vect;
    
    //Define an iterator object.
    vector<int>::iterator iter;

    //Use push_back to push values in iterator.
    for(int count = 0; count < 10; count++)
    {
        vect.push_back(count);
    }
    cout<<"Values in vector are:\n";
    //It is used to display the vector contents.
    for(iter = vect.begin(); iter < vect.end(); iter++)
    {
        cout<< *iter << " ";
    }

    cout<<"\nPopping out values from vector:\n";
    for(iter = vect.end()-1; iter >= vect.begin(); iter--)
    {
        cout<<*iter<<" ";
    }

    return 0;
}
