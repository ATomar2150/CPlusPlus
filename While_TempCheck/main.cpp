#include <iostream>

using namespace std;

int main() {
    double temp;
    const int TIME_CHECK = 15;
     
    cout<< "Please Enter the substance's temperature: "<<endl;
    cin>> temp;
    
    if(temp > 102.5){
        cout<< "Temprature is too high. Please turn down the thermostat, wait 5 minutes amd check the temperature again."<<endl;
        cin>> temp;
    }
    cout<<"Temperature is in acceptable range which is less than or equal to 102.5 degrees celcius. Please check the temperature again in "<<TIME_CHECK<<" minutes."<<endl;
    return 0;

}