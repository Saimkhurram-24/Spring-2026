#include<stdio.h>
 
int main(void){
    FILE *fptr;
    int score, sum = 0, val;
 
    fptr = fopen("survey.txt", "w");
    if(fptr == NULL){
        printf("Unable to create or open the survey file.\n");
        return 1;
    }
 
    printf("Enter 5 survey scores (range: 1 to 10):\n");
    for(int i = 0; i < 5; i++){
        printf("Score %d: ", i + 1);
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);
 
    fptr = fopen("survey.txt", "r");
    if(fptr == NULL){
        printf("Unable to read the survey file.\n");
        return 1;
    }
 
    int count = 0;
    while(fscanf(fptr, "%d", &val) == 1){
        sum += val;
        count++;
    }
    fclose(fptr);
 
    float avg = (float)sum / count;
 
    printf("\n--- Survey Results ---\n");
    printf("Total of all scores: %d\n", sum);
    printf("Average score: %.2f\n", avg);
 
    return 0;
}
