#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int vowelsCount(char* sentence);
int consonentsCount(char* sentence);

int main()
{
    const int SIZE = 100;
    char sentence[SIZE];
    char userInput;
    int consonent;
    int vowalAndConsonent;

    cout<< "Enter the string.\n";
    cin.getline(sentence, SIZE);

    cout<<"Please enter user Input for following choice\n";
    cout<<"A = Count the number of vowels in the string"<<endl;
    cout<<"B = Count the number of consonants in the string"<<endl;  
    cout<<"C = Count both the vowels and consonants in the string"<<endl;    
    cout<<"D = Enter another string"<<endl;
    cout<<"E = Exit the program"<<endl;
    cin >> userInput;

    do
    {

    switch(userInput)
    {
        case 'A': 
            cout <<"The vowels are: "<< vowelsCount(sentence)<<endl;
            cout<<"Please enter your choice again from A to E\n";
            cin >> userInput;
            break;
        case 'B':
            consonent = consonentsCount(sentence);
            cout<<"The consonent are: "<<consonent<<endl;
            cout<<"Please enter your choice again from A to E\n";
            cin >> userInput;
            break;
        case 'C':
            vowalAndConsonent = vowelsCount(sentence) + consonentsCount(sentence);
            cout<<"The total is: "<<vowalAndConsonent<<endl;
            cout<<"Please enter your choice again from A to E\n";
            cin >> userInput;
            break;
        case 'D':
            cout<< "Enter another string\n";
            fflush (stdin);
            cin.getline(sentence, SIZE);
            cout<<"Please enter your choice again from A to E\n";
            cin >> userInput;
            break;
        case 'E':
            exit(0);
            break;
    }
    } while (userInput != 'E');

    return 0;
}

int vowelsCount(char* sentence)
{
    int i = 0;
    int total = 0;
    while(sentence[i] != '\0')
    {
        if(sentence[i] =='a'|| sentence[i] == 'e'|| sentence[i] == 'i'|| sentence[i] == 'o'|| sentence[i] == 'u'||sentence[i] =='A'|| sentence[i] == 'E'|| sentence[i] == 'I'|| sentence[i] == 'O'|| sentence[i] == 'U')
        {
            total = total + 1;
        }
        i++;
    }
    return total;
}

int consonentsCount(char* sentence)
{
    int i = 0;
    int j = 0;
    int total = 0;
    int total1 = 0;
    int diff;
    while(sentence[j] != '\0')
    {
        if(!isalpha(sentence[j]))
        {
            total = total + 1;
           
        }
         j++;

    }
    cout<<"The non alpha characters are: "<<total<<endl;

    while(sentence[i] != '\0')
    {
     if(sentence[i] =='a'|| sentence[i] == 'e'|| sentence[i] == 'i'|| sentence[i] == 'o'|| sentence[i] == 'u'||sentence[i] =='A'|| sentence[i] == 'E'|| sentence[i] == 'I'|| sentence[i] == 'O'|| sentence[i] == 'U')
        {
            total1 = total1 + 1;
          
        }
           i++;  
    }

    cout<<"The vowels characters are: "<<total1<<endl;

    int together = total + total1;



    int length = strlen(sentence);
    cout<<"Length of string is: "<<length<<endl;

    diff = length - together;

    return diff;
}