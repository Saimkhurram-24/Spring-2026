#include <stdio.h>

int main()
{
    int att[4][5] = {
        {1, 0, 1, 1, 0},
        {0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };

    int (*ptr)[5] = att;

    printf("---- Attendance ----\n");

    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        printf("Student %d: ", i + 1);

        for(int j = 0; j < 5; j++)
        {
            printf("%d ", ptr[i][j]);
            sum += ptr[i][j];
        }

        printf("| Total = %d", sum);
        if(sum < 3)
            printf(" (Warning: Low attendance)");
        printf("\n");
    }

    printf("-------------------\n");
    return 0;
}
