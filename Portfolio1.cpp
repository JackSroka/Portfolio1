#include <iostream>
#include <windows.h> 
using namespace std;

void TicTacToe();
void choose(int);
void win();

int grid[10]{ 0,1,2,3,4,5,6,7,8,9 };
int won = 10;
char choice;
bool W = false;

int main()
{
    for (int j = 0; j < 1; j++) {
        TicTacToe();
        for (int i = 0; i < 5; i++) {
            if (W == false) {
                cout << "\nPlayer 1 choose a number: ";
                choose(0);     										        // player 1's turn
                TicTacToe();
                win();      										        // if there is a win the program stops and displays who won and how they won
                if (W == true) {
                    i == 5;
                }

                else if (i == 4) {
                    cout << "\nIt's a tie";                                 // displays if the game ends in a tie
                    won = 11;
                }
                else {
                    cout << "\nPlayer 2 choose a number: ";
                    choose(-1);     							            // player 2's turn
                    TicTacToe();
                    win();      									        // if there is a win the program stops and displays who won and how they won
                    if (W == true) {
                        i == 5;
                    }
                }
            }
        }
        return 0;
    }
}

void TicTacToe(void)								                        // changes the numbers on the board to an O or X depending on which player chooses
{
        if (grid[1] == 1)
            cout << grid[1] << "\t";
        else if (grid[1] == 0)
            cout << "O\t";
        else if (grid[1] == -1)
            cout << "X\t";

        if (grid[2] == 2)
            cout << grid[2] << "\t";
        else if (grid[2] == 0)
            cout << "O\t";
        else if (grid[2] == -1)
            cout << "X\t";

        if (grid[3] == 3)
            cout << grid[3] << "\n\n";
        else if (grid[3] == 0)
            cout << "O\t\n\n";
        else if (grid[3] == -1)
            cout << "X\t\n\n";

        if (grid[4] == 4)
            cout << grid[4] << "\t";
        else if (grid[4] == 0)
            cout << "O\t";
        else if (grid[4] == -1)
            cout << "X\t";

        if (grid[5] == 5)
            cout << grid[5] << "\t";
        else if (grid[5] == 0)
            cout << "O\t";
        else if (grid[5] == -1)
            cout << "X\t";

        if (grid[6] == 6)
            cout << grid[6] << "\n\n";
        else if (grid[6] == 0)
            cout << "O\t\n\n";
        else if (grid[6] == -1)
            cout << "X\t\n\n";

        if (grid[7] == 7)
            cout << grid[7] << "\t";
        else if (grid[7] == 0)
            cout << "O\t";
        else if (grid[7] == -1)
            cout << "X\t";

        if (grid[8] == 8)
            cout << grid[8] << "\t";
        else if (grid[8] == 0)
            cout << "O\t";
        else if (grid[8] == -1)
            cout << "X\t";

        if (grid[9] == 9)
            cout << grid[9];
        else if (grid[9] == 0)
            cout << "O\t";
        else if (grid[9] == -1)
            cout << "X\t";
}

void choose(int swap)
{
    int select;										                        // this variable allows for both players to input numbers and replace the number with an X or an O
start:
    
    cin >> select;
    if (grid[1] == 1 && select == 1)
    {
        grid[1] = swap;
    }
    else if (grid[2] == 2 && select == 2)
    {
        grid[2] = swap;
    }
    else if (grid[3] == 3 && select == 3)
    {
        grid[3] = swap;
    }
    else if (grid[4] == 4 && select == 4)
    {
        grid[4] = swap;
    }
    else if (grid[5] == 5 && select == 5)
    {
        grid[5] = swap;
    }
    else if (grid[6] == 6 && select == 6)
    {
        grid[6] = swap;
    }
    else if (grid[7] == 7 && select == 7)
    {
        grid[7] = swap;
    }
    else if (grid[8] == 8 && select == 8)
    {
        grid[8] = swap;
    }
    else if (grid[9] == 9 && select == 9)
    {
        grid[9] = swap;
    }
    else
    {
        cout << "\nThat number is either already chosen or invalid\nTry Again\n";
        goto start;
    }
}

void win(void)	                                                            // displays winner
{
    if (grid[1] == grid[2] && grid[1] == grid[3])
    {
        W = true;
        if (grid[1] == 0)
            cout << "\nPlayer 1 won\n";
        else if (grid[1] == -1)
            cout << "Player 2 won\n";
    }
    if (grid[4] == grid[5] && grid[4] == grid[6])
    {
        W = true;
        if (grid[1] == 0)
            cout << "\nPlayer 1 won\n";
        else if (grid[2] == -1)
            cout << "\nPlayer 2 won\n";
    }
    if (grid[7] == grid[8] && grid[7] == grid[9])
    {
        W = true;
        if (grid[1] == 0)
            cout << "\nPlayer 1 won\n";
        else
            cout << "\nPlayer 2 won\n";
    }
    if (grid[1] == grid[5] && grid[1] == grid[9])
    {
        W = true;
        if (grid[1] == 0)
            cout << "\nPlayer 1 won\n";
        else
            cout << "\nPlayer 2 won\n";
    }
    if (grid[3] == grid[5] && grid[3] == grid[7])
    {
        W = true;
        if (grid[3] == 0)
            cout << "\nPlayer 1 won\n";
        else
            cout << "\nPlayer 2 won\n";
    }
    if (grid[1] == grid[4] && grid[1] == grid[7])
    {
        W = true;
        if (grid[1] == 0)
            cout << "\nPlayer 1 won\n";
        else
            cout << "\nPlayer 2 won\n";

    }
    if (grid[2] == grid[5] && grid[2] == grid[8])
    {
        W = true;
        if (grid[2] == 0)
            cout << "\nPlayer 1 won\n";
        else
            cout << "\nPlayer 2 won\n";
    }
    if (grid[3] == grid[6] && grid[3] == grid[9])
    {
        W = true;
        if (grid[3] == 0)
            cout << "\nPlayer 1 won\n";
        else
            cout << "\nPlayer 2 won\n";
    }
}
