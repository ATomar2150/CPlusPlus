#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    double runningTime;
};

void showValues(MovieData ddlj, MovieData k3g);

int main()
{
    MovieData ddlj;
    MovieData k3g;

    cout<<"Data entry for ddlj."<<endl;
    cout<<"Title: ";
    getline(cin, ddlj.title);
    cout <<"Director: ";
    getline(cin, ddlj.director);
    cout <<"YearReleased: ";
    cin >> ddlj.yearReleased;
    cout<<"Running Time: ";
    cin >> ddlj.runningTime;

    cout<<"Data entry for k3g.\n";
    cout<<"Title: ";
    cin.ignore();
    getline(cin, k3g.title);
    cout <<"Director: ";
    getline(cin, k3g.director);
    cout <<"YearReleased: ";
    cin >> k3g.yearReleased;
    cout<<"Running Time: ";
    cin >> k3g.runningTime;

    showValues(ddlj, k3g);

    return 0;
}

void showValues(MovieData ddlj, MovieData k3g)
{
    cout<<"The Entries for the movies are as below: "<<endl;
    cout<<"Director of ddlj is "<<ddlj.director<<" and the movie title is "<<ddlj.title<<" and the movie is released in "<<ddlj.yearReleased<<" total running time is "<<ddlj.runningTime<<endl;
    cout<<"Director of ddlj is "<<k3g.director<<" and the movie title is "<<k3g.title<<" and the movie is released in "<<k3g.yearReleased<<" total running time is "<<k3g.runningTime<<endl;
}