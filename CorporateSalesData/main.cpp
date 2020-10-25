#include <iostream>
using namespace std;

struct Division
{
    int First_Quarter_Sales;
    int Second_Quarter_Sales;
    int Third_Quarter_Sales;
    int Fourth_Quarter_Sales;
    int Annual_Sales;
    double Average_Quaterly_Sales;

};

int main()
{
    Division East;
    Division West;
    Division North;
    Division South;

    cout<<"FOUR QUARTER SALES"<<endl;
    do {
            cout<<"Enter the DATA for EAST division's";
            cin>> East.First_Quarter_Sales;
    } while(East.First_Quarter_Sales < 0);
    
    cin>> East.Second_Quarter_Sales;
    cin>> East.Third_Quarter_Sales;
    cin>> East.Fourth_Quarter_Sales;
    double total = East.First_Quarter_Sales + East.Second_Quarter_Sales + East.Third_Quarter_Sales + East.Fourth_Quarter_Sales;
    double average = total / 4.0;
    cout<<"The total is "<<total<<" and the average is: "<<average<<endl<<endl;

    cout<<"Enter the DATA for WEST division"<<endl;
    cin>> West.First_Quarter_Sales;
    cin>> West.Second_Quarter_Sales;
    cin>> West.Third_Quarter_Sales;
    cin>> West.Fourth_Quarter_Sales;
    double total1 = West.First_Quarter_Sales + West.Second_Quarter_Sales + West.Third_Quarter_Sales + West.Fourth_Quarter_Sales;
    double average1 = total1 / 4.0;
    cout<<"The total is "<<total1<<" and the average is: "<<average1<<endl<<endl;

    cout<<"Enter the DATA for NORTH division"<<endl;
    cin>> North.First_Quarter_Sales;
    cin>> North.Second_Quarter_Sales;
    cin>> North.Third_Quarter_Sales;
    cin>> North.Fourth_Quarter_Sales;
    double total2 = North.First_Quarter_Sales + North.Second_Quarter_Sales + North.Third_Quarter_Sales + North.Fourth_Quarter_Sales;
    double average2 = total2 / 4.0;
    cout<<"The total is "<<total2<<" and the average is: "<<average2<<endl<<endl;

    cout<<"Enter the DATA for SOUTH division"<<endl;
    cin>> South.First_Quarter_Sales;
    cin>> South.Second_Quarter_Sales;
    cin>> South.Third_Quarter_Sales;
    cin>> South.Fourth_Quarter_Sales;
    double total3 = South.First_Quarter_Sales + South.Second_Quarter_Sales + South.Third_Quarter_Sales + South.Fourth_Quarter_Sales;
    double average3 = total3 / 4.0;
    cout<<"The total is "<<total3<<" and the average is: "<<average3<<endl<<endl;

    return 0;
}