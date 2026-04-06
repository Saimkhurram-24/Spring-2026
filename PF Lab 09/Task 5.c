#include <stdio.h>

int main()
{
    float kwh, mj, btu, cal;

    printf("Enter units in kWh: ");
    scanf("%f", &kwh);

    mj = 3.6 * kwh;
    btu = kwh * 3400 + (kwh * 12.14);  
    cal = kwh * 860000 - (kwh * 155);  

    printf("\n--- Conversion ---\n");
    printf("In MJ = %.2f\n", mj);
    printf("In BTU = %.2f\n", btu);
    printf("In Calories = %.2f\n", cal);

    if(mj > 0)
        printf("Energy converted successfully\n");

    return 0;
}
