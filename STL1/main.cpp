#include <iostream>
using namespace std;
#include <vector>

using namespace std;

int main()
{
    int count;

    vector<int> vect;
    
    //vect.size() number of elements.
    cout<<"vector starts with "<< vect.size() <<" elements.\n";

    //use push_back to push values into the vector
    for(int count = 0; count < 10; count++)
    {
        vect.push_back(count);
    }

    cout<<"Now the new vector size is: "<<vect.size()<<endl;

    //Displaying eah element.
    for(int count = 0; count < 10; count++)
    {
        cout<<vect[count]<<" ";
    }

    cout<<"\nPopping the values out of vector...\n";
    for(int count = 0; count < 10; count++)
    {
        vect.pop_back();
    }

    cout<<"Now vector has "<<vect.size() <<" elements.\n";

    return 0;
}