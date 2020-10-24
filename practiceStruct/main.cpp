#include <iostream>
using namespace std;


struct TempScale
{
    double fahrenheit;
    double centigrade;
};
struct Reading
{
    int windSpeed;
    double humidity;
    TempScale temprature;
};

void showReading(Reading rd);
void findReading(Reading &rd);
Reading getReading();
void recordReading(Reading* ptr);


int main()
{
    TempScale ts;
    Reading rd;

    rd.windSpeed = 37;
    rd.humidity = 32;
    ts.fahrenheit = 32;
    ts.centigrade = 0;
    showReading(rd);
    findReading(rd);
    rd = getReading();

    recordReading(&rd);
    
    return 0;
};

void showReading(Reading rd)
{
    cout<<rd.windSpeed<<" "<<rd.humidity<<" "<<rd.temprature.fahrenheit<<" "<<rd.temprature.centigrade<<endl;
}

//It should use a Reading structure variable
void findReading(Reading &rd)
{
    cout<<"Enter wind speed "<<endl;
    cin >> rd.windSpeed;
    cout<<"Enter humidity "<<endl;
    cin >> rd.humidity;
    cout<<"Enter farenheit "<<endl;
    cin >> rd.temprature.fahrenheit;
    cout<<"Enter centigrade "<<endl;
    cin >> rd.temprature.centigrade;
}

//return a structure
Reading getReading()
{   
    Reading gr;
    cout<<"Enter wind speed "<<endl;
    cin >> gr.windSpeed;
    cout<<"Enter humidity "<<endl;
    cin >> gr.humidity;
    cout<<"Enter farenheit "<<endl;
    cin >> gr.temprature.fahrenheit;
    cout<<"Enter centigrade "<<endl;
    cin >> gr.temprature.centigrade;
    return gr;
}

//using Reading structure pointer variable as its parameter.
void recordReading(Reading* ptr)
{
    cout<<"Enter wind speed "<<endl;
    cin >> ptr->windSpeed;
    cout<<"Enter humidity "<<endl;
    cin >> ptr->humidity;
    cout<<"Enter farenheit "<<endl;
    cin >> ptr->temprature.fahrenheit;
    cout<<"Enter centigrade "<<endl;
    cin >> ptr->temprature.centigrade;
}