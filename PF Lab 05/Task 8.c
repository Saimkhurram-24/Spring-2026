#include <stdio.h>
#include <math.h>
int main(){
    int choice;
    float w, h, age, result;
    printf("===== HEALTH CALCULATOR =====\n1. BMI\n2. BMR\n3. Ideal Weight\n4. Heart Rate\n\nSelect (1-4): ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("\nEnter Weight (kg) and Height (m): ");
            scanf("%f %f", &w, &h);
            if (w > 0 && h > 0) {
                result = w / pow(h, 2);
                printf("\nBMI: %.2f\n", result);
            }else{
                printf("\nInvalid Input\n");
            }
            break;
        case 2:
            printf("\nEnter Weight (kg), Height (cm), Age: ");
            scanf("%f %f %f", &w, &h, &age);
            if (w > 0 && h > 0 && age > 0) {
                result = 10 * w + 6.25 * h - 5 * age + 5;
                printf("\nBMR: %.2f\n", result);
            } else printf("\nInvalid Input\n");
            break;
        case 3:
            printf("\nEnter Height (cm): ");
            scanf("%f", &h);
            if (h > 0) {
                result = 50 + 2.3 * ((h / 2.54) - 60);
                printf("\nIdeal Weight: %.2f kg\n", -result);
            } else printf("\nInvalid Input\n");
            break;
        case 4:
            printf("\nEnter Age: ");
            scanf("%f", &age);
            if (age > 0) {
                result = (220 - age) * 0.70;
                printf("\nTarget Heart Rate: %.2f bpm\n", result);
            } else printf("\nInvalid Input\n");
            break;
    }
    return 0;
}
