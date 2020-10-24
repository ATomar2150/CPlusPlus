#include <iostream>
#include <string>

using namespace std;

struct Product
{
    string description;
    int partNum;
    double cost;
};

struct Measurement
{
    int miles;
    long meters;
};

struct Destination
{
    string city;
    Measurement distance;
};


int main()
{
    const int SIZE = 100;
    Product array[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        array[i].description = " ";
        array[i].cost = 0.0;
        array[i].partNum = 0;
    }

    cout << "Enter the description. \n";
    getline(cin, array[0].description);

    cout << "Enter the part number. \n";
    cin >> array[0].partNum;
    
    cout << "Enter the cost. "<<endl;
    cin >> array[0].cost;

    cout<<"The array elements are: "<<endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout<<array[i].description<<' ';
        cout<<array[i].cost<<' ';
        cout<<array[i].partNum<<' ';
    }

    Destination india;
    cout<<"Storing the data in city: "<<endl;
    cin.ignore();
    getline(cin, india.city);

    cout<<"Storing the data in miles: "<<endl;
    cin >> india.distance.miles;

    cout<<"Storing the data in meters: "<<endl;
    cin >> india.distance.meters;

    return 0;
}