#include <iostream>
#include<iomanip>
#include <vector>

using namespace std;

void idFunc(vector<int> &, vector<int> &, vector<double> &);
void calSales(vector<double> &sales, vector<int> id, vector<int> units, vector<double> price);
void displaySales(vector<double> sales, vector<int> units);
void printVector(vector<double> v);
void printVector(vector<int> v);

const int SIZE = 9;

int main()
{
    vector<int> id;
    vector<int> units;
    vector<double> price;
    vector<double> sales;

    idFunc(id, units, price);
    calSales(sales, id, units, price);
    displaySales(sales, units);

    return 0;
}

void idFunc(vector<int> &id, vector<int> &units, vector<double> &price)
{
    for(int i = 914; i <= 922; i++)
    {
        id.push_back(i);
    }

    units.push_back(842);
    units.push_back(416);
    units.push_back(127);
    units.push_back(514);
    units.push_back(437);
    units.push_back(269);
    units.push_back(97);
    units.push_back(492);
    units.push_back(212);
    
    price.push_back(11.25);
    price.push_back(12.25);
    price.push_back(13.25);
    price.push_back(14.25);
    price.push_back(15.25);
    price.push_back(16.25);
    price.push_back(17.25);
    price.push_back(18.25);
    price.push_back(19.25);

}

void printVector(vector<int> v){
    cout<<"Printing vector now"<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        
        cout<<v[i]<<endl;
    }
    cout<<"Done with printing"<<endl;
}

void printVector(vector<double> v){
    cout<<"Printing vector now"<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        
        cout<<v[i]<<endl;
    }
    cout<<"Done with printing"<<endl;
}

void calSales(vector<double> &sales, vector<int> id, vector<int> units, vector<double> price)
{
    for(int i = 0; i < units.size(); i++)
    {
        
        sales.push_back(units[i] * price[i]);
    }
}

void displaySales(vector<double> sales, vector<int> units)
{
    cout<<"Product Number"<<"\t\t"<<"Product Price"<<endl;
    cout<<"===========================================\n";
    for(int i = 0; i < units.size(); i++)
    {
        cout<<units[i];
        cout<<setw(28)<<sales[i]<<endl;

    }
}