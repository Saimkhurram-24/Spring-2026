#include <stdio.h>

int totalPower(int floors)
{
    if(floors == 1)
        return 100;

    return 2 * totalPower(floors - 1) + 100;
}

int main()
{
    int n;

    printf("Enter number of floors: ");
    scanf("%d", &n);

    printf("Total power consumption = %d kWh\n", totalPower(n));

    return 0;
}
