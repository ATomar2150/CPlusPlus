#include <iostream>
using namespace std;

void sortUnitSold(int [], int);
void calcPrice(int [], double [], double [], int);
void showCalculations(int [], double []);

const int SIZE = 9;

int main()
{
    int unitsSold[SIZE] = {842, 416, 127, 514, 437, 269, 97, 492, 212};
    int productNumber[SIZE] = {914, 915, 916, 917, 918, 919, 920, 921, 922};
    double price[SIZE] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};
    double sales[SIZE];

    sortUnitSold(unitsSold, SIZE);
    
    calcPrice(unitsSold, price, sales, SIZE);

    showCalculations(productNumber, sales);
    
    return 0;
}

void calcPrice( int unitsSold [], double price [], double sales [], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
         sales[i] = unitsSold[i] * price[i];
    }
}

void sortUnitSold(int unitsSold [], int SIZE)
{   int key;
    int temp;
    for( int i = 0; i < SIZE - 1; i++ )
    {
        key = i;
        for( int j = i + 1; j < SIZE; j++ )
        {
            if(unitsSold[key] > unitsSold[j] )
            {
                key = j;
            }
        }
        temp = unitsSold[i];
        unitsSold[i] = unitsSold[key];
        unitsSold[key] = temp;
    }
}

void showCalculations(int productNumber[], double sales [])
{

    double totalSale = 0.0;
    cout<<"Product Number"<<"     "<<"Sales"<<endl;
    for (int i = 0; i < SIZE; i++)
    {   
        cout<<productNumber[i]<<"                "<<sales[i]<<endl;
        totalSale += sales[i];
    }
    cout<<"TOTAL SALE: "<<totalSale<<endl;
}