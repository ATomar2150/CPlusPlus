#include <iostream>
#include <cstring>
using namespace std;

int wordCount(char* line);

int main()
{
    int SIZE = 100;
    char line[100];
    cout<<"Enter the line and calculates the word in it: \n";
    cin.getline(line, SIZE);

    int count = wordCount(line);
    cout<<endl;
    cout<<"Number of words are: "<<(count+1)<<endl;
    
    return 0;
}

int wordCount(char* line)
{  
   int count = 0;
   int ptr = 0;
   while(line[count] != '\0')
   {
       if(line[count] == ' ')
       {
           ptr++;
           cout<<endl;
       }
       if(line[count] != ' ')
       {
       cout<<line[count];
       }
       count++;
   }

   return ptr;
}
