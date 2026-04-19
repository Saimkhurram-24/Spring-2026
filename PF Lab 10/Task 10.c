#include<stdio.h>
 
int main(void){
    FILE *fptr;
    char name[50];
    int s1, s2, s3;
 
    printf("Enter student's name: ");
    scanf("%s", name);
 
    printf("Enter scores for 3 subjects (separated by space): ");
    scanf("%d %d %d", &s1, &s2, &s3);
 
    float avg = (float)(s1 + s2 + s3) / 3;
    char *status = (avg >= 50) ? "Pass" : "Fail";
 
    fptr = fopen("report.txt", "w+");
    if(fptr == NULL){
        printf("Unable to create or open the report file.\n");
        return 1;
    }
 
    fprintf(fptr, "========== Student Report ==========\n");
    fprintf(fptr, "Name       : %s\n", name);
    fprintf(fptr, "Subject 1  : %d\n", s1);
    fprintf(fptr, "Subject 2  : %d\n", s2);
    fprintf(fptr, "Subject 3  : %d\n", s3);
    fprintf(fptr, "Average    : %.2f\n", avg);
    fprintf(fptr, "Result     : %s\n", status);
    fprintf(fptr, "====================================\n");
 
    rewind(fptr);
 
    printf("\n--- Generated Report ---\n\n");
    char line[100];
    while(fgets(line, 100, fptr)){
        printf("%s", line);
    }
 
    fclose(fptr);
 
    return 0;
}
