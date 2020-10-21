#include <iostream>
#include <string>
using namespace std;

void dollarFormat(string &currency);
int main()
{
    string input;

    cout<<"Enter the dollar amount in the form of NNNNN.NN: \n";
    cin >> input;

    dollarFormat(input);

    cout<<input<<endl;

    return 0;
}

void dollarFormat(string &currency)
{
    int dp;

    dp = currency.find('.');

    if(dp > 3)
    {
        for(int x = dp -3; x > 0; x -=3)
        {
            currency.insert(x, ",");
        }
    }
    currency.insert(0, "$");
}