#include <stdio.h>
#include <string.h>

struct Order
{
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};

float computeTotal(struct Order o)
{
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order orders[], int n, char *status)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(strcmp(orders[i].status, status) == 0)
        {
            printf("\nOrder ID: %d\n", orders[i].orderID);
            printf("Customer: %s\n", orders[i].customerName);
            printf("Product: %s\n", orders[i].productName);
            printf("Quantity: %d\n", orders[i].quantity);
            printf("Unit Price: %.2f\n", orders[i].unitPrice);
            printf("Status: %s\n", orders[i].status);
            printf("Total: %.2f\n", computeTotal(orders[i]));
            found = 1;
        }
    }

    if(found == 0)
        printf("No orders found with this status\n");
}

int main()
{
    struct Order orders[4];
    int i;
    char status[20];

    for(i = 0; i < 4; i++)
    {
        printf("\nEnter details for order %d\n", i + 1);

        printf("Order ID: ");
        scanf("%d", &orders[i].orderID);

        printf("Customer Name: ");
        scanf(" %[^\n]", orders[i].customerName);

        printf("Product Name: ");
        scanf(" %[^\n]", orders[i].productName);

        printf("Quantity: ");
        scanf("%d", &orders[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &orders[i].unitPrice);

        printf("Status: ");
        scanf("%s", orders[i].status);
    }

    printf("\nAll Orders with Total:\n");
    for(i = 0; i < 4; i++)
    {
        printf("\nOrder ID: %d\n", orders[i].orderID);
        printf("Customer: %s\n", orders[i].customerName);
        printf("Product: %s\n", orders[i].productName);
        printf("Total: %.2f\n", computeTotal(orders[i]));
    }

    printf("\nEnter status to filter: ");
    scanf("%s", status);

    filterByStatus(orders, 4, status);

    return 0;
}
