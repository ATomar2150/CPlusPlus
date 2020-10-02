#include <iostream>
using namespace std;


//if the global variable is declared outside the main function, and in any function its value is changed. It will affect the global variable.
int value = 12;
void changeValue(int);
void againChangeValue();

int main()
{
  cout<<"Call the function but first print the value in function main. "<<value<<endl;

  //Now we are passing by value, and passing the value in parameter form. It does not effect the original argument only the copy of argument is passed.
  changeValue(value);
  cout<<"Check the value second time & print the value in function main. "<<value<<endl;
  againChangeValue();
  // here the value is not passed by reference. So, it will make change in original argument.
  cout<<"After calling the change value function when we are back in main function, the value is: "<<value<<endl;
  return 0;
  
}

void changeValue(int num)
{
  //parameter num is passed into changeValue.
    num = 14;
    cout<<"Inside the change value function, the new value is: "<<num<<endl;
}

void againChangeValue()
{
  //No parameter is passed, value is permanently changed of original argument.
    value = 20;
    cout<<"Inside the change value function, the new value is: "<<value<<endl;
}