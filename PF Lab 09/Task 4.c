#include <stdio.h>

int main()
{
    int pin = 4729;
    int input, tries = 3;
    int ok = 0;

    while(tries > 0)
    {
        printf("Enter your PIN: ");
        scanf("%d", &input);

        if(input == pin)
        {
            ok = 1;
            break;
        }
        else
        {
            tries--;
            if(tries > 0)
                printf("Incorrect PIN. Left: %d\n", tries);
        }
    }

    if(ok == 1)
        printf("Login successful\n");
    else
        printf("Blocked\n");

    return 0;
}
