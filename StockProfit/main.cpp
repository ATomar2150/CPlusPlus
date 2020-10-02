//Profit from the sale of stock can be calculated as follow: Profit = ((NS * SP) - SC) - ((NS * PP) + PC)
//NS is the number of shares, SP is the sale price per share, SC is the sales commission paid, PP purchase price per share and PC is the purchase commission paid.

#include <iostream>
using namespace std;

//function prototype.
void profitOrLoss();

int main()
{
 cout<< "This program calculate profit from the sale of stock.\n";
 cout<<"We are applying formula profit = ((numberOfShares * salesPrice) - salesCommissionPaid ) - ((numberOfShares * purchasePrice) + purchaseCommissionPaid)\n";
 cout<<"Please entry the necessary details.\n\n";

 profitOrLoss();
 return 0;
}


//function defination
void profitOrLoss()
{
    int numberOfShares;
    double purchasePrice, salesPrice, salesCommissionPaid, purchaseCommissionPaid, profit;
    cout<<"1. Please enter number of Shares NP\n";
    cin>> numberOfShares;
    cout<<"2. Please enter purchase price per share PP.\n";
    cin>> purchasePrice;
    cout<<"3. Please enter sales price per share SP.\n";
    cin>> salesPrice;
    cout<<"4. Please enter sales commision paid SC.\n";
    cin>> salesCommissionPaid;
    cout<<"5. Please enter purchase commision paid PC.\n";
    cin>> purchaseCommissionPaid;
    
    profit = (((numberOfShares * salesPrice) - salesCommissionPaid) - ((numberOfShares * purchasePrice) + purchaseCommissionPaid));

    if(profit<0){
        cout<<"As the sale of stock is a negative number: "<<profit<<endl;
        cout<<"It's a LOSS.\n";
    }
     else if(profit>0){
        cout<<"As the sale of stock is a positive number: "<<profit<<endl;
        cout<<"It's a PROFIT.\n";  
    }
    else if(profit==0) {
        cout<<"AT PAR NO PROFIT NO LOSS. "<<profit<<endl;
   
    }
    else
    {
        cout<<"error\n";
    }

}

