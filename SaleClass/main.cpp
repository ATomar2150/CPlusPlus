#include <iostream>
#include "sale.h"

using namespace std;

int main()
{
    const double TAX_RATE = 0.06;
    double cost;

    cout<<"Enter the cost of the item: ";
    cin >> cost;

    //Create a Sale object for this transaction with variable itemSale
    Sale itemSale(cost, TAX_RATE);

    cout<<"The amount of sales tax is $"<<itemSale.getTax()<<endl;
    cout<<"The total of the sale is $"<<itemSale.getTotal()<<endl;
    
    return 0;
}