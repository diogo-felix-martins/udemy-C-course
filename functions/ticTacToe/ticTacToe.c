#include <stdio.h>
#include <stdlib.h>

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkForWin();
void drawBoard();
void markBoard(int player);

int main (){
    char winner = 'D';

    drawBoard(); // shows empty board on screen

    for ( int i = 1 ; i < 10 ; i++ ){
        if (winner != 'D'){
            break; //end the game
        }else{
            if (i % 2 != 0){
                markBoard(1);
            }else{
                markBoard(2);
            }
        }
        winner = checkForWin();
        
        drawBoard(); // shows board after every move
    }

    if ( winner == 'D' )
        printf("\nDraw!");
    else
        printf("\nWinner:%c", winner);

    return 0;
}


// Checks for win or draw
int checkForWin(){
    // check for diagonal win
    if ( (board[0] == board[4] && board[0] == board[8]) || (board[2] == board[4] && board[2] == board[6]) ){
        return board[0];
    }
   
    // check for horizontal win
    for ( int i = 0 ; i < 9 ; i += 3){ 
        if ( board[i] == board[i+1] && board[i] == board[i+2] ){
            return board[i];
        }
    }

    // check for vertical win
    for ( int i = 0 ; i < 3 ; i++){ 
        if ( board[i] == board[i+3] && board[i] == board[i+6] ){
            return board[i];
        }
    }

    return 'D';
}


// Draws the game board on the screen
void drawBoard(){
    system ("clear");
    for ( int i = 0 ; i < 9 ; i += 3){
        printf(" %c | %c | %c \n", board[i], board[i+1], board[i+2]);
        
        if ( i < 6 ) // Prints the separating lines only 2 times
            printf("---|---|---\n");
    }
}


// Asks the player input and marks the board with it
void markBoard(int player){
    _Bool validMove = 0;
    int playerMove = 0;

    // Asks for a number until the user imputs a valid move
    while ( !validMove ){
        
        printf("\nPlayer %d, enter a valid number:", player);
        scanf("%d", &playerMove);

        // Check if the number is between 1 and 9, and if that tile in the board is empty
        if ( playerMove <= 9 && playerMove >= 1 && board[playerMove - 1] != 'X' && board[playerMove - 1] != 'O')
            validMove = 1;

    }

    // Sets the tile as the symbol of the current player
    if ( player == 1 )
            board[playerMove - 1] = 'X';
        else
            board[playerMove - 1] = 'O';
}
