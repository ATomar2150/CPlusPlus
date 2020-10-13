#include <iostream>
#include <vector>
using namespace std;

int checkWinner(vector<long> ticket, long );

int main()
{
    vector<long> ticketNumber;
    long jackpotNumber = 77777;

    ticketNumber.push_back(13579);
    ticketNumber.push_back(26791);
    ticketNumber.push_back(26792);
    ticketNumber.push_back(33445);
    ticketNumber.push_back(55555);
    ticketNumber.push_back(62483);
    ticketNumber.push_back(77777);  
    ticketNumber.push_back(79422);   
    ticketNumber.push_back(85647);  
    ticketNumber.push_back(93121);
    
    cout<<"LOTTERY NUMBER PLAYER HAS: "<<endl;
    for(int i = 0; i < ticketNumber.size(); i++)
    {
        cout<<ticketNumber[i]<<endl;
    }
    cout<<endl;
    cout<< "JACKPOT NUMBER: "<<jackpotNumber<<endl;

    int result = checkWinner(ticketNumber, jackpotNumber);
    if(result == -1)
    {
        cout<<"YOU LOSE PLEASE TRY NEXT TIME\n";
    }
    else
    {
        cout<<"CONGRATULATIONS !! YOU WON THE JACKPOT\n";
    }
    
    return 0;
}

int checkWinner(vector<long> ticket, long jackpot)
{
    
    int low = 0;
    int high = ticket.size()-1; 
    int middle;
    int position = -1;
    while(low <= high)
    {
        middle = ( low + high) / 2;
        if (ticket[middle] == jackpot)
        {
            position = middle;
            return position;
        }
        else if(ticket[middle] > jackpot)
        {
            high = middle - 1;
        }
        else if(ticket[middle] < jackpot)
        {
            low = middle + 1;
        }
        
    }
    return position;
}