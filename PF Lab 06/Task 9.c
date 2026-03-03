#include <stdio.h>

int main() {

    int boxes, i;
    int total = 0;

    printf("Enter number of boxes: ");
    scanf("%d", &boxes);

    for(i = 1; i <= boxes; i++) {
        printf("Box %d needs %d decorative items\n", i, i);
        total = total + i;
    }

    printf("Total decorative items needed: %d", total);

    return 0;
}
