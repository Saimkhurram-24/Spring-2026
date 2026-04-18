#include<stdio.h>
#include<string.h>
 
int main(void){
    char email[100], copy[100], label[120];
 
    printf("Enter your email address: ");
    scanf("%s", email);
 
    strcpy(copy, email);
 
    char *at = strchr(copy, '@');
    if(at == NULL){
        printf("Invalid email: '@' symbol not found.\n");
        return 1;
    }
 
    char *domain = at + 1;
    printf("Extracted domain: %s\n", domain);
 
    if(strstr(domain, ".") == NULL)
        printf("Warning: The domain does not contain a '.' separator.\n");
 
    strcpy(label, "Entered Email: ");
    strcat(label, copy);
    printf("%s\n", label);
 
    return 0;
}
