#include<stdio.h>
 
int main(void){
    FILE *fptr;
    char product[50];
    int qty;
 
    fptr = fopen("inventory.txt", "a");
    if(fptr == NULL){
        printf("Unable to open the inventory file.\n");
        return 1;
    }
 
    printf("Enter product details:\n");
    printf("Product name: ");
    scanf("%s", product);
 
    printf("Quantity: ");
    scanf("%d", &qty);
 
    fprintf(fptr, "%s %d\n", product, qty);
    fclose(fptr);
 
    fptr = fopen("inventory.txt", "r");
    if(fptr == NULL){
        printf("Unable to read the inventory file.\n");
        return 1;
    }
 
    printf("\n--- Current Inventory List ---\n");
    while(fscanf(fptr, "%s %d", product, &qty) == 2){
        printf("Product: %s | Quantity: %d\n", product, qty);
    }
 
    fclose(fptr);
 
    return 0;
}
