#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int game;

    while (true) {
        printf("\nDo you want to play game (1=play,-1=exit) :\n");
        scanf("%d", &game);

        if (game == 1) {
            break;
        } else if (game == -1) {
            printf("\nSee you again.\n");
            return 0;
        } else {
            printf("\nInvalid choice, please enter 1 or -1 ONLY! \n");
        }
    }

    
    int score = 100;
    int winnum;
    int guess;
    int low = 1, high = 100;

    srand(time(NULL));
    winnum = rand() % 100 + 1;

    printf("\n(Score=%d)\n", score);

    while (true) {
        printf("\nGuess the winning number (%d-%d) :\n", low, high);
        scanf("%d", &guess);

        if (guess == winnum) {
            printf("\nScore this game: %d\n", score);
            printf("That is correct! The winning number is %d.\n", winnum);
            break;
        } else {
            score -= 10;
            if (score <= 0) {
                printf("\nSorry, your score is 0. The winning number was %d.\n", winnum);
                break;
            }

            if (guess < winnum) {
                if (guess >= low) low = guess + 1;
                printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
            } else {
                if (guess <= high) high = guess - 1;
                printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
            }
        }
    }
    main();
}
