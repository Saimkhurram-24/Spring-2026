#include<stdio.h>
 
int main(void){
    FILE *fptr = fopen("config.txt", "r");
 
    if(fptr == NULL){
        printf("Configuration file not found.\n");
        printf("Creating a default configuration file...\n");
 
        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "debug_mode=0\n");
        fclose(fptr);
 
        printf("Default configuration file has been created successfully.\n");
    } else {
        printf("Configuration file found. Loading settings:\n\n");
 
        char line[100];
        while(fgets(line, 100, fptr)){
            printf("%s", line);
        }
        fclose(fptr);
    }
 
    return 0;
}
