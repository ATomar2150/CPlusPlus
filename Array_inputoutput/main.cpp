#include <iostream>
using namespace std;

int main()
{
    const int Array_Size = 6;
    int salary[Array_Size];

    cout << "Please enter the salary of the employees.\n";
    cin >> salary[0];
    cin >> salary[1];
    cin >> salary[2];
    cin >> salary[3];
    cin >> salary[4];
    cin >> salary[5];

    cout<< "Display the salaries of the employees.\n";
    cout<<salary[0]<<" "<<salary[1]<<" "<<salary[2]<<" "<<salary[3]<<" "<<salary[4]<<" "<<salary[5]<<" "<<endl;
    return 0;
}