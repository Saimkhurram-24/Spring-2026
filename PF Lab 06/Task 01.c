#include <stdio.h>
int main() {
int i, present = 0, input;

    printf("Attendance System\n");
    printf("Enter 1 for Present and 0 for Absent\n");

    for(i = 1; i <= 30; i++) {
        printf("Student %d: ", i);
        scanf("%d", &input);

        if(input == 1) {
            present = present + 1;
        }
    }

    printf("Total Present: %d\n", present);
    printf("Total Absent: %d", 30 - present);

    return 0;
}
