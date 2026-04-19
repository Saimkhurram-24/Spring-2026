#include<stdio.h>
#include<string.h>
 
int main(void){
    char words[6][20];
    int seen[6] = {0};
 
    printf("Enter 6 words:\n");
    for(int i = 0; i < 6; i++){
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }
 
    printf("\n--- Word Frequency Report ---\n");
    for(int i = 0; i < 6; i++){
        if(seen[i]) continue;
 
        int count = 0;
        for(int j = 0; j < 6; j++){
            if(strcmp(words[i], words[j]) == 0){
                count++;
                seen[j] = 1;
            }
        }
 
        printf("Word \"%s\" appears %d time(s).\n", words[i], count);
        printf("Characters: ");
        for(int j = 0; words[i][j] != '\0'; j++){
            printf("%c ", words[i][j]);
        }
        printf("\n\n");
    }
 
    return 0;
}
