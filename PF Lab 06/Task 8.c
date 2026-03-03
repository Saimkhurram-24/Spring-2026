#include <stdio.h>

int main() {

    int secret = 7;
    int guess;

    while(1) {

        printf("Guess the number: ");
        scanf("%d", &guess);

        if(guess > secret) {
            printf("Number is too high\n");
        }
        else if(guess < secret) {
            printf("Number is too low\n");
        }
        else {
            printf("You guessed it right!\n");
            break;   // stop the loop
        }
    }

    return 0;
}
