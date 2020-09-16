#include <iostream>
using namespace std;

int main()
{
    int MAX_PLAYERS = 15;
    int MIN_PLAYERS = 9;
    int team;
    int desiredPlayerPerTeam;
    int numberOfPlayers;
    int leftoverPlayers;

    cout<<"Please enter Number of players per team required."<<endl;
    cin>> desiredPlayerPerTeam;
    //input validation
    while((desiredPlayerPerTeam > MAX_PLAYERS) || (desiredPlayerPerTeam < MIN_PLAYERS)){
        cout<<"Please Enter Again Valid Number of Players Required/Team."<<endl;
        cin>>desiredPlayerPerTeam;
    }
    cout<< "Enter the number of Players available: ";
    cin>> numberOfPlayers;

    while(numberOfPlayers <= 0){
        cout<< "Please enter again Valid number of Players available."<<endl;
        cin>>numberOfPlayers;
    }

    cout<<"As the number of Player available is in valid range.\n";
    cout<<"Total team that could be formed are: ";
    team = numberOfPlayers / desiredPlayerPerTeam;
    cout<<team;
    cout<<"\nExtra Players in team are: ";
    leftoverPlayers = numberOfPlayers % desiredPlayerPerTeam;
    cout<<leftoverPlayers;
    return 0;

}