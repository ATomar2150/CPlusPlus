#include <iostream>
#include <string>

using namespace std;

void sortNumber(double* score, string* name, int NUM);
double average(double* score, int NUM );

int main()
{
    int NUM;
    cout<<"Enter the size of Test Scores\n";
    cin >> NUM;
   
    double* score = new double[NUM];
    string* name = new string[NUM];

    for(int i = 0; i < NUM; i++)
    {
        cout<<"Name for "<<(i + 1)<<" Student: "<<endl;
        cin >> *(name + i);

        cout<<"Enter the Score for "<<(i + 1)<<" Student: "<<endl;
        cin >> *(score + i);

        while(*(score + i) < 0)
        {
            cout<<"ERROR !! Please enter again"<<endl;
            cin >> *(score + i);
        }   
    }

    sortNumber(score, name, NUM);
    cout<<"*********SORTING THE LIST********"<<endl;
     for(int i = 0; i < NUM; i++)
    {
        cout<<"The score of student "<<*(name + i) <<" is: "<<*(score + i)<<endl;
    }


    cout<<"AVERAGE OF LIST: "<<average(score, NUM);

    return 0;
}


void sortNumber(double* score, string* name, int NUM)
{
    int i;
    int key;
    int val;
    string temp;
    for (int i = 0; i < NUM -1; i++)
    {
       key = i;
       
        for (int j = i + 1; j < NUM; j++)
        {
            if(score[j] < score[key])
            {
                key = j;
            }
            
        }
        val = score[key];
        temp = name[key];

        score[key] = score[i];
        name[key] = name[i];

        score[i] = val;
        name[i] = temp;

    }
}

double average(double* score, int NUM )
{
    int total = 0.0;
    double avg;
    for(int i = 0; i < NUM; i++)
    {
        total += score[i];
    }

    avg = total/NUM;
    return avg;
}

