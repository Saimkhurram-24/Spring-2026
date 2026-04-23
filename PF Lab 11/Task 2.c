#include <stdio.h>

int countUpper(char *str)
{
    if(*str == '\0')
        return 0;

    if(*str >= 'A' && *str <= 'Z')
        return 1 + countUpper(str + 1);
    else
        return countUpper(str + 1);
}

int countUpperDigit(char *str, int *digits)
{
    if(*str == '\0')
        return 0;

    int up = 0;

    if(*str >= 'A' && *str <= 'Z')
        up = 1;

    if(*str >= '0' && *str <= '9')
        (*digits)++;

    return up + countUpperDigit(str + 1, digits);
}

int main()
{
    char str[100];
    int digits = 0;

    printf("Enter password: ");
    scanf("%s", str);

    printf("Uppercase letters = %d\n", countUpper(str));

    digits = 0;
    int upper = countUpperDigit(str, &digits);

    printf("Uppercase letters = %d\n", upper);
    printf("Digits = %d\n", digits);

    return 0;
}
