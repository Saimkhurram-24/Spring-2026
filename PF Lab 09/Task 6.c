#include <stdio.h>

int main()
{
    float b[5];
    int i, best = 0;
    float total = 0;

    printf("Enter 5 table bills:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &b[i]);
        total = total + b[i];
    }

    for(i = 1; i < 5; i++)
    {
        if(b[i] >= b[best])
            best = i;
    }

    printf("\n--- Summary ---\n");
    printf("Total = %.2f\n", total);
    printf("Top Table = %d\n", best + 1);

    if(total > 10000)
        printf("Status = Good Profit\n");
    else
        printf("Status = Low Profit\n");

    return 0;
}
