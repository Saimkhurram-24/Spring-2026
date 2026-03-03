#include <stdio.h>

int main() {

    int password;

    do {
        printf("Enter Password: ");
        scanf("%d", &password);

        if(password == 1234) {
            printf("Login Successful\n");
        }
        else {
            printf("Wrong Password\n");
        }

    } while(password != 1234);

    return 0;
}
