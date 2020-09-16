#include <iostream>

using namespace std;

int main(){
double totalAmountPaidByBuyingStocksBeforeBrokerFee; 
double totalAmountPaidByBuyingStocksWithBrokerFee;
double totalAmountReceivedBySellingStocksBeforeBrokerFee;
double totalAmountReceivedBySellingStocksWithBrokerFee;
double checkProfitOrLoss;

cout<<"Joe Purchased some stock in Acme Software, Inc."<<endl;

//Details for buying the stocks.
cout<<"The number of shares that Joe purchased was 1000."<<endl;
cout<<"Amount paid by Joe purchasing per share $32.91"<<endl;
totalAmountPaidByBuyingStocksBeforeBrokerFee = 1000 * 32.91;
cout<<"Total amount paid by Joe for buying Stocks are: "<<totalAmountPaidByBuyingStocksBeforeBrokerFee<<endl;

cout<<"\nJoe also paid his stock broker a commission that amounted to 2% of the amount he paid for the stock."<<endl;
totalAmountPaidByBuyingStocksWithBrokerFee = totalAmountPaidByBuyingStocksBeforeBrokerFee + totalAmountPaidByBuyingStocksBeforeBrokerFee * 0.02;
cout<<"Total amount paid by Joe with broker fee for buying the Stocks: "<<totalAmountPaidByBuyingStocksWithBrokerFee<<endl;

//Details for selling the stocks.
cout<<"The number of shares that Joe sold was 1000."<<endl;
cout<<"Amount received by Joe purchasing per share $33.92"<<endl;
totalAmountReceivedBySellingStocksBeforeBrokerFee = 1000 * 33.92;
cout<<"Total amount received for buying Stocks by Joe are: "<<totalAmountReceivedBySellingStocksBeforeBrokerFee<<endl;

cout<<"\nJoe also paid his stock broker a another commission that amounted to 2% of the amount he paid for the stock."<<endl;
totalAmountReceivedBySellingStocksWithBrokerFee = totalAmountReceivedBySellingStocksBeforeBrokerFee - totalAmountReceivedBySellingStocksBeforeBrokerFee * 0.02;
cout<<"Total amount received by Joe with broker fee for selling the Stocks: "<<totalAmountReceivedBySellingStocksWithBrokerFee<<endl;

//Difference in amount for selling and buying stock.
checkProfitOrLoss = totalAmountReceivedBySellingStocksWithBrokerFee - totalAmountPaidByBuyingStocksWithBrokerFee;
cout<<"The Amount difference in purchasing stock and selling stock is: "<<checkProfitOrLoss<<endl;
cout<<"If the amount is negative its a loss otherwise its a profit. Looking at the Difference we could say that it is a: ";
if(checkProfitOrLoss>0){
    cout<<"LOSS";
}
else {
    cout<<"PROFIT";
}

return 0;

}                                                                                                                                                                                                                 