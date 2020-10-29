#include "Inventory.h"
#include <iostream>

using namespace std;

int main()
{
   int itemNumber;
   int quantity;
   double cost;

   Inventory product;

   cout<<"Please enter the Item Number.\n";
   cin >> itemNumber;

   product.setItemNumber(itemNumber);

   cout<<"Please enter the quantity.\n";
   cin >> quantity;

   product.setQuantity(quantity);

   cout<<"Please enter the cost.\n";
   cin >> cost;

   product.setCost(cost);

   cout<<"The total cost is: "<<product.getTotalCost()<<endl;


    return 0;
}