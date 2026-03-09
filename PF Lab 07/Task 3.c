#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i = 0, j = 0, marks;
    int sum1 = 0, sum2 = 0;
    float avg1 = 0, avg2 = 0;

    while(1) {
        printf("Enter marks (-1 to stop): ");
        scanf("%d", &marks);

        if(marks == -1)
            break;

        if(marks >= 5 && marks <= 10 && i < 10) {
            pass[i] = marks;
            sum1 = sum1 + marks;
            i++;
        }
        else if(marks >= 0 && marks < 5 && j < 10) {
            fail[j] = marks;
            sum2 = sum2 + marks;
            j++;
        }
    }

    printf("Pass marks:\n");
    for(int k = 0; k < i; k++) {
        printf("%d ", pass[k]);
    }

    if(i > 0)
        avg1 = (float)sum1 / i;

    printf("\nAverage of pass marks: %.2f\n", avg1);

    printf("Fail marks:\n");
    for(int k = 0; k < j; k++) {
        printf("%d ", fail[k]);
    }

    if(j > 0)
        avg2 = (float)sum2 / j;

    printf("\nAverage of fail marks: %.2f\n", avg2);

    return 0;
}
