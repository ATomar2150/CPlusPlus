#include "Inventory.h"
#include <iostream>
using namespace std;

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0.0;
};
Inventory::Inventory(int ItemNumber,int Quantity,double Cost)
{
    itemNumber = ItemNumber;
    quantity = Quantity;
    cost = Cost;
};
void Inventory::setItemNumber(int ItemNumber)
{
    if(ItemNumber > 0)
    {
        itemNumber = ItemNumber;
    }
    else
    {
       cout<<"ERROR Please enter the positive number.\n";
    }
    
};
void Inventory::setQuantity(int Quantity)
{
    if(Quantity > 0)
    {
        quantity = Quantity;
    }
    else
    {
       cout<<"ERROR Please enter the positive number.\n";
    }
    
};
void Inventory::setCost(double Cost)
{
    if(Cost > 0)
    {
        cost = Cost;
    }
    else
    {
       cout<<"ERROR Please enter the positive number.\n";
    }
   
};

int Inventory::getItemNumber() const
{
    return itemNumber;
};
int Inventory::getQuantity() const
{
    return quantity;
};
double Inventory::getCost() const
{
    return cost;
};
double Inventory::getTotalCost()
{
    return quantity * cost;
};