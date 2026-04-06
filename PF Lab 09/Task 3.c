#include <stdio.h>

int main()
{
    int a[10];
    int i, sum = 0, max, count = 0;
    float avg;

    printf("Enter 10 match scores:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 10.0;

    max = a[0];
    for(i = 0; i < 10; i++)
    {
        if(a[i] >= max)
            max = a[i];
    }

    for(i = 0; i < 10; i++)
    {
        if(a[i] > avg)
            count = count + 1;
    }

    printf("\n--- Report ---\n");
    printf("Sum = %d\n", sum);
    printf("Avg = %.2f\n", avg);
    printf("Max = %d\n", max);
    printf("Above Avg = %d\n", count);

    return 0;
}
