#include <stdio.h>

float discount(float p, int t)
{
    if(t == 1)
        p = p - (p * 5 / 100);
    else if(t == 2)
        p = p - (p * 10 / 100);
    else if(t == 3)
        p = p - (p * 20 / 100);
    else if(t == 4)
        p = p - (p * 30 / 100);

    return p;
}

int main()
{
    float price, newPrice, total;
    int tier;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter tier: ");
    scanf("%d", &tier);

    newPrice = discount(price, tier);

    printf("\n------Bill------\n");
    printf("Price = %.2f\n", price);
    printf("After Discount = %.2f\n", newPrice);
    printf("Saved = %.2f\n", price - newPrice);

    if(newPrice < 2000)
    {
        total = newPrice + 150;
        printf("Delivery = 150\n");
    }
    else
    {
        total = newPrice;
        printf("Delivery = 0\n");
    }

    printf("Total = %.2f\n", total);

    return 0;
}
