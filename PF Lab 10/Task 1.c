#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char name[100];
    int hasDigit = 0;

    printf("Enter your name: ");
    scanf("%[^\n]s", name);

    for(int i = 0; i < strlen(name); i++){
        if(isdigit(name[i])){
            hasDigit = 1;
        }
    }

    if(strlen(name) < 4 || strlen(name) > 19){
        printf("\nInvalid name: length must be between 4 and 19 characters.");
    }
    else if(name[0] == ' ' || name[strlen(name) - 1] == ' '){
        printf("\nInvalid name: cannot start or end with a space.");
    }
    else if(hasDigit){
        printf("\nInvalid name: digits are not allowed.");
    }
    else{
        printf("\nValid name.");
    }

    return 0;
}
