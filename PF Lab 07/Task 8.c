#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (non-alphabets only): ");
    scanf("%[^A-Za-z]", str);

    printf("Non-alphabetic characters entered: %s", str);

    return 0;
}
