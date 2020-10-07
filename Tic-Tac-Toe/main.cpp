#include <iostream>
using namespace std;

const int row = 3;
const int col = 3;

void showBoard(char [][col], int);

int player1ChoiceColumn(char [][col],int);
int player1ChoiceRow(char [][col],int);
void player1Insertion(char [][col],int, int,int);

int player2ChoiceColumn(char [][col],int);
int player2ChoiceRow(char [][col],int);
void player2Insertion(char [][col],int, int,int);
bool winnerPlayer1(char [][col], int);
bool winnerPlayer2(char [][col], int);

int main()
{
    
    char playerBoard[row][col] = {{'*','*','*'},
                                  {'*','*','*'},
                                  {'*','*','*'}};
    
    showBoard(playerBoard, row);
    
    int count = 0;
    do{
        int p1r = player1ChoiceRow(playerBoard, row);
        int p1c = player1ChoiceColumn(playerBoard, row);
        player1Insertion(playerBoard, row, p1c, p1r);
        showBoard(playerBoard, row);
        int p2r = player2ChoiceRow(playerBoard, row);
        int p2c = player2ChoiceColumn(playerBoard, row);   
        player2Insertion(playerBoard, row, p2c, p2r);
        showBoard(playerBoard, row);
        bool player1result = winnerPlayer1(playerBoard, row);
        bool player2result = winnerPlayer2(playerBoard, row);
        if(player1result == true || player2result == true)
        {
            cout<<"We havve the WINNER"<<endl;
            break;
        }    
        count += 1;
    }while(count < 5);

    return 0;

}

void showBoard(char playerBoard[][col],int row)
{

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<playerBoard[i][j]<<" ";
        }
        cout<<endl;
    }
}
int player1ChoiceRow(char playerBoard[][col],int row)
{
    int r1;
    
    do
    {
        cout<<"PLAYER1: Enter the ROW number index\n";
        cin>> r1;
    }while(r1<0 || r1>2);

   return r1;
}

int player1ChoiceColumn(char playerBoard[][col],int row)
{
    int c1;
    do{
    cout<<"PLAYER1: Enter the COLUMN number index\n";
    cin>> c1;
    }while(c1>2 || c1<0);

   return c1;
}


void player1Insertion(char playerBoard[][col],int row,int c1, int r1)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == r1 && j == c1)
            {
                cout<<"The indexes are: ["<<r1<<"]"<<"["<<c1<<"]"<<endl;
                playerBoard[r1][c1]='x';
                break;
            }
        }
    }
}

int player2ChoiceRow(char playerBoard[][col],int row)
{
    int r2;
    do{
    cout<<"PLAYER2: Enter the ROW number index\n";
    cin>> r2;
    }while(r2>2 || r2<0);

   return r2;
}

int player2ChoiceColumn(char playerBoard[][col],int row)
{
    int c2;
    do{
    cout<<"PLAYER2: Enter the COLUMN number index\n";
    cin>> c2;
    }while(c2>2 || c2<0);


   return c2;
}

void player2Insertion(char playerBoard[][col],int row,int c2, int r2)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if( i==r2 && j==c2)
            {
                 cout<<"The indexes are: ["<<r2<<"]"<<"["<<c2<<"]"<<endl;
                playerBoard[r2][c2]='o';
                break;
            }
        }
    }

}

bool winnerPlayer1(char playerBoard[][col], int row)
{   
    bool isWinner = false;
    if(playerBoard[0][0]==playerBoard[1][1]==playerBoard[2][2]=='x' || playerBoard[2][0]==playerBoard[1][1]==playerBoard[0][2]=='x')
    {
        cout<<"Player1 is a Winner.";
        isWinner = true;
    }
    else if(playerBoard[0][0]==playerBoard[0][1]==playerBoard[0][2]=='x' || playerBoard[1][0]==playerBoard[1][1]==playerBoard[1][2] == 'x' || playerBoard[2][0]==playerBoard[2][1]==playerBoard[2][2]=='x')
    {
        cout<<"Player1 is a Winner.";
         isWinner = true;
    }
    else if (playerBoard[0][0]==playerBoard[1][0]==playerBoard[2][0]=='x' || playerBoard[0][1]==playerBoard[1][1]==playerBoard[2][1] == 'x' || playerBoard[0][2]==playerBoard[1][2]==playerBoard[2][2]=='x')
    {
         cout<<"Player1 is a Winner.";
          isWinner = true;
    }

    return isWinner;
}

bool winnerPlayer2(char playerBoard[][col], int row)
{
    bool isWinner = false;
    if (playerBoard[0][0]==playerBoard[1][1]==playerBoard[2][2]=='o' || playerBoard[2][0]==playerBoard[1][1]==playerBoard[0][2]=='o')
    {
        cout<<"Player2 is a Winner.";
         isWinner = true;

    }
    else if(playerBoard[0][0]==playerBoard[0][1]==playerBoard[0][2]=='o' || playerBoard[1][0]==playerBoard[1][1]==playerBoard[1][2] == 'o' || playerBoard[2][0]==playerBoard[2][1]==playerBoard[2][2]=='o')
    {
         cout<<"Player2 is a Winner.";
          isWinner = true;
    }
    else if(playerBoard[0][0]==playerBoard[1][0]==playerBoard[2][0]=='o' || playerBoard[0][1]==playerBoard[1][1]==playerBoard[2][1] == 'o' || playerBoard[0][2]==playerBoard[1][2]==playerBoard[2][2]=='o')
    {
        cout<<"Player2 is a Winner.";
         isWinner = true;

    }
    return isWinner;
    
}
