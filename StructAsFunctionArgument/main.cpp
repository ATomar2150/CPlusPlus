#include <iostream>
#include <string>

using namespace std;

struct InventoryItem
{
    int partNum;
    string description;
    int onHand;
    double price;
};

void getItem(InventoryItem &p);
void showItem(InventoryItem p);

int main()
{
    InventoryItem part;

    getItem(part);
    showItem(part);

    return 0;
}

void getItem(InventoryItem &p)
{
    cout<<"Enter the part number."<<endl;
    cin >> p.partNum;

    cout<<"Enter the product description: "<<endl;
    cin.ignore();
    getline(cin, p.description);

    cout<<"Enter the quantity on hand: "<<endl;
    cin >> p.onHand;

    cout<<"Enter the price: "<<endl;
    cin>> p.price;

}

void showItem(InventoryItem p)
{
    cout<<"Part Number: "<<p.partNum<<endl;
    cout<<"Description: "<<p.description<<endl;
    cout<<"Units On Hand: "<<p.onHand<<endl;
    cout<<"Price: $"<<p.price<<endl;
}