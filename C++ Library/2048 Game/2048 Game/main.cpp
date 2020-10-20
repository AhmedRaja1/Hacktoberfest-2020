#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;
int board [4][4]; //matrix for board
int dirLine[] = {1, 0, -1, 0};
int dirColumn[] ={0, 1, 0, -1};

pair<int, int> generateunoccupiedposition()
{
    int occupied = 1, line, column;
    while (occupied){
        line = rand() % 4;
        column = rand() % 4;
        if (board[line][column] == 0)
            occupied = 0;
    }
    return make_pair(line, column);
}

void addpiece(){
 pair<int, int> pos= generateunoccupiedposition();
        board[pos.first][pos.second] = 2;
}

//function for newgame
void newgame()
{
    for(int i=0; i<4; ++i)
        for(int j=0; j<4; ++j)
        board[i][j];
        addpiece();

}

//function for User interface
void printUI (){
    system("cls");
    for(int i = 0; i <4; ++i){
        for(int j = 0; j < 4; ++j)
        if (board[i][j]==0)
            cout << setw(4) << ".";
        else
            cout << setw(4) << board[i][j];
        cout << "\n";
    }

    cout<<" n: new game, w: up, s: down, a: left, d: right, q: quit \n";
    cout<<" Developed Mian Inshaullah Zia \n" ;
    cout<<" \n";
    }

bool candomove(int line, int column, int nextLine, int nextcolumn){
 if( nextLine < 0 || nextcolumn < 0 || nextLine >=4 || nextcolumn >=4
     || (board[line][column] != board[nextLine][nextcolumn] && board[nextLine][nextcolumn] != 0))
    return false;
    return true;

}
void applymove( int direction) {
    int startLine = 0, startcolumn = 0, lineStep = 1 , columnstep = 1;
    if (direction == 0){
        startLine = 3;
        lineStep = -1;
    }
    if (direction == 1){
        startcolumn = 3;
        columnstep = -1;
    }
    int movepossible, canaddpiece = 0;
    do{
            movepossible = 0;
    for (int i = startLine; i >=  0 && i < 4; i += lineStep)
    for (int j = startcolumn; j >= 0 && j < 4; j += columnstep){
        int nextI= i + dirLine[direction], nextJ= j + dirColumn[direction];
      if (board[i][j] && candomove(i, j, nextI, nextJ)){
         board[nextI][nextJ] += board[i][j];
         board[i][j] = 0;
         movepossible = canaddpiece = 1;
        }
    } printUI();
    }while (movepossible);

    if(canaddpiece)
        addpiece();



}



int main()
{
    srand(time(0));
    char commandtodir[128];
    commandtodir['s'] = 0;
    commandtodir['d'] = 1;
    commandtodir['w'] = 2;
    commandtodir['a'] = 3;
    newgame();
    while (true) {
        printUI();
        char command;
        cin >> command;
        if (command == 'n')
            newgame();
            else if (command == 'q')
            break;
            else {
                int currentDirection = commandtodir[command];
                applymove(currentDirection);
            }

        }

   return 0;
}
