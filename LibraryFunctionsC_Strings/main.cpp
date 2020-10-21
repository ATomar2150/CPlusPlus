#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void concatArray(char string1[], char string2[], int SIZE);
int main()
{
    //==================>strlen
    // char name[] = "Sundar Tinku Billa";
    // int length;
    // length = strlen(name);
    // cout << length;

    //strcat
    // const int SIZE = 13;
    // char string1[SIZE] = "Hello ";
    // char string2[]= "World!";

    // strcat(string1, string2);
    // cout << string1 <<endl; 

    //===================>strcpy
    // cout << string1 <<endl; 
    // strcpy(string1, string2);
    // cout << string1 <<endl; 

    //strncat
    // int maxCharacters;
    // const int SIZE_1 = 17;
    // const int SIZE_2 = 18;

    // char string1[SIZE_1] = "Hulchal ";
    // char string2[SIZE_2] = "HungamaBhai";

    // cout<<string1<<endl;
    // cout<<string2<<endl;
    
    // maxCharacters = sizeof(string1) - (strlen(string1) + 1);
    // //******strncat appends string2 in the end of (maxCharacters = (17 - (8 + 1))) // (17 - 9 = 8)*********
    // strncat(string1, string2, maxCharacters);
    // cout << string1 <<endl;

    //================>strncpy
    // int maxChars;
    // const int SIZE = 11;

    // char string1[SIZE];
    // char string2[] = "I love Aparna\n";

    // cout<<string1<<endl;
    // cout<<string2<<endl;
    
    // maxChars = sizeof(string1) - 1;

    //================>strncpy(string1, string2, maxChars);

    //********** put null terminator at the end, maxChars = 11 - 1 = 10 copies atmost 10 characters.**********

    // string1[maxChars] = '\0';
    // cout << string1 <<endl;

    //strstr (searches for string inside string)
    // const int NUM_PRODS = 5; 
    // const int LENGTH = 27;

    // char products[NUM_PRODS][LENGTH] =
    //             { "Malai Kulfa 32000",
    //               "Matka Kulfi 1800",
    //               "Rajbhog coke",
    //               "Alphanso cream",
    //               "Saffron Ice 23"
    //             };
    

    // char lookUp[LENGTH];
    // char* strPtr = NULL;
    // int i;

    // cout<<"Enter the product number to search for: "<<endl;
    // cin.getline(lookUp, LENGTH);

    // for (i = 0; i < NUM_PRODS; i++)
    // {
    //     strPtr = strstr(products[i], lookUp);
    //     if(strPtr != NULL)
    //     {
    //         break;
    //     }
    // }

    // if(strPtr != NULL)
    // {
    //     cout<<products[i]<<endl;
    // }
    // else
    // {
    //     cout<<"No matching product was found\n";
    // }

    //==============>strcmp

    // const double PRICE_A = 200;
    // const double PRICE_B = 400;

    // const int SIZE = 11;
    // char partName[SIZE];

    // cout<<"Enter the name of product you want the price.\n";
    // cin >> partName;

    // if(strcmp(partName,"PRICE_A") == 0)
    // {
    //     cout<<"The price is: "<<PRICE_A<<endl;
    // }
    // else if(strcmp(partName,"PRICE_B") == 0)
    // {
    //     cout<<"The price is: "<<PRICE_B<<endl;
    // }
    // else
    // {
    //     cout<<"Price is not a valid part.\n";
    // }

    //===============>atoi (alphanumeric to integer)

    // const int SIZE = 10;
    // char input[SIZE];
    // int total = 0;
    // int count = 0;
    // double average;

    // cout<<"Enter the value of number or press q to QUIT.\n";
    // cin.getline(input, SIZE);

    // while(tolower(input[0]) != 'q')
    // {
    //     total += atoi(input);
    //     count++;
    //     cout<<"Enter the value of number or press q to QUIT.\n";
    //     cin.getline(input, SIZE);
    // }

    // if(count != 0)
    // {
    //     cout<<"Total is: "<<total<<endl;
    //     average = static_cast<double>(total) / count;
    //     cout<< "Average: "<<average<<endl;
    // }
    
    //=============>Write your own C-String Handling function<=============
    const int SIZE = 15;
    char string1[SIZE];
    char string2[SIZE];

    concatArray(string1, string2, SIZE);

    cout<<"The first string now has became: "<<string1<<endl;


    return 0;
}

void concatArray(char string1[], char string2[], int SIZE)
{
    int index;
    cout<<"Enter the value for string1\n";
    cin.getline(string1, SIZE);
    cout<<"Enter the value for string2\n";
    cin.getline(string2, SIZE);

    for(int index = 0; index < SIZE; index++)
    {
        if(string1[index] == '\0')
        {
            int i = 0;
            while(string2[i] != '\0')
            {
              string1[index] = string2[i];
              index++;
              i++;
            }
            if(string2[i] == '\0')
            {
                string1[index] = '\0';
                break;
            }
        }
    }
   
}