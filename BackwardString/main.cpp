#include <iostream>
#include <cstring>
using namespace std;

void reverseLine(char* line);

int main()
{
    const int SIZE = 50;
    char line[SIZE];
    cout<< "Enter the Word: "<<endl;
    cin.getline(line, SIZE);

    reverseLine(line);
    return 0;
}

void reverseLine(char* line)
{  
   int count = 0;
   while(line[count] != '\0')
   {
       count++;
   }

   for(int i = count-1; i >= 0; i--)
   {       
       cout << line[i];
   }

}