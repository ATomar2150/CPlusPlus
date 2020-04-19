#include<iostream>
using namespace std;

int main(){
    char letter;
    int var;
    cout<<"Letter entered by user: "<<endl;
    cin>>letter;
    cout<<"ASCII value of letter is: "<<endl;
    var=static_cast<int>(letter);
    cout<<var;
    return 0;
}