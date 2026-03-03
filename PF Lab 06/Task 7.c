#include <stdio.h>

int main() {

    int choice;
    float n1, n2, result;

    do {
        printf("\nCalculator Menu\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1 || choice == 2) {

            printf("Enter first number: ");
            scanf("%f", &n1);

            printf("Enter second number: ");
            scanf("%f", &n2);
        }

        if(choice == 1) {
            result = n1 + n2;
            printf("Answer = %.2f\n", result);
        }
        else if(choice == 2) {
            result = n1 - n2;
            printf("Answer = %.2f\n", result);
        }
        else if(choice == 0) {
            printf("Program Ended\n");
        }
        else {
            printf("Invalid Choice\n");
        }

    } while(choice != 0);

    return 0;
}
