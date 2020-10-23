#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void capitalizer(char* line);

int main()
{
    const int SIZE = 100;
    char* sentence;
    cout << "Enter the sentence.\n";
    cin.getline(sentence, SIZE);

    capitalizer(sentence);

    return 0;
}

void capitalizer(char* line)
{
    int i = 0;
    int j = 0;
    if(line[0] != ' ')
    {
        line[0] = toupper(line[0]);
    }
    while(line[i] != '\0')
    {
        if((line[i] == '.'||line[i] == '?'||line[i] == '"'|| line[i] == '!') && line[i+1] != ' ' )
        {
            line[i+1] = toupper(line[i+1]);
        }
        else if((line[i] == '.'||line[i] == '?'||line[i] == '"'|| line[i] == '!') && line[i+2] != ' ' )
        {
            line[i+2] = toupper(line[i+2]);
        }
        i++;
    }

    while(line[j] != '\0')
    {
        cout<<line[j];
        j++;
    }
}