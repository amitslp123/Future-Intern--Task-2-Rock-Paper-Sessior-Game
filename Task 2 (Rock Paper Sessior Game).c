#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// CC = Computer Choice

char CC() {
    int n = rand() % 3;
    switch (n) {
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
    }
    return 'r';
}
void winner(char player, char comp) {
    if (player == comp) {
        printf("It's a tie!\n");
    } else if ((player == 'r' && comp == 's') || (player == 'p' && comp == 'r') || (player == 's' && comp == 'p')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    system("cls");
    char player, replay;
    srand(time(0));

    printf("\tWelcome to Rock, Paper, Scissors!\n");
    printf("Enter 'r' for Rock, 'p' for Paper, and 's' for Scissors.\n");

    do {
         while(1){
            printf("\nEnter your choice: ");
            scanf(" %c", &player);
            if(player == 'r' || player == 'p' || player == 's'){
                printf("\nYou selected: ");
                switch (player) {
                    case 'r': printf("Rock\n"); break;
                    case 'p': printf("Paper\n"); break;
                    case 's': printf("Scissors\n"); break;
                }
            break;
            }
            else{
                printf("Invalid Input! Retry ...\n");
                continue;
            } 
        }

        char comp = CC();
        printf("Computer chose: ");
        switch (comp) {
            case 'r': printf("Rock\n"); break;
            case 'p': printf("Paper\n"); break;
            case 's': printf("Scissors\n"); break;
        }

        winner(player, comp);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &replay);

    } while (replay == 'y' || replay == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}