#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;

    vector<int> vect;

    vector<int>::iterator iter;

    //Inserting elements
    for(count = 0; count < 10; count++)
    {
        vect.push_back(count);

    }

    //Calculating size
    cout<<"\nThe vector has element size of: "<<vect.size()<<endl;

    //Displaying elements
    for(count = 0; count < 10; count++)
    {
        cout<<vect[count]<<" ";
    }

    cout<<endl;
    cout<<"AFTER SHUFFLING: ";
    //Shuffling
    random_shuffle(vect.begin(), vect.end());

    //Displaying elements
    for(count = 0; count < 10; count++)
    {
        cout<<vect[count]<<" ";
    }
    cout<<endl;

    //Sorting
    sort(vect.begin(), vect.end());

    cout<<"The elements have been sorted:\n";

    //Displaying elements
    for(count = 0; count < 10; count++)
    {
        cout<<vect[count]<<" ";
    }
    cout<<endl;

    if(binary_search(vect.begin(), vect.end(), 7))
    {
        cout<<"The value 7 has been found in the vector.\n";
    }
    else
    {
        cout<<"The value 7 was not fount in the vector.\n";
    }

    //iterating through iterator
    for(iter = vect.begin(); iter < vect.end(); iter++)
    {
        cout<<*iter<<" ";
    }

    //Count algorithm

    cout<<"\nNumber of 3s in the series: ";
    cout<< std::count(vect.begin(), vect.end(), 3);

    //Max value
    iter = max_element(vect.begin(), vect.end());
    cout<<"Maximum value is: "<<*iter<<endl;

    //Min value
    iter = min_element(vect.begin(), vect.end());
    cout<<"Minimum value is: "<<*iter<<endl;

    //find value
    //Max value
    iter = find(vect.begin(), vect.end(), 8);
    cout<<"We have found the value: "<<*iter<<endl;
    return 0;

}
