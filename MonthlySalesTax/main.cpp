//Monthly Sales Tax

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
string month;
string year; 
double totalSales;
double sales;
double countrySalesTax; 
double stateSalesTax;
double totalSalesTax;

cout<<"Monthly Sales Tax Report Listing."<<endl;
cout<<"Please enter the Year."<< endl;
cin>> year;

cout<<"Please enter the Month."<< endl;
cin>> month;

cout<<"Please enter the Total Sales of the Month."<< endl;
cin>> totalSales;

// sales is the product sales and totalSales is the total income (product sales plus sales tax.)
sales = totalSales/1.06;
countrySalesTax = sales * .02;
stateSalesTax = sales * .04;
totalSalesTax = sales * .06;

cout<<"\nMonth: "<< month << endl;
cout<<"---------------------"<< endl;
cout<<setprecision(2)<<fixed;
cout<<"Total Collected:"<<setw(20)<<totalSales<<endl;
cout<<"Sales:"<<setw(30)<<sales<<endl;
cout<<"Country Sales Tax:"<<setw(18)<<countrySalesTax<<endl;
cout<<"State Sales Tax:"<<setw(20)<<stateSalesTax<<endl;
cout<<"Total Sales Tax:"<<setw(20)<<totalSalesTax<<endl;

return 0;
}



