#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand(time(NULL)); // This number generates random numbers when the given argument changes, thus we give time(NULL) as it's argument, which keep changing and everytime we run the program.
    // printf("The random number generated between 1 and 100 is : %i", rand()%101);

    // The rand function determines the range in which the random number would be generated.

    // Take the name of the player:
    char name[10];
    printf("Enter the name of the player: ");
    gets(name);

    // Scores of the players:

    int nscore = 0; // Human
    int cscore = 0; // Computer

    char pieces[][8] = {"Rock", "Paper", "Scissor"};

    printf("\n\tHello %s!", name);

    printf("\n\tIn this game, you will have three options: Rock, Paper, and Scissors.\n\tTo play, just press the following buttons\n\t\t1: For Rock\n\t\t2: For Paper\n\t\t3: For Scissors\n\tIn this game, rock beats scissors, scissors beat paper, and paper beats rock.\n\t\tGood Luck %s!!!", name);

    for (int count = 1; count <= 3; count++)
    {
        printf("\n\n\tround: %i", count);
        int choice;

        printf("\n\tEnter your choice: ");
        scanf("%i", &choice);

        int a = 0;
        a = rand() % 3 + 1; // random number for computer to pick between rock, paper, and scissor.

        switch (choice)
        {
        // case of picking the rock
        case 1:
            printf("\tYour Choice: %s", pieces[choice - 1]);
            printf("\t\tComputer's Choice: %s", pieces[a - 1]);
            if (a == 2)
            {
                // case of computer winning by picking paper
                printf("\n\tRound %i winner: Computer.", count);
                cscore++;
            }
            if (a == 3)
            {
                // case of computer losing by picking scissors
                printf("\n\tRound %i winner: You.", count);
                nscore++;
            }
            if (a == 1)
            {
                // case of a tie
                printf("\n\tRound %i winner: Tie.", count);
            }
            break;

        // case of picking up paper
        case 2:
            printf("\tYour Choice: %s", pieces[choice - 1]);
            printf("\t\tComputer's Choice: %s", pieces[a - 1]);
            if (a == 3)
            {
                // case of computer winning by picking scissors
                printf("\n\tRound %i winner: Computer.", count);
                cscore++;
            }
            if (a == 1)
            {
                // case of computer losing by picking rock
                printf("\n\tRound %i winner: You.", count);
                nscore++;
            }
            if (a == 2)
            {
                // case of a tie
                printf("\n\tRound %i winner: Tie.", count);
            }
            break;

        // case of picking up the scissors
        case 3:
            printf("\tYour Choice: %s", pieces[choice - 1]);
            printf("\t\tComputer's Choice: %s", pieces[a - 1]);
            if (a == 1)
            {
                // case of computer winning by picking rock
                printf("\n\tRound %i winner: Computer.", count);
                cscore++;
            }
            if (a == 2)
            {
                // case of computer losing by picking paper
                printf("\n\tRound %i winner: You.", count);
                nscore++;
            }
            if (a == 3)
            {
                // case of a tie.
                printf("\n\tRound %i winner: Tie.", count);
            }
            break;

        default:
            printf("\n\tEnter a valid choice");
            break;
        }

        // Score check at the end of the round.
        printf("\n\tEnd of round %i. Scores so far:\n\t\tHuman: %i\t\tComputer: %i", count, nscore, cscore);
    }

    printf("\n\n\tAll rounds are clear. The winner of the game is : ");
    if (nscore > cscore)
    {
        printf(" You\n");
    }
    else if (nscore < cscore)
    {
        printf(" Computer\n");
    }
    else
    {
        printf("No one. It's a tie\n");
    }
}
