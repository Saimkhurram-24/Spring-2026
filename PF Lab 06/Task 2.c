#include <stdio.h>

int main() {

    int balance, withdraw;

    printf("Enter your account balance: ");
    scanf("%d", &balance);

    while(balance > 0) {
        printf("Enter withdraw amount: ");
        scanf("%d", &withdraw);

        balance = balance - withdraw;
    }

    printf("Final balance: %d", balance);

    return 0;
}
