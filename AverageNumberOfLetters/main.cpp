#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int wordCount(string);

int main()
{
string sentence; // store the user input string
char letter; // gets each letter from the sentence
int sentenceLength = 0; // length of the sentence
int numberOfLetters = 0; // number of punctuations in the sentence
double average = 0.0; // average number of letters in each word
  
cout << "Enter the sentence: ";
getline(cin, sentence); // takes input from the user
  
sentenceLength = sentence.length(); // gets the length of the sentence
  
cout << "\nThe sentence has " << wordCount(sentence) << " words" << endl;
  
// counting the number of punctuations in the whole string
for (int i = 0; i < sentenceLength; i++)
{
letter = sentence[i];
switch(letter)
{
case ' ':
case '\0':
case '?':
case '!':
case ',':
case '.':
numberOfLetters++;
break;
}
}
  
// subtracting the number of punctuations from the string length gives the number of letters
cout << "Total number of letters in the sentence: " << (sentenceLength - numberOfLetters) << endl;
  
  
average = (double) (sentenceLength - numberOfLetters) / wordCount(sentence);
  
cout << "Average number of letters present in each word: " << average << endl;
  
cout << "Average number of letters present in each word (rounded): " << (int)average << endl;
  
return 0;
}

int wordCount(string sentence)
{
int length = sentence.length(); // length of the sentence
int numberOfWords = 1; // counter for number of words
  
// iterating over the whole sentence
for(int i = 0; i < length; i++)
{
// counting the number of white spaces in the sentence gives the word count
    if(sentence[i] == ' ')
    {
        numberOfWords++;
    }
}
  
// if there are any leading white spaces
if(sentence[0] == ' ')
{
    numberOfWords--;
}
  
// if there are any trailing white spaces
if(sentence[length - 1] == ' ')
{
    numberOfWords--;
}
  
return numberOfWords;
}

