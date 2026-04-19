#include<stdio.h>
 
int main(void){
    FILE *fptr;
    char name[50];
    int grade;
 
    fptr = fopen("grades.txt", "w");
    if(fptr == NULL){
        printf("Unable to create or open the file.\n");
        return 1;
    }
 
    printf("Enter details for 3 students:\n");
    for(int i = 0; i < 3; i++){
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", name);
 
        printf("Student %d Grade: ", i + 1);
        scanf("%d", &grade);
 
        fprintf(fptr, "%s %d\n", name, grade);
    }
    fclose(fptr);
 
    fptr = fopen("grades.txt", "r");
    if(fptr == NULL){
        printf("Unable to read the file.\n");
        return 1;
    }
 
    printf("\n--- Stored Student Records ---\n");
    while(fscanf(fptr, "%s %d", name, &grade) == 2){
        printf("Name: %s | Grade: %d\n", name, grade);
    }
 
    fclose(fptr);
 
    return 0;
}
