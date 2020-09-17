#include <iostream>
using namespace std;
int main(){
    double sales;
    int days;
    double totalSales = 0.0;
    
    cout<< "How many days you want the accumulated total of? "<< endl;
    cin>> days;

    for( int i = 1; i <= days; i++ ){
        cout << "Enter the companies sale for Day:"<< i <<endl;
        cin >> sales;
        totalSales += sales;
    }
    cout<<"Total Sales would be: $s"<< totalSales  <<endl;
    return 0;
}