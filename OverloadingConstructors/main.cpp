#include <iostream>
#include "InventoryItem.h"

using namespace std;

int main()
{
    //Creating an InventoryItem object and call the default constructor.
    InventoryItem item1;
    item1.setDescription("Hello");
    item1.setCost(10.10);
    item1.setUnits(5);

    //Create an InventoryItem object and call constructor #2.
    InventoryItem item2("Ken");

    //Create an InventoryItem object and call constructor #3
    InventoryItem item3("Chris", 100.0, 11);

    cout<<"Description: "<<item1.getDescription()<<endl;
    cout<<"Cost: "<<item1.getCost()<<endl;
    cout<<"Units on Hand: "<<item1.getUnits()<<endl;

    cout<<"Description: "<<item2.getDescription()<<endl;
    cout<<"Cost: "<<item2.getCost()<<endl;
    cout<<"Units on Hand: "<<item2.getUnits()<<endl;

    cout<<"Description: "<<item3.getDescription()<<endl;
    cout<<"Cost: "<<item3.getCost()<<endl;
    cout<<"Units on Hand: "<<item3.getUnits()<<endl;

    return 0;
};