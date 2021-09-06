#include <stdio.h>
#include <stdlib.h>

int playground [10] = {'0','1','2','3','4','5','6','7','8','9'};      /// Board array
char replay [10] = {'0','1','2','3','4','5','6','7','8','9'};         /// Used for reseting the board to play again
char ag;                                                              /// Used in play again function

int main() {
int player = 1;
int condition , number;
char sign;
char i;


/****
the do while loop starting with the selecting the player 1 or 2 and assign the x for player 1 and o for player 2
****/

do{
board();
if (player % 2)
    player = 1;
else {
    player = 2;
}
if (player == 1)
    sign = 'X';
else{
    sign = 'O';
}

printf ("Player %d enter a number: " , player);
scanf ("%d", &number);                                                /// Chosen number bu the user

/***
print the entered number on the board
***/

if (number == 1 && playground [1] == '1')
    playground [1] = sign;
    else if(number == 2 && playground [2] == '2')
    playground [2] = sign;
    else if(number == 3 && playground [3] == '3')
    playground [3] = sign;
    else if(number == 4 && playground [4] == '4')
    playground [4] = sign;
    else if(number == 5 && playground [5] == '5')
    playground [5] = sign;
    else if(number == 6 && playground [6] == '6')
    playground [6] = sign;
    else if(number == 7 && playground [7] == '7')
    playground [7] = sign;
    else if(number == 8 && playground [8] == '8')
    playground [8] = sign;
    else if(number == 9 && playground [9] == '9')
    playground [9] = sign;
else {
    printf("Invalid choice");                                         /// If the user entered a picked number or any invalid choice
    player--;
    printf("\nPlease press any key to return");
    getch();
    }
condition = check();                                                  /// Condition of the game explained down in check function
player ++;
}while (condition == 1);
board();
if (condition == 0)
    printf ("Player %d win\n\n" , --player);                          /// Win condition
else if (condition == -1) printf ("Game Draw \n\n");                  /// Draw condition
    printf ("To play again [Y] || To exit enter any key:");           /// Play again
    scanf  ("%s", &ag);
    if (ag == 'y' || ag == 'Y'){
        for(i=1;i<10;i++) {playground[i] = replay[i];}                /// Reseting the board's numbers
        return main();
        }
    else if (ag != 'y' || ag!= 'Y')  exit (0);
getch();
return 0;
}



/****
Function to return the condition
0 for win
-1 for draw
1 to continue playing
****/
int check(){
if (playground [1] == playground[2] && playground[2] == playground[3])
    return 0;
else if (playground [4] == playground[5] && playground[5] == playground[6])
    return 0;
else if (playground [7] == playground[8] && playground[8] == playground[9])
    return 0;
else if (playground [1] == playground[4] && playground[4] == playground[7])
    return 0;
else if (playground [2] == playground[5] && playground[5] == playground[8])
    return 0;
else if (playground [3] == playground[6] && playground[6] == playground[9])
    return 0;
else if (playground [1] == playground[5] && playground[5] == playground[9])
    return 0;
else if (playground [3] == playground[5] && playground[5] == playground[7])
    return 0;
else if (playground [1] != '1' && playground [2] != '2' && playground [3] != '3' && playground [4] != '4'
         && playground [5] != '5' && playground [6] != '6' && playground [7] != '7'
          && playground [8] != '8' && playground [9] != '9')
    return -1;
else
    return 1;
}

/****
Function to draw the board
****/
board()
{
    system("cls");                                                    /// To update the same board not print a new one
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", playground[1], playground[2], playground[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", playground[4], playground[5], playground[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", playground[7], playground[8], playground[9]);

    printf("     |     |     \n\n");
}
