#include <iostream>
#include <iomanip>

void getTestScores(double[], int);
double getTotal(double[], int);
double getLowestScore(double [], int);

using namespace std;
int main()
{
    const int SIZE =3;
    double testScores[SIZE];
    double accumulator;
    double average;
    double lowest;
    
    cout<<fixed<<showpoint<<setprecision(1);;
    getTestScores(testScores, SIZE);

    lowest = getLowestScore(testScores, SIZE);

    accumulator = getTotal(testScores, SIZE);
    cout<<"The total is: "<<accumulator<<endl;
    cout<<"The lowest score is: "<<lowest<<endl;

    accumulator -= lowest;
    cout<<"total after dropping the lowest score: "<<accumulator<<endl;
    average = accumulator / (SIZE - 1);
    cout<<"The average with lowest score dropped is: "<<average<<endl;

    return 0;
}

void getTestScores(double score[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        cout<<"Enter the test scores for "<<(i+1)<<": ";
        cin >> score[i];
    }
}

double getTotal(double score[], int SIZE)
{
     double total=0; //Accumulator
    for(int i = 0; i < SIZE; i++)
    { 
       total += score[i];
    }
    
    return total;
};

double getLowestScore(double score[], int SIZE)
{
    int lowestValue;
    lowestValue = score[0];
    for(int i = 0; i < SIZE; i++)
    {
        if(lowestValue > score[i])
        {
            lowestValue = score[i];
        }
    }
    return lowestValue;
}
