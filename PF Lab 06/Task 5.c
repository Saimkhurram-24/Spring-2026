#include <stdio.h>

int main() {

    int temp, sum = 0, count = 0;
    int average;

    printf("Enter temperature (-999 to stop): ");
    scanf("%d", &temp);

    while(temp != -999) {

        sum = sum + temp;
        count = count + 1;

        printf("Enter temperature (-999 to stop): ");
        scanf("%d", &temp);
    }

    if(count > 0) {
        average = sum / count;
        printf("Average temperature is: %d", average);
    }
    else {
        printf("No temperature entered.");
    }

    return 0;
}
