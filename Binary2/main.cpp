#include <iostream>
using namespace std;

const int SIZE = 9;

int findProduct(int [], int, int);
void getProductDescription(int);

int main()
{
    int productID;
    int result;
    int productNumber[SIZE] = {914, 915, 916, 917, 918, 919, 920, 921, 922};
    cout << "We are creating a program for order entry operaters to look for product details\n";
   
    do
    {
        cout << "Please enter the product ID for which you are looking the details.\n"; 
        cin >> productID;
        result = findProduct(productNumber, SIZE, productID);   
    }while(result == -1);
    
    cout<<"Product Number found is: "<<result<<".\nThe details of product are below: "<<endl<<endl;
    getProductDescription(result);

    return 0;
}

int findProduct(int productNumber [], int SIZE, int productID)
{
    int low = 0;
    int high = SIZE - 1;
    int position = -1;

    while ( low <= high ){
        int middle = (low + high) / 2;

        if( productNumber[middle] == productID )
        {
            position = productNumber[middle];
            break;
        }
        else if ( productNumber[middle] > productID )
        {
            high = middle - 1;
        }
        else if ( productNumber[middle] < productID )
        {
            low = middle + 1;
        }
    }

    return position;

}

void getProductDescription(int result){


    switch(result){
        case 914:
            cout<<"Product Title: ";
            cout<<"Six Steps to Leadership\n";
            cout<<"Product Description: BOOK\n";
            cout<<"UNIT PRICE: $12.95\n";
            break;
        case 915:
            cout<<"Product Title: ";
            cout<<"Six Steps to Leadership\n";
            cout<<"The product Description is: AUDIO CD\n";
            cout<<"The UNIT PRICE is : $14.95\n";
            break;
        case 916:
            cout<<"Product Title: ";
            cout<<"The road to Excellence\n";
            cout<<"Product Description: DVD\n";
            cout<<"UNIT PRICE: $18.95\n";
            break;
        case 917:
            cout<<"Product Title: ";
            cout<<"Seven Lessons of Quality\n";
            cout<<"Product Description: BOOK\n";
            cout<<"UNIT PRICE: $16.95\n";
            break;
        case 918:
            cout<<"Product Title: ";
            cout<<"Seven Lessons of Quality\n";
            cout<<"Product Description: AUDIO CD\n";
            cout<<"UNIT PRICE: $21.95\n";
            break;
        case 919:
            cout<<"Product Title: ";
            cout<<"Seven Lessons of Quality\n";
            cout<<"Product Description: DVD\n";
            cout<<"UNIT PRICE: $31.95\n";
            break;
        case 920:
            cout<<"Product Title: ";
            cout<<"Teams are Made, Not Born\n";
            cout<<"Product Description: BOOK\n";
            cout<<"UNIT PRICE: $14.95\n";
            break;
        case 921:
            cout<<"Product Title: ";
            cout<<"Leadership for the future\n";
            cout<<"Product Description: BOOK\n";
            cout<<"UNIT PRICE: $14.95\n";
            break;
        case 922:
            cout<<"Product Title: ";
            cout<<"Leadership for the future\n";
            cout<<"Product Description: AUDIO CD\n";
            cout<<"UNIT PRICE: $16.95\n";
            break;
    }

}