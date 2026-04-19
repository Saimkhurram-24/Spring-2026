#include<stdio.h>
#include<string.h>
 
int main(void){
    char names[5][30];
 
    printf("Enter the names of 5 students:\n");
    for(int i = 0; i < 5; i++){
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
 
    printf("\n--- Student Roll Call ---\n");
    for(int i = 0; i < 5; i++){
        printf("%d) %s\n", i + 1, names[i]);
    }
 
    char search[30];
    printf("\nEnter the name you want to find: ");
    fgets(search, 30, stdin);
    search[strcspn(search, "\n")] = '\0';
 
    int found = 0;
    for(int i = 0; i < 5; i++){
        if(strcmp(names[i], search) == 0){
            printf("Student found at position %d in the list.\n", i + 1);
            found = 1;
            break;
        }
    }
 
    if(!found){
        printf("Student name not found in the list.\n");
    }
 
    return 0;
}
