#include <iostream>
using namespace std;

void movieWatched(int* survey, int students);
void sortMovies(int* survey, int students);
double average(int* survey, int students);
int modeMovies(int* survey, int students);
double medianMovies(int* survey,int students);

int main()
{
    int students;
    cout << "How many students been surveyed?\n";
    cin >> students; 

    int* survey = new int[students];

    movieWatched(survey, students);

    sortMovies(survey,students);

    cout<<endl;

    for(int i = 0; i < students; i++)
    {
        cout<<survey[i]<<endl;
    }

    double avg = average(survey, students);

    cout<<"The avg is: "<<avg<<endl;

    int mode = modeMovies(survey,students);
    if(mode == -1)
    {
        cout<<"NO MODE EXISTS"<<endl;
    }
    else
    {
        cout<<"The mode is: "<<mode<<endl;
    }

    double median = medianMovies(survey,students);
    cout<<"The median is: "<<median<<endl;

    return 0;
}

void movieWatched(int* survey, int students)
{
    for(int i = 0; i< students; i++)
    {
        cout<<"Enter the number of movies watched by student "<<(i+1)<<" : "<<endl;
        cin >> survey[i];
    }
}

void sortMovies(int* survey, int students)
{
    bool swap;
    do
    {
        swap = false;
        for(int i = 0; i < students-1; i++)
        {
            if(survey[i] > survey[i+1])
            {
                int temp = survey[i];
                survey[i] = survey[i+1];
                survey[i+1] = temp;
                swap = true;
            }
        }       
    } while (swap==true);
    
}

double average(int* survey,int students)
{
    double total = 0.0;
    for(int i = 0; i < students; i++)
    {
        total = total + survey[i];
    }

    double average = total / students;
    return average;
}

int modeMovies(int* survey,int students)
{
  int* maxMode = new int[students];

  for(int i = 0; i < students; i++)
  {   
    maxMode[i] = 0;
    for(int j = 0; j < students; j++)
    {
        if(survey[i]==survey[j])
        {
            maxMode[i]++;
        }
    }
  }

  int maxFreq = maxMode[0];
  int mode;

  for(int i = 1; i < students; i++)
  {
      if(maxMode[i] >= maxFreq)
      {
          maxFreq = maxMode[i];
          mode = survey[i];
      }
  }
  
  if(maxFreq == 1)
  {
    mode = -1;
  } 
   return mode;
}

double medianMovies(int* survey,int students)
{
    double result;
    if(students % 2 == 0)
    {
        int val1 = students / 2;
        int val2 = val1 - 1;

        result = (survey[val1] + survey[val2]) / 2.0;
    }
    else if(students % 2 != 0)
    {
        int val1 = students/2;
        result = survey[val1]/1.0;
    }
    return result;
}