#include<stdio.h>
#include<string.h>
 
int main(void){
    char stored[] = "Secure@123";
    char input[50];
 
    for(int i = 0; i < 3; i++){
        printf("Enter your password (Attempt %d of 3): ", i + 1);
        scanf("%s", input);
 
        if(strlen(input) == 0){
            printf("Error: Password cannot be empty.\n");
            continue;
        }
 
        if(strcmp(stored, input) == 0){
            printf("Access granted. Welcome!\n");
            return 0;
        }
 
        if(i >= 1){
            if(strncmp(stored, input, 3) == 0)
                printf("Hint: The first 3 characters are correct.\n");
            else
                printf("Hint: The first 3 characters are incorrect.\n");
        }
 
        int cmp = strcmp(input, stored);
        if(cmp < 0)
            printf("Hint: Your input comes alphabetically before the correct password.\n");
        else
            printf("Hint: Your input comes alphabetically after the correct password.\n");
    }
 
    printf("Account locked due to too many failed attempts.\n");
    return 0;
}
