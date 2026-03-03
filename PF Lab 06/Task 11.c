#include <stdio.h>

int main() {

    float price, total = 0, discount = 0, finalAmount;
    int choice;

    printf("Do you want to buy a product? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);

    do {
        if(choice == 1) {

            printf("Enter product price: ");
            scanf("%f", &price);

            total = total + price;

            printf("Current Total: %.2f\n", total);

            printf("Do you want to buy another product? (1 = Yes, 0 = No): ");
            scanf("%d", &choice);
        }

    } while(choice == 1);

    // Apply discount if total is greater than 5000
    if(total > 5000) {
        discount = total * 0.05;
    }

    finalAmount = total - discount;

    printf("\nTotal Bill: %.2f", total);
    printf("\nDiscount: %.2f", discount);
    printf("\nFinal Payable Amount: %.2f", finalAmount);

    return 0;
}
