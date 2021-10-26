#include <stdio.h>
#include <stdlib.h>
#define Continue 1
#define Draw -1
#define Win 0
#define Size 10
#define FirstPlayer 1
#define initialize 1
#define SecondPlayer 2
#define Math 2
#define FirstPlayGround 1
#define SecondPlayGround 2
#define ThirdPlayGround 3
#define FourthPlayGround 4
#define FifthPlayGround 5
#define SixthPlayGround 6
#define SeventhPlayGround 7
#define EighthPlayGround 8
#define NinthPlayGround 9
#define End 0


int playground [Size] = {'0','1','2','3','4','5','6','7','8','9'};      /// Board array neglecting (0)
char replay [Size] = {'0','1','2','3','4','5','6','7','8','9'};         /// Used for reseting the board to play again neglecting (0)
char ag;                                                              /// Used in play again function

int main()
{
int player = initialize;
int condition , number;
char sign;
char Index;


/****
the do while loop starting with the selecting the player 1 or 2 and assign the x for player 1 and o for player 2
****/

do{
board();
if (player % Math)
    player = FirstPlayer;
else {
    player = SecondPlayer;
}
if (player == FirstPlayer)
    sign = 'X';
else{
    sign = 'O';
}

printf ("Player %d enter a number: " , player);
scanf ("%d", &number);                                                /// Chosen number by the user

/***
print the entered number on the board
***/

if (number == FirstPlayGround && playground [FirstPlayGround] == '1')
    playground [FirstPlayGround] = sign;
    else if(number == SecondPlayGround && playground [SecondPlayGround] == '2')
    playground [SecondPlayGround] = sign;
    else if(number == ThirdPlayGround && playground [ThirdPlayGround] == '3')
    playground [ThirdPlayGround] = sign;
    else if(number == FourthPlayGround && playground [FourthPlayGround] == '4')
    playground [FourthPlayGround] = sign;
    else if(number == FifthPlayGround && playground [FifthPlayGround] == '5')
    playground [FifthPlayGround] = sign;
    else if(number == SixthPlayGround && playground [SixthPlayGround] == '6')
    playground [SixthPlayGround] = sign;
    else if(number == SeventhPlayGround && playground [SeventhPlayGround] == '7')
    playground [SeventhPlayGround] = sign;
    else if(number == EighthPlayGround && playground [EighthPlayGround] == '8')
    playground [EighthPlayGround] = sign;
    else if(number == NinthPlayGround && playground [NinthPlayGround] == '9')
    playground [NinthPlayGround] = sign;
else {
    printf("Invalid choice");                                         /// If the user entered a picked number or any invalid choice
    player--;
    printf("\nPlease press any key to return");
    getch();
    }
condition = check();                                                  /// Condition of the game explained down in check function
player ++;
}while (condition == Continue);

board();
if (condition == Win)
    printf ("Player %d win\n\n" , --player);                          /// Win condition
else if (condition == Draw) printf ("Game Draw \n\n");                  /// Draw condition
    printf ("To play again [Y] || To exit enter any key:");           /// Play again
    scanf  ("%s", &ag);
    if (ag == 'y' || ag == 'Y'){
        for(Index=FirstPlayGround;Index<=NinthPlayGround;Index++) {playground[Index] = replay[Index];}                /// Reseting the board's numbers
        return main();
        }
    else if (ag != 'y' || ag!= 'Y')  exit (End);
getch();
return End;
}



/****
Function to return the condition
 0 for win
-1 for draw
 1 to continue playing
****/
int check(){
if (playground [FirstPlayGround] == playground[SecondPlayGround] && playground[SecondPlayGround] == playground[ThirdPlayGround])
    return Win;
else if (playground [FourthPlayGround] == playground[FifthPlayGround] && playground[FifthPlayGround] == playground[SixthPlayGround])
    return Win;
else if (playground [SeventhPlayGround] == playground[EighthPlayGround] && playground[EighthPlayGround] == playground[NinthPlayGround])
    return Win;
else if (playground [FirstPlayGround] == playground[FourthPlayGround] && playground[FourthPlayGround] == playground[SeventhPlayGround])
    return Win;
else if (playground [SecondPlayGround] == playground[FifthPlayGround] && playground[FifthPlayGround] == playground[EighthPlayGround])
    return Win;
else if (playground [ThirdPlayGround] == playground[SixthPlayGround] && playground[SixthPlayGround] == playground[NinthPlayGround])
    return Win;
else if (playground [FirstPlayGround] == playground[FifthPlayGround] && playground[FifthPlayGround] == playground[NinthPlayGround])
    return Win;
else if (playground [ThirdPlayGround] == playground[FifthPlayGround] && playground[FifthPlayGround] == playground[SeventhPlayGround])
    return Win;
else if (playground [FirstPlayGround] != '1' && playground [SecondPlayGround] != '2' && playground [ThirdPlayGround] != '3' && playground [FourthPlayGround] != '4'
         && playground [FifthPlayGround] != '5' && playground [SixthPlayGround] != '6' && playground [SeventhPlayGround] != '7'
          && playground [EighthPlayGround] != '8' && playground [NinthPlayGround] != '9')
    return Draw;
else
    return Continue;
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
    printf("  %c  |  %c  |  %c \n", playground[FirstPlayGround], playground[SecondPlayGround], playground[ThirdPlayGround]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", playground[FourthPlayGround], playground[FifthPlayGround], playground[SixthPlayGround]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", playground[SeventhPlayGround], playground[EighthPlayGround], playground[NinthPlayGround]);

    printf("     |     |     \n\n");
}
