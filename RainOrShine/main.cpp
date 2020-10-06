#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int row = 3;
const int col = 30;
string months[row] = {"June","July","August"};

void showWeather(char [][col],int, string []);
void weatherType(char [][col],int, string months[]);
void largestRainyMonth(char [][col],int, string months[]);

string weather_types[row] = {"Rainy", "Cloudy","Sunny"};

char weather_day_name[row] = {'R','C','S'};

int main()
{
    char weather[row][col];
    showWeather(weather,row,months);
    weatherType(weather,row,months);
    largestRainyMonth(weather,row,months);
    return 0;
}

void showWeather(char weather[][col],int row, string months[]) 
{
    ifstream inputFile;
    inputFile.open("RainOrShine.dat");
    if(inputFile)
    {
        for(int r = 0; r < row; r++)
        {
             cout<<"====================================================================================="<<endl;
            for(int c = 0; c < col; c++)
            {
                inputFile >> weather[r][c];
                cout<<"Data for MONTH "<<months[r]<<" on DAY "<<(c+1)<<" : "<<weather[r][c]<<endl;

            }
            cout<<"======================================================================================"<<endl;
        }
    }
    inputFile.close();
}

void weatherType(char weather[][col],int row, string months[])
{
    int totalRainy = 0;
    int totalSunny = 0;
    int totalCloudy = 0;
    ifstream inputFile;
    inputFile.open("RainOrShine.dat");
    if(inputFile)
    {
        for(int r = 0; r < row; r++)
        {
            
            for(int c = 0; c < col; c++)
            {
                inputFile >> weather[r][c];
                switch(weather[r][c])
                {
                    case 'R':
                    case 'r':
                        totalRainy += 1;
                        break;
                    case 'S':
                    case 's':
                        totalSunny += 1;
                        break;
                    case 'C':
                    case 'c':
                        totalCloudy += 1;
                        break;

                }

            }
        }
        cout<<"Number of RAINY DAYS are: "<<totalRainy<<endl;
        cout<<"Number of SUNNY DAYS are: "<<totalSunny<<endl;
        cout<<"Number of CLOUDY DAYS are: "<<totalCloudy<<endl;
        cout<<"======================================================================================"<<endl;
    }
    inputFile.close();
}

void largestRainyMonth(char weather[][col],int row, string months[]) 
{
    ifstream inputFile;
    int totalRainyMonth = 0;
    int totalRainyMonthForJune;
    int totalRainyMonthForJuly;
    int totalRainyMonthForAugust;
    
    inputFile.open("RainOrShine.dat");
    if(inputFile)
    {
        for(int r = 0; r < 1; r++)
        {
            for(int c = 0; c < col; c++)
            {
                inputFile >> weather[r][c];
                switch(weather[r][c])
                {
                    case 'R':
                    case 'r':
                        totalRainyMonth += 1;
                        break;
                }
                
            }
            cout<<"The rainy days for month "<<months[r]<<" is: "<<totalRainyMonth<<endl;
            totalRainyMonthForJune = totalRainyMonth;
            cout<<"======================================================================================"<<endl;
            
        }
        totalRainyMonth = 0;
        for(int r = 1; r < 2; r++)
        {
            for(int c = 0; c < col; c++)
            {
                inputFile >> weather[r][c];
                switch(weather[r][c])
                {
                    case 'R':
                    case 'r':
                        totalRainyMonth += 1;
                        break;
                }
                
            }
            cout<<"The rainy days for month "<<months[r]<<" is: "<<totalRainyMonth<<endl;
            totalRainyMonthForJuly = totalRainyMonth;
            cout<<"======================================================================================"<<endl;
            
        }
        totalRainyMonth = 0;
        for(int r = 2; r < 3; r++)
        {
            for(int c = 0; c < col; c++)
            {
                inputFile >> weather[r][c];
                switch(weather[r][c])
                {
                    case 'R':
                    case 'r':
                        totalRainyMonth += 1;
                        break;
                }
                
            }
            cout<<"The rainy days for month "<<months[r]<<" is: "<<totalRainyMonth<<endl;
            totalRainyMonthForAugust = totalRainyMonth;
            cout<<"======================================================================================"<<endl;
            
        }
        totalRainyMonth = 0;
        //calculating the highest rainy month.
        int highest = totalRainyMonthForJune;

        if(highest < totalRainyMonthForJuly)
        {
            highest = totalRainyMonthForJuly;
            cout<<"HIGHEST RAINY MONTH is July DAYS: "<<highest<<endl;
        }
        else if(highest < totalRainyMonthForAugust)
        {
            highest = totalRainyMonthForAugust;
            cout<<"HIGHEST RAINY MONTH is August DAYS: "<<highest<<endl;
        }
        else
        {
            cout<<"HIGHEST RAINY MONTH is June DAYS: "<<highest<<endl;
        }
        
    }
    inputFile.close();
}