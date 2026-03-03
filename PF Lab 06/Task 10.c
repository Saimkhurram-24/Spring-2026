#include <stdio.h>

int main() {

    int score;
    int distinction = 0, pass = 0, fail = 0;

    while(1) {

        printf("Enter your score (0-100) or -1 to stop: ");
        scanf("%d", &score);

        if(score == -1) {
            break;
        }

        if(score >= 75) {
            distinction++;
        }
        else if(score >= 50) {
            pass++;
        }
        else if(score < 50) {
            fail++;
        }
        else {
            printf("Invalid input\n");
        }
    }

    printf("\nDistinction Students: %d", distinction);
    printf("\nPass Students: %d", pass);
    printf("\nFail Students: %d", fail);

    return 0;
}
